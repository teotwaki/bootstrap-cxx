#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "foo.hpp"

TEST_CASE("Test something", "[bootstrap]") {
	REQUIRE(do_something() == 1);
}
