#include <assert.h>

int f2(int a) {
  assert(a != 0);
  return a;
}

int f1(int a) {
  int b = 0;
  int c = a * b;
  return f2(c);
}

int main() {
  int a = 0;
  return f1(a);
}
