ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -Im4

AM_CPPFLAGS = -Iredist -Isrc $(logging_CFLAGS)
AM_LDFLAGS  = $(logging_LIBS)

bin_PROGRAMS = bootstrap-cxx
check_PROGRAMS = unittests
TESTS = $(check_PROGRAMS)

common_sources = src/log.hpp

bootstrap_cxx_SOURCES = src/main.hpp src/main.cpp \
						src/foo.hpp src/foo.cpp \
						$(common_sources) src/log.cpp

unittests_SOURCES = src/test_runner.hpp src/test_runner.cpp \
					tests/foo_test.cpp src/foo.hpp src/foo.cpp

dist_noinst_SCRIPTS = autogen.sh
