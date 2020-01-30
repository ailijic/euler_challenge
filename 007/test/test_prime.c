#include "prime.h"
#include "unity.h"

void test_primeN_1() {
  TEST_ASSERT_EQUAL_INT64(2, primeN(1));
}

void test_primeN_2() {
  TEST_ASSERT_EQUAL_INT64(3, primeN(2));
}

void test_primeN_3() {
  TEST_ASSERT_EQUAL_INT64(5, primeN(3));
}

void test_primeN_4() {
  TEST_ASSERT_EQUAL_INT64(7, primeN(4));
}

void test_primeN_5() {
  TEST_ASSERT_EQUAL_INT64(11, primeN(5));
}

void test_primeN_101() {
  TEST_ASSERT_EQUAL_INT64(547, primeN(101));
}

void test_primeN_10001() {
  TEST_ASSERT_EQUAL_INT64(104743, primeN(10001));
}

