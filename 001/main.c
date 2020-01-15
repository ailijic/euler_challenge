#include <stdio.h>

int main() {
  int val = 0;

  for (int i = 0; i < 1000; i++) {
    if ((i % 3) == 0 || (i % 5) == 0)
      val += i;
  }
  printf("ans: %d\n", val);
}
