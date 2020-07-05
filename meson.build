project('Xpdf', ['cpp', 'c'], version: '3.04')

ft2_dep = dependency('freetype2', version : '>=2.0.5')

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I. -c GHash.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I. -c GList.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I. -c GString.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I. -c gmem.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I. -c gmempp.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I. -c gfile.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I. -c FixedPoint.cc
#gcc -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I. -c -o parseargs.o parseargs.c
#rm -f libGoo.a
#ar rc libGoo.a GHash.o GList.o GString.o gmem.o gmempp.o gfile.o FixedPoint.o parseargs.o
#ranlib libGoo.a

libGoo_sources = [
	'goo/GHash.cc',
	'goo/GList.cc',
	'goo/GString.cc',
	'goo/gmem.cc',
	'goo/gmempp.cc',
	'goo/gfile.cc',
	'goo/FixedPoint.cc',
	'goo/parseargs.c',
]

inc_goo = include_directories('goo')
libGoo = static_library('libGoo', libGoo_sources,
		include_directories: [inc_goo],
		cpp_args: ['-g','-O2','-DHAVE_CONFIG_H'],
	)

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I. -c FoFiBase.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I. -c FoFiEncodings.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I. -c FoFiIdentifier.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I. -c FoFiTrueType.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I. -c FoFiType1.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I. -c FoFiType1C.cc
#rm -f libfofi.a
#ar rc libfofi.a FoFiBase.o FoFiEncodings.o FoFiIdentifier.o FoFiTrueType.o FoFiType1.o FoFiType1C.o
#ranlib libfofi.a

libfofi_sources = [
	'fofi/FoFiBase.cc',
	'fofi/FoFiEncodings.cc',
	'fofi/FoFiIdentifier.cc',
	'fofi/FoFiTrueType.cc',
	'fofi/FoFiType1.cc',
	'fofi/FoFiType1C.cc',
]

inc_fofi = include_directories('fofi')
libfofi = static_library('libfofi', libfofi_sources,
		include_directories: [inc_fofi,inc_goo],
		cpp_args: ['-g','-O2','-DHAVE_CONFIG_H'],
	)

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c Splash.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashBitmap.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashClip.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashFTFont.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashFTFontEngine.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashFTFontFile.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashFont.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashFontEngine.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashFontFile.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashFontFileID.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashPath.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashPattern.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashScreen.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashState.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashXPath.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I. -I/usr/include/freetype2 -c SplashXPathScanner.cc
#rm -f libsplash.a
#ar rc libsplash.a Splash.o SplashBitmap.o SplashClip.o SplashFTFont.o SplashFTFontEngine.o SplashFTFontFile.o SplashFont.o SplashFontEngine.o SplashFontFile.o SplashFontFileID.o SplashPath.o SplashPattern.o SplashScreen.o SplashState.o SplashXPath.o SplashXPathScanner.o
#ranlib libsplash.a

libsplash_sources = [
	'splash/Splash.cc',
	'splash/SplashBitmap.cc',
	'splash/SplashClip.cc',
	'splash/SplashFTFont.cc',
	'splash/SplashFTFontEngine.cc',
	'splash/SplashFTFontFile.cc',
	'splash/SplashFont.cc',
	'splash/SplashFontEngine.cc',
	'splash/SplashFontFile.cc',
	'splash/SplashFontFileID.cc',
	'splash/SplashPath.cc',
	'splash/SplashPattern.cc',
	'splash/SplashScreen.cc',
	'splash/SplashState.cc',
	'splash/SplashXPath.cc',
	'splash/SplashXPathScanner.cc',
]

inc_splash = include_directories('splash')
libsplash = static_library('libsplash', libsplash_sources,
		include_directories: [inc_splash,inc_goo,inc_fofi],
		dependencies: [ft2_dep],
		cpp_args: ['-g','-O2','-DHAVE_CONFIG_H'],
	)

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c AcroForm.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Annot.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Array.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c BuiltinFont.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c BuiltinFontTables.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Catalog.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c CharCodeToUnicode.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c CMap.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c CoreOutputDev.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Decrypt.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Dict.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Error.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c FontEncodingTables.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Form.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Function.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Gfx.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c GfxFont.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c GfxState.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c GlobalParams.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c JArithmeticDecoder.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c JBIG2Stream.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c JPXStream.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Lexer.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Link.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c NameToCharCode.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Object.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c OptionalContent.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Outline.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c OutputDev.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Page.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Parser.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c PDFCore.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c PDFDoc.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c PDFDocEncoding.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c PreScanOutputDev.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c PSOutputDev.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c PSTokenizer.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c SecurityHandler.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c SplashOutputDev.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Stream.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c TextOutputDev.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c TextString.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c UnicodeMap.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c UnicodeTypeTable.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c XFAForm.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c XPDFApp.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c XPDFCore.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c XPDFTree.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c XPDFViewer.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c XpdfPluginAPI.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c XRef.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c Zoox.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c xpdf.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -o xpdf AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o CoreOutputDev.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFCore.o PDFDoc.o PDFDocEncoding.o PreScanOutputDev.o PSOutputDev.o PSTokenizer.o SecurityHandler.o SplashOutputDev.o Stream.o TextOutputDev.o TextString.o UnicodeMap.o UnicodeTypeTable.o XFAForm.o XPDFApp.o XPDFCore.o XPDFTree.o XPDFViewer.o XpdfPluginAPI.o XRef.o Zoox.o xpdf.o
#	-L../goo -lGoo -L../splash -lsplash -L../fofi -lfofi -L../goo -lGoo \
#	-lfreetype -lz -lXt -lXext -lSM -lICE -lX11 -lm \
#	-lXm

xpdf_sources = [
	'xpdf/AcroForm.cc',
	'xpdf/Annot.cc',
	'xpdf/Array.cc',
	'xpdf/BuiltinFont.cc',
	'xpdf/BuiltinFontTables.cc',
	'xpdf/Catalog.cc',
	'xpdf/CharCodeToUnicode.cc',
	'xpdf/CMap.cc',
	'xpdf/CoreOutputDev.cc',
	'xpdf/Decrypt.cc',
	'xpdf/Dict.cc',
	'xpdf/Error.cc',
	'xpdf/FontEncodingTables.cc',
	'xpdf/Form.cc',
	'xpdf/Function.cc',
	'xpdf/Gfx.cc',
	'xpdf/GfxFont.cc',
	'xpdf/GfxState.cc',
	'xpdf/GlobalParams.cc',
	'xpdf/JArithmeticDecoder.cc',
	'xpdf/JBIG2Stream.cc',
	'xpdf/JPXStream.cc',
	'xpdf/Lexer.cc',
	'xpdf/Link.cc',
	'xpdf/NameToCharCode.cc',
	'xpdf/Object.cc',
	'xpdf/OptionalContent.cc',
	'xpdf/Outline.cc',
	'xpdf/OutputDev.cc',
	'xpdf/Page.cc',
	'xpdf/Parser.cc',
	'xpdf/PDFCore.cc',
	'xpdf/PDFDoc.cc',
	'xpdf/PDFDocEncoding.cc',
	'xpdf/PreScanOutputDev.cc',
	'xpdf/PSOutputDev.cc',
	'xpdf/PSTokenizer.cc',
	'xpdf/SecurityHandler.cc',
	'xpdf/SplashOutputDev.cc',
	'xpdf/Stream.cc',
	'xpdf/TextOutputDev.cc',
	'xpdf/TextString.cc',
	'xpdf/UnicodeMap.cc',
	'xpdf/UnicodeTypeTable.cc',
	'xpdf/XFAForm.cc',
	'xpdf/XPDFApp.cc',
	'xpdf/XPDFCore.cc',
	'xpdf/XPDFTree.cc',
	'xpdf/XPDFViewer.cc',
	'xpdf/XpdfPluginAPI.cc',
	'xpdf/XRef.cc',
	'xpdf/Zoox.cc',
	'xpdf/xpdf.cc',
]

ice_dep = dependency('ice')
xt_dep = dependency('xt')
xext_dep = dependency('xext')
motif_dep = dependency('Motif', method: 'cmake')
z_dep = dependency('zlib')
png_dep = dependency('libpng')

# You must link -lXm *before* -lXt.

executable('xpdf', xpdf_sources,
		include_directories: [inc_splash,inc_goo,inc_fofi],
		cpp_args: ['-g','-O2','-DHAVE_CONFIG_H'],
		link_with: [libsplash,libfofi,libGoo],
		dependencies: [ice_dep,z_dep,motif_dep,xt_dep,xext_dep],
	)

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdftops.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -o pdftops AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o OptionalContent.o Outline.o Object.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PreScanOutputDev.o PSOutputDev.o PSTokenizer.o SecurityHandler.o SplashOutputDev.o Stream.o TextString.o UnicodeMap.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdftops.o -L../goo -lGoo -L../splash -lsplash -lfreetype -lz
#	-L../fofi -lfofi -L../goo -lGoo -lm

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdftotext.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2            -o pdftotext AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PSTokenizer.o SecurityHandler.o Stream.o TextOutputDev.o TextString.o UnicodeMap.o UnicodeTypeTable.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdftotext.o
#	-L../goo -lGoo -L../fofi -lfofi -L../goo -lGoo -lm

