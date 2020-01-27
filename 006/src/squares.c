#include "squares.h"
#include <assert.h>

long diff_squares(long n, long m) {
  assert(n <= m);

  long sum_of_sqr = 0;
  long sqr_of_sum = 0;
  
  for ( ; n <= m; n++) {
    sum_of_sqr = sum_of_sqr + n * n;
    sqr_of_sum = sqr_of_sum + n;
  }
  sqr_of_sum = sqr_of_sum * sqr_of_sum;

  return sqr_of_sum - sum_of_sqr; 
}
