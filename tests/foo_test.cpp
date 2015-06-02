#include "test_runner.hpp"

#include "foo.hpp"

TEST_CASE("Test something", "[bootstrap]") {
  REQUIRE(do_something() == 1);
}
