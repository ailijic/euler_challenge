#include "prime.h"
#include <assert.h>
#include <stdlib.h>

long primeN(long n) {
  assert(n > 0);
  long len = 1;
  long* ls;
  void* vp = malloc(sizeof(*ls) * len);
  assert(vp != NULL);
  ls = vp;
  ls[len - 1] = 2;

  for (long i = 3; len < n; i += 2) {
    assert(i > 0);

    if (is_prime(ls, len, i)) {
      vp = realloc(ls, sizeof(*ls) * (len + 1));
      assert(vp != NULL);
      ls[len] = i;
      len++;
    }
  }

  long ret = ls[len - 1];
  free(ls);
  return ret;
}

bool is_prime(long ls[], long len, long n) {
  assert(ls != NULL);
  assert(len > 0);
  assert(n > 0);

  bool ret = true;

  for (long i = 0; i < len; i++) {
    assert(i >= 0);

    if ((n % ls[i]) == 0)
      return false;
  }
  return ret;
}
