#include "pythag.h"
#include <stdio.h>

int main() {
  int n = 1000;
  struct Triplet* t = tripletProduct(n);
  printf("The pythagorean triple is [ %d %d %d ]\n"
         "and the sum is %d\n"
         "The product is %d\n",
         t->a, t->b, t->c,
         t->a + t->b + t->c,
         t->a * t->b * t->c);
}
