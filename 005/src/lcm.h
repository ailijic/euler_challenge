#ifndef LCM_H
#define LCM_H

#include "gcd.h"
#include <assert.h>

// Use Greatest Common Divisor to calculate Least Common Multiple
static inline
int lcm(int a, int b) {
  assert(a > 0);
  assert(b > 0);

  return (a / gcd(a, b)) * b;
}

// Calculate the Least Common Multiple of the range of numbers m to n
// In other words, Calculate the smallest positive number that is evenly divisible
//   by all of the numbers from n to m
// https://en.wikipedia.org/wiki/Least_common_multiple#Using_the_greatest_common_divisor
static inline
int lcmRange(int m, int n) {
  assert(m < n);
  assert(m > 0);
  assert(n > 0);

  int ret = lcm(m, m + 1);
  for (int i = m + 2; i <= n; i++)
    ret = lcm(ret, i);
  return ret;
}

#endif // LCM_H
