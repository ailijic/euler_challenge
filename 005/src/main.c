#include "lcm.h"
#include <stdio.h>

int main() {
  int ans = lcmRange(1, 20);

  printf("What is the smallest positive number that is evenly divisible by all "
      "of the numbers from 1 to 20?\n");
  printf("Answer: %d\n", ans);
}
