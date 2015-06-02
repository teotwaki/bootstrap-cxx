AC_PREREQ([2.69])

AC_INIT([bootstrap-cxx], [0.0.1], [replace-me@example.invalid],
		[bootstrap-cxx], [http://example.com])

AC_LANG_CPLUSPLUS
AC_PROG_CXX
AC_PROG_LIBTOOL

AC_CONFIG_FILES(Makefile)
AC_CONFIG_HEADER([config.hh])
AC_CONFIG_MACRO_DIR([m4])

PKG_CHECK_MODULES([logging], [libglog >= 0.3.3])

AM_INIT_AUTOMAKE([1.14 color-tests foreign parallel-tests std-options
				  subdir-objects])
AM_SILENT_RULES([yes])

AX_CXX_COMPILE_STDCXX_11([], [mandatory])
 
AC_OUTPUT
