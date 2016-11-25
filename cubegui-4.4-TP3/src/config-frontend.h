/* ../src/config-frontend.h.  Generated from config-frontend.h.in by configure.  */
/* ../src/config-frontend.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Name of the sub-build. */
#define AFS_PACKAGE_BUILD "frontend"

/* Symbol name of the sub-build in upper case. */
#define AFS_PACKAGE_BUILD_NAME FRONTEND

/* Symbol name of the sub-build in lower case. */
#define AFS_PACKAGE_BUILD_name frontend

/* The package name usable as a symbol in upper case. */
#define AFS_PACKAGE_NAME CUBEGUI

/* Relative path to the top-level source directory. */
#define AFS_PACKAGE_SRCDIR "../"

/* The package name usable as a symbol in lower case. */
#define AFS_PACKAGE_name cubegui

/* Stores path to the cubelib-config used to build Cube GUI */
#define CUBELIB_CONFIG "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/bin/cubelib-config"

/* Define to 1 if you have the <dbus/dbus.h> header file. */
/* #undef HAVE_DBUS_DBUS_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Interface version number */
#define LIBRARY_INTERFACE_VERSION "8:0:1"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define used Qt moc tool. */
/* #undef MOC */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "cubegui"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "scalasca@fz-juelich.de"

/* Define to the full name of this package. */
#define PACKAGE_NAME "CubeGUI"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "CubeGUI 4.4-TP3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "cubegui"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.scalasca.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4-TP3"

/* Directory where CubeGUI data is stored */
#define PKGDATADIR "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubegui-install/share/"

/* Directory where CubeGUI executables to be run by other programs rather than
   by users are installed */
#define PKGLIBEXECDIR "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubegui-install/libexec/"

/* Define path to the used Qt library. */
#define QT_PATH "/usr/lib64/qt4/bin/qmake"

/* Define used Qt specification. */
#define QT_SPECS "default"

/* Define version of used Qt library. */
#define QT_VERSION_CUBE "4.8.7"

/* Define used Qt rcc tool. */
/* #undef RCC */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define used Qt uic tool. */
/* #undef UIC */

/* Version number of package */
#define VERSION "4.4-TP3"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif
