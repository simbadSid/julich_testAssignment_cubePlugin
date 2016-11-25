/* ../src/cubelib-config-frontend.h.  Generated from cubelib-config-frontend.h.in by configure.  */
/* ../src/cubelib-config-frontend.h.in.  Generated from configure.ac by autoheader.  */

/* Name of the sub-build. */
#define AFS_PACKAGE_BUILD "frontend"

/* Symbol name of the sub-build in upper case. */
#define AFS_PACKAGE_BUILD_NAME FRONTEND

/* Symbol name of the sub-build in lower case. */
#define AFS_PACKAGE_BUILD_name frontend

/* The package name usable as a symbol in upper case. */
#define AFS_PACKAGE_NAME CUBELIB

/* Relative path to the top-level source directory. */
#define AFS_PACKAGE_SRCDIR "../"

/* The package name usable as a symbol in lower case. */
#define AFS_PACKAGE_name cubelib

/* Compression is enabled */
#define COMPRESSION 1

/* Select 'all rows in memory, on demand' as a data loading strategy */
#define CUBE_DEFAULT_ALL_IN_MEMORY 1

/* Select 'all rows in memory, preloaded' as a data loading strategy */
/* #undef CUBE_DEFAULT_ALL_IN_MEMORY_PRELOAD */

/* Select 'last N rows in memory' as a data loading strategy */
/* #undef CUBE_DEFAULT_LAST_N */

/* Select 'manual load' as a data loading strategy */
/* #undef CUBE_DEFAULT_MANUAL */

/* Select number of kept rows as $CUBE_N_LAST_ROWS */
/* #undef CUBE_N_LAST_ROWS */

/* Can link a close function */
#define HAVE_CLOSE 1

/* Define to 1 to enable additional debug output and checks. */
/* #undef HAVE_CUBELIB_DEBUG */

/* Define to 1 to disable assertions (like NDEBUG). */
#define HAVE_CUBELIB_NO_ASSERT 0

/* Define if Cube networking is available */
#define HAVE_CUBE_NETWORKING 1

/* Define to 1 if you have the declaration of `close', and to 0 if you don't.
   */
#define HAVE_DECL_CLOSE 1

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
   */
#define HAVE_DECL_FSEEKO 1

/* Define to 1 if you have the declaration of `fseeko64', and to 0 if you
   don't. */
#define HAVE_DECL_FSEEKO64 0

/* Define to 1 if you have the declaration of `getcwd', and to 0 if you don't.
   */
#define HAVE_DECL_GETCWD 1

/* Define to 1 if you have the declaration of `gethostid', and to 0 if you
   don't. */
#define HAVE_DECL_GETHOSTID 1

/* Define to 1 if you have the declaration of `gethostname', and to 0 if you
   don't. */
#define HAVE_DECL_GETHOSTNAME 1

/* Define to 1 if you have the declaration of `read', and to 0 if you don't.
   */
#define HAVE_DECL_READ 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Can link a fseeko function */
#define HAVE_FSEEKO 1

/* Can link a fseeko64 function */
/* #undef HAVE_FSEEKO64 */

/* Can link a getcwd function */
#define HAVE_GETCWD 1

/* Can link a gethostid function */
#define HAVE_GETHOSTID 1

/* Can link a gethostname function */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Can link against popen and pclose */
#define HAVE_POPEN 1

/* Define if POSIX socket headers are available */
#define HAVE_POSIX_SOCKET 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Can link a read function */
#define HAVE_READ 1

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

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

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "cubelib"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "scalasca@fz-juelich.de"

/* The #include argument used to include this packages error codes header. */
#define PACKAGE_ERROR_CODES_HEADER <CubeErrorCodes.h>

/* Define to the full name of this package. */
#define PACKAGE_NAME "CubeLib"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "CubeLib 4.4-TP3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "cubelib"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.scalasca.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4-TP3"

/* Directory where CubeLib data is stored */
#define PKGDATADIR "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/share/"

/* Directory where CubeLib executables to be run by other programs rather than
   by users are installed */
#define PKGLIBEXECDIR "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/libexec/"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "4.4-TP3"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */
