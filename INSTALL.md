# Xpdf

version 3.04
2014-may-28

The Xpdf software and documentation are
copyright 1996-2014 Glyph & Cog, LLC.

Email: derekn@foolabs.com
WWW: http://www.foolabs.com/xpdf/


## Compiling xpdf

Xpdf is written in C++ (with a little bit of C).  It should work with
any ANSI-compliant C++ and C compilers.  The systems and compilers
it's been tested with are listed on the xpdf web page.

Xpdf requires the Motif (or Lesstif) toolkit.

The following notes give specific instructions for compiling on
different systems.

### Linux

* Install FreeType 2.  WARNING: You must have
  version 2.0.5 or newer.

* Install Motif (or Lesstif).

* Run the configure script:

    meson builddir

  This should produce a set of ninjafiles customized for your system.

* Type 'ninja -C builddir'.  This should build the executables:

    xpdf
    pdftops
    pdftotext
    pdfinfo
    pdffonts
    pdfdetach
    pdftoppm
    pdfimages

If you want to run a quick test, there is a tiny PDF file included
with xpdf, as misc/hello.pdf .
