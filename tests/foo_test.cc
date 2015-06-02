#include "test_runner.hh"

#include "foo.hh"

TEST_CASE("Test something", "[bootstrap]") {
  REQUIRE(do_something() == 1);
}
