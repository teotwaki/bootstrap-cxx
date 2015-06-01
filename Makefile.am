ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -Im4

AM_CPPFLAGS = -Iredist/catch -Isrc $(logging_CFLAGS)
AM_LDFLAGS  = $(logging_LIBS)

bin_PROGRAMS = bootstrap-cxx
check_PROGRAMS = bootstrap-test
TESTS = $(check_PROGRAMS)

common_sources = src/log.hpp

bootstrap_cxx_SOURCES = src/main.hpp src/main.cpp \
						src/foo.hpp src/foo.cpp \
						$(common_sources) src/log.cpp

bootstrap_test_SOURCES = tests/bootstrap-test.cpp \
						 src/foo.hpp src/foo.cpp

dist_noinst_SCRIPTS = autogen.sh
