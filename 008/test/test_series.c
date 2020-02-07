#include "unity.h"
#include "series.h"

void test_sumOf13_ones() {
  char const str[] = "1111111111111";
  TEST_ASSERT_EQUAL_INT64(1, sumOf13(str));
}

void test_sumOf13_zero() {
  char const str[] = "1111111111011";
  TEST_ASSERT_EQUAL_INT64(0, sumOf13(str));
}

void test_sumOf13_many_nums() {
  char const str[] = "1234567899999";
  TEST_ASSERT_EQUAL_INT64(2380855680, sumOf13(str));
}

void test_maxProduct_of_1000_numbers() {
  TEST_ASSERT_EQUAL_INT64(23514624000L, maxProduct(num_str));
}

