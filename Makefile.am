ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -Im4

AM_CPPFLAGS = -Iredist -Isrc $(logging_CFLAGS)
AM_LDFLAGS  = $(logging_LIBS)

bin_PROGRAMS = bootstrap-cxx
check_PROGRAMS = unittests
TESTS = $(check_PROGRAMS)

common_sources = src/log.hh

bootstrap_cxx_SOURCES = src/main.hh src/main.cc \
						src/foo.hh src/foo.cc \
						$(common_sources) src/log.cc

unittests_SOURCES = src/test_runner.hh src/test_runner.cc \
					tests/foo_test.cc src/foo.hh src/foo.cc

dist_noinst_SCRIPTS = autogen.sh
