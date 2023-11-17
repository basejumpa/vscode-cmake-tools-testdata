#include <catch2/catch_test_macros.hpp>
#include "some_unit.hpp"

TEST_CASE("some_function", "some_unit") {
  REQUIRE(0 == some_function());
}

TEST_CASE("some_other_function", "some_unit") {
  REQUIRE(2 == some_other_function());
}