pdftotext_sources = [
	'xpdf/AcroForm.cc',
	'xpdf/Annot.cc',
	'xpdf/Array.cc',
	'xpdf/BuiltinFont.cc',
	'xpdf/BuiltinFontTables.cc',
	'xpdf/Catalog.cc',
	'xpdf/CharCodeToUnicode.cc',
	'xpdf/CMap.cc',
	'xpdf/Decrypt.cc',
	'xpdf/Dict.cc',
	'xpdf/Error.cc',
	'xpdf/FontEncodingTables.cc',
	'xpdf/Form.cc',
	'xpdf/Function.cc',
	'xpdf/Gfx.cc',
	'xpdf/GfxFont.cc',
	'xpdf/GfxState.cc',
	'xpdf/GlobalParams.cc',
	'xpdf/JArithmeticDecoder.cc',
	'xpdf/JBIG2Stream.cc',
	'xpdf/JPXStream.cc',
	'xpdf/Lexer.cc',
	'xpdf/Link.cc',
	'xpdf/NameToCharCode.cc',
	'xpdf/Object.cc',
	'xpdf/OptionalContent.cc',
	'xpdf/Outline.cc',
	'xpdf/OutputDev.cc',
	'xpdf/Page.cc',
	'xpdf/Parser.cc',
	'xpdf/PDFDoc.cc',
	'xpdf/PDFDocEncoding.cc',
	'xpdf/PSTokenizer.cc',
	'xpdf/SecurityHandler.cc',
	'xpdf/Stream.cc',
	'xpdf/TextOutputDev.cc',
	'xpdf/TextString.cc',
	'xpdf/UnicodeMap.cc',
	'xpdf/UnicodeTypeTable.cc',
	'xpdf/XFAForm.cc',
	'xpdf/XpdfPluginAPI.cc',
	'xpdf/XRef.cc',
	'xpdf/Zoox.cc',
	'xpdf/pdftotext.cc',
]

executable('pdftotext', pdftotext_sources,
		include_directories: [inc_splash,inc_goo,inc_fofi],
		cpp_args: ['-g','-O2','-DHAVE_CONFIG_H'],
		link_with: [libsplash,libfofi,libGoo],
	)

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c HTMLGen.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdftohtml.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -o pdftohtml AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o HTMLGen.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PSTokenizer.o SecurityHandler.o SplashOutputDev.o Stream.o TextOutputDev.o TextString.o UnicodeMap.o UnicodeTypeTable.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdftohtml.o \
#	-L../goo -lGoo -L../splash -lsplash -L../fofi -lfofi -L../goo -lGoo \
#	-lfreetype -lz -lpng -lm

pdftohtml_sources = [
	'xpdf/AcroForm.cc',
	'xpdf/Annot.cc',
	'xpdf/Array.cc',
	'xpdf/BuiltinFont.cc',
	'xpdf/BuiltinFontTables.cc',
	'xpdf/Catalog.cc',
	'xpdf/CharCodeToUnicode.cc',
	'xpdf/CMap.cc',
	'xpdf/Decrypt.cc',
	'xpdf/Dict.cc',
	'xpdf/Error.cc',
	'xpdf/FontEncodingTables.cc',
	'xpdf/Form.cc',
	'xpdf/Function.cc',
	'xpdf/Gfx.cc',
	'xpdf/GfxFont.cc',
	'xpdf/GfxState.cc',
	'xpdf/GlobalParams.cc',
	'xpdf/HTMLGen.cc',
	'xpdf/JArithmeticDecoder.cc',
	'xpdf/JBIG2Stream.cc',
	'xpdf/JPXStream.cc',
	'xpdf/Lexer.cc',
	'xpdf/Link.cc',
	'xpdf/NameToCharCode.cc',
	'xpdf/Object.cc',
	'xpdf/OptionalContent.cc',
	'xpdf/Outline.cc',
	'xpdf/OutputDev.cc',
	'xpdf/Page.cc',
	'xpdf/Parser.cc',
	'xpdf/PDFDoc.cc',
	'xpdf/PDFDocEncoding.cc',
	'xpdf/PSTokenizer.cc',
	'xpdf/SecurityHandler.cc',
	'xpdf/SplashOutputDev.cc',
	'xpdf/Stream.cc',
	'xpdf/TextOutputDev.cc',
	'xpdf/TextString.cc',
	'xpdf/UnicodeMap.cc',
	'xpdf/UnicodeTypeTable.cc',
	'xpdf/XFAForm.cc',
	'xpdf/XpdfPluginAPI.cc',
	'xpdf/XRef.cc',
	'xpdf/Zoox.cc',
	'xpdf/pdftohtml.cc',
]

