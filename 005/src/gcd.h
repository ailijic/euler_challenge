#ifndef GCD_H
#define GCD_H

#include <assert.h>

// Euclid's algorithm for Greatest Common Divisor
// We are using the simplified version which assumes a and b are both positive.
// https://en.wikipedia.org/wiki/Greatest_common_divisor#Euclid's_algorithm
static inline
int gcd(int a, int b) {
  assert(a >= 0);
  assert(b >= 0);

  int ret;
  for ( ; ; ) {
    ret = a;
    if (a == b)
      break;
    else if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return ret;
}

#endif // GCD_H
