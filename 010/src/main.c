#include "prime_sum.h"
#include <stdio.h>

int main() {
  long ans = primeSum(2*1000*1000);
  printf("The sum of all primes under 2 million is: %ld\n", ans);
}
