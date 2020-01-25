#include "unity.h"
#include "lcm.h"

void test_lcm_1_and_2() {
  TEST_ASSERT_EQUAL_INT32(2, lcm(1, 2));
}

void test_lcm_51_and_61() {
  TEST_ASSERT_EQUAL_INT32(3111, lcm(51, 61));
}

void test_lcmRange_3_to_5() {
  TEST_ASSERT_EQUAL_INT32(60, lcmRange(3, 5));
}

void test_lcmRange_1_to_7() {
  TEST_ASSERT_EQUAL_INT32(420, lcmRange(1, 7));
}

void test_lcmRange_1_to_10() {
  TEST_ASSERT_EQUAL_INT32(2520, lcmRange(1, 10));
}

void test_lcmRange_1_to_20() {
  TEST_ASSERT_EQUAL_INT32(232792560, lcmRange(1, 20));
}

