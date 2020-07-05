//========================================================================
//
// pdfindex.cc
//
// Copyright 1998-2013 Glyph & Cog, LLC
//
//========================================================================

#include <aconf.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "parseargs.h"
#include "GString.h"
#include "gmem.h"
#include "gfile.h"
#include "GlobalParams.h"
#include "Object.h"
#include "Outline.h"
#include "GList.h"
#include "Stream.h"
#include "Array.h"
#include "Dict.h"
#include "XRef.h"
#include "Catalog.h"
#include "Page.h"
#include "PDFDoc.h"
#include "CharTypes.h"
#include "UnicodeMap.h"
#include "TextString.h"
#include "Error.h"
#include "config.h"

static int firstPage = 1;
static int lastPage = 0;
static GBool printMetadata = gFalse;
static GBool rawDates = gFalse;
static char textEncName[128] = "";
static char ownerPassword[33] = "\001";
static char userPassword[33] = "\001";
static char cfgFileName[256] = "";
static GBool printVersion = gFalse;
static GBool printHelp = gFalse;

static void showItems(GList *items, UnicodeMap *uMap, int level)
{
  int size;
  int i, k, n;
  OutlineItem *item;
  Unicode *u;
  char buf[512] = { 0 };
  int length;
  int pad;

  size = items->getLength();
  for (i=0; i < size; i++) {
    item = (OutlineItem *)items->get(i);

    u = item->getTitle();
    length = item->getTitleLength();

    for (pad=0; pad < level; pad++) {
      fwrite("    ", 1, 4, stdout);
    }

    if (item->hasKids()) {
      fwrite("[-] ", 1, 4, stdout);
    } else {
      fwrite("[ ] ", 1, 4, stdout);
    }

    for (k = 0; k < length; ++k) {
      n = uMap->mapUnicode(u[k], buf, sizeof(buf));
      fwrite(buf, 1, n, stdout);
    }
    fputc('\n', stdout);

    item->open();
    if (item->hasKids()) {
        GList *child = item->getKids();
        showItems(child, uMap, level+1);
    }
    item->close();

  }
}

static void showOutline(Outline *outline, UnicodeMap *uMap)
{
  GList *items;

  items = outline->getItems();
  showItems(items, uMap, 0);
}

static ArgDesc argDesc[] = {
  {"-f",      argInt,      &firstPage,        0,
   "first page to convert"},
  {"-l",      argInt,      &lastPage,         0,
   "last page to convert"},
  {"-meta",   argFlag,     &printMetadata,    0,
   "print the document metadata (XML)"},
  {"-rawdates", argFlag,   &rawDates,         0,
   "print the undecoded date strings directly from the PDF file"},
  {"-enc",    argString,   textEncName,    sizeof(textEncName),
   "output text encoding name"},
  {"-opw",    argString,   ownerPassword,  sizeof(ownerPassword),
   "owner password (for encrypted files)"},
  {"-upw",    argString,   userPassword,   sizeof(userPassword),
   "user password (for encrypted files)"},
  {"-cfg",        argString,      cfgFileName,    sizeof(cfgFileName),
   "configuration file to use in place of .xpdfrc"},
  {"-v",      argFlag,     &printVersion,  0,
   "print copyright and version info"},
  {"-h",      argFlag,     &printHelp,     0,
   "print usage information"},
  {"-help",   argFlag,     &printHelp,     0,
   "print usage information"},
  {"--help",  argFlag,     &printHelp,     0,
   "print usage information"},
  {"-?",      argFlag,     &printHelp,     0,
   "print usage information"},
  {NULL}
};

int main(int argc, char *argv[]) {
  PDFDoc *doc;
  GString *fileName;
  GString *ownerPW, *userPW;
  UnicodeMap *uMap;
  Page *page;
  Object info, xfa;
  Object *acroForm;
  char buf[256];
  double w, h, wISO, hISO;
  FILE *f;
  GString *metadata;
  GBool ok;
  int exitCode;
  int pg, i;
  GBool multiPage;
  Outline *outline;

  exitCode = 99;

  // parse args
  ok = parseArgs(argDesc, &argc, argv);
  if (!ok || argc != 2 || printVersion || printHelp) {
    fprintf(stderr, "pdfinfo version %s\n", xpdfVersion);
    fprintf(stderr, "%s\n", xpdfCopyright);
    if (!printVersion) {
      printUsage("pdfinfo", "<PDF-file>", argDesc);
    }
    goto err0;
  }
  fileName = new GString(argv[1]);

  // read config file
  globalParams = new GlobalParams(cfgFileName);
  if (textEncName[0]) {
    globalParams->setTextEncoding(textEncName);
  }

  // get mapping to output encoding
  if (!(uMap = globalParams->getTextEncoding())) {
    error(errConfig, -1, "Couldn't get text encoding");
    delete fileName;
    goto err1;
  }

  // open PDF file
  if (ownerPassword[0] != '\001') {
    ownerPW = new GString(ownerPassword);
  } else {
    ownerPW = NULL;
  }
  if (userPassword[0] != '\001') {
    userPW = new GString(userPassword);
  } else {
    userPW = NULL;
  }
  doc = new PDFDoc(fileName, ownerPW, userPW);
  if (userPW) {
    delete userPW;
  }
  if (ownerPW) {
    delete ownerPW;
  }
  if (!doc->isOk()) {
    exitCode = 1;
    goto err2;
  }

  // print outline
  outline = doc->getOutline();
  showOutline(outline, uMap);

  exitCode = 0;

  // clean up
 err2:
  uMap->decRefCnt();
  delete doc;
 err1:
  delete globalParams;
 err0:

  // check for memory leaks
  Object::memCheck(stderr);
  gMemReport(stderr);

  return exitCode;
}
