#include "pythag.h"
#include <assert.h>
#include <stddef.h>

struct Triplet* tripletProduct(int n) {
  static struct Triplet t = { 0, 0, 0 };
  int a, b, c;

  for (a = 1; a < (n / 3); a++) {
    for (b = a + 1; b < (n / 2); b++) {
      c = n - a - b;
      assert(a > 0);
      assert(b > 0);
      assert(c > 0);

      if ((a*a + b*b) == (c*c)) {
        t.a = a;
        t.b = b;
        t.c = c;
        return &t;
      }
    }
  }
  return NULL; // something went wrong
}