executable('pdftohtml', pdftohtml_sources,
		include_directories: [inc_splash,inc_goo,inc_fofi],
		cpp_args: ['-g','-O2','-DHAVE_CONFIG_H'],
		link_with: [libsplash,libfofi,libGoo],
		dependencies: [png_dep],
	)

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdfinfo.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -o pdfinfo AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PSTokenizer.o SecurityHandler.o Stream.o TextString.o UnicodeMap.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdfinfo.o \
#	-L../goo -lGoo -L../fofi -lfofi -L../goo -lGoo -lm

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdffonts.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -o pdffonts AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PSTokenizer.o SecurityHandler.o Stream.o TextString.o UnicodeMap.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdffonts.o \
#	-L../goo -lGoo -L../fofi -lfofi -L../goo -lGoo -lm

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdfdetach.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -o pdfdetach AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PSTokenizer.o SecurityHandler.o Stream.o TextString.o UnicodeMap.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdfdetach.o \
#	-L../goo -lGoo -L../fofi -lfofi -L../goo -lGoo -lm

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdftoppm.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2            -o pdftoppm AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PSTokenizer.o SecurityHandler.o SplashOutputDev.o Stream.o TextOutputDev.o TextString.o UnicodeMap.o UnicodeTypeTable.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdftoppm.o \
#	-L../goo -lGoo -L../splash -lsplash -lfreetype -lz -L../fofi -lfofi -L../goo -lGoo -lm

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdftopng.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2            -o pdftopng AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PSTokenizer.o SecurityHandler.o SplashOutputDev.o Stream.o TextOutputDev.o TextString.o UnicodeMap.o UnicodeTypeTable.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdftopng.o \
#	-L../goo -lGoo -L../splash -lsplash -L../fofi -lfofi -L../goo -lGoo \
#	-lfreetype -lz -lpng -lm

pdftopng_sources = [
	'xpdf/AcroForm.cc',
	'xpdf/Annot.cc',
	'xpdf/Array.cc',
	'xpdf/BuiltinFont.cc',
	'xpdf/BuiltinFontTables.cc',
	'xpdf/Catalog.cc',
	'xpdf/CharCodeToUnicode.cc',
	'xpdf/CMap.cc',
	'xpdf/Decrypt.cc',
	'xpdf/Dict.cc',
	'xpdf/Error.cc',
	'xpdf/FontEncodingTables.cc',
	'xpdf/Form.cc',
	'xpdf/Function.cc',
	'xpdf/Gfx.cc',
	'xpdf/GfxFont.cc',
	'xpdf/GfxState.cc',
	'xpdf/GlobalParams.cc',
	'xpdf/JArithmeticDecoder.cc',
	'xpdf/JBIG2Stream.cc',
	'xpdf/JPXStream.cc',
	'xpdf/Lexer.cc',
	'xpdf/Link.cc',
	'xpdf/NameToCharCode.cc',
	'xpdf/Object.cc',
	'xpdf/OptionalContent.cc',
	'xpdf/Outline.cc',
	'xpdf/OutputDev.cc',
	'xpdf/Page.cc',
	'xpdf/Parser.cc',
	'xpdf/PDFDoc.cc',
	'xpdf/PDFDocEncoding.cc',
	'xpdf/PSTokenizer.cc',
	'xpdf/SecurityHandler.cc',
	'xpdf/SplashOutputDev.cc',
	'xpdf/Stream.cc',
	'xpdf/TextOutputDev.cc',
	'xpdf/TextString.cc',
	'xpdf/UnicodeMap.cc',
	'xpdf/UnicodeTypeTable.cc',
	'xpdf/XFAForm.cc',
	'xpdf/XpdfPluginAPI.cc',
	'xpdf/XRef.cc',
	'xpdf/Zoox.cc',
	'xpdf/pdftopng.cc',
]

executable('pdftopng', pdftopng_sources,
		include_directories: [inc_splash,inc_goo,inc_fofi],
		cpp_args: ['-g','-O2','-DHAVE_CONFIG_H'],
		link_with: [libsplash,libfofi,libGoo],
		dependencies: [png_dep],
	)

#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c ImageOutputDev.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2           -c pdfimages.cc
#g++ -g -O2 -DHAVE_CONFIG_H -I.. -I./.. -I./../goo -I./../fofi -I./../splash -I. -I/usr/include/freetype2            -o pdfimages AcroForm.o Annot.o Array.o BuiltinFont.o BuiltinFontTables.o Catalog.o CharCodeToUnicode.o CMap.o Decrypt.o Dict.o Error.o FontEncodingTables.o Form.o Function.o Gfx.o GfxFont.o GfxState.o GlobalParams.o ImageOutputDev.o JArithmeticDecoder.o JBIG2Stream.o JPXStream.o Lexer.o Link.o NameToCharCode.o Object.o OptionalContent.o Outline.o OutputDev.o Page.o Parser.o PDFDoc.o PDFDocEncoding.o PSTokenizer.o SecurityHandler.o Stream.o TextString.o UnicodeMap.o XFAForm.o XpdfPluginAPI.o XRef.o Zoox.o pdfimages.o \
#	-L../goo -lGoo -L../fofi -lfofi -L../goo -lGoo -lm

