#include "unity.h"
#include "squares.h"

void test_diff_squares_1_to_100() {
  TEST_ASSERT_EQUAL_INT64(25164150L, diff_squares(1, 100));
}
