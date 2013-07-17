#include <cstdio>

int main(void) {
  unsigned a = 0xffff;
  bool *b = (bool *)&a;
  printf("%d\n", *b);
  return 0;
}
