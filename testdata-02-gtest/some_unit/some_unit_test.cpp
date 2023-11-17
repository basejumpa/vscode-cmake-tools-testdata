#include <gtest/gtest.h>
#include "some_unit.hpp"

TEST(some_unit, some_function) {
  EXPECT_EQ(0, some_function());
}

TEST(some_unit, some_other_function) {
  EXPECT_EQ(2, some_other_function());
}
