#include <assert.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "prime_sum.h"

typedef struct {
  int* cell;
  long length;
} Prime;

enum mem { MEM_SZ = 146 * 1024 };
int cells[MEM_SZ];

static
Prime primeList(int n) {
  Prime ls;
  ls.cell = cells;
  ls.cell[0] = 2;
  ls.length = 1;

  int done = 0;
  for (int i = 3; i < n; i += 2) {
    bool isPrime = true;
    int b = sqrt(i);
    for (int j = 0; j < ls.length; j++) {
      int a = ls.cell[j];
      if ((a <= b) && ((i % a) == 0)) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      assert(ls.length < MEM_SZ);
      ls.cell[ls.length] = i;
      ls.length++;
    }
    if (i > (done * (n / 72))) {
      printf(".");
      fflush(stdout);
      done++;
    }
  }
  printf("\n");
  return ls;
}

long primeSum(int n) {
  Prime ls = primeList(n);
  
  long ret = 0;
  for (int i = 0; i < ls.length; i++) {
    ret += ls.cell[i];
  }

  return ret;
}
