#include "series.h"
#include <assert.h>
#ifndef   NDEBUG
#include <ctype.h>
#endif // NDEBUG
#include <string.h>
#include <stdlib.h>

long sumOf13(char const*const str) {
  long acc = 1;
  for (int i = 0; i < 13; i++) {
    if (str[i] == '0')
      return 0L;
    acc *= (long)(str[i] - '0');
  }
}

long maxProduct(char const*const str) {
  assert(str != NULL);

  long acc = 1;
  for (int i = 999 - 13; i >= 0; i--) {
    long res = sumOf13(str + i);
    acc = (res > acc) ? res : acc;
  }
  return acc;
}
