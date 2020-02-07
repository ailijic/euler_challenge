#include "pythag.h"
#include "unity.h"

void test_tripletProduct_1000() {
  struct Triplet const*const t = tripletProduct(1000);
  TEST_ASSERT_NOT_NULL(t);
  TEST_ASSERT_EQUAL_INT32(31875000, t->a * t->b * t->c);
}
