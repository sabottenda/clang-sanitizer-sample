#include <cstdio>
#include <cstdlib>
#include <cstdint>

// not detected
int *IntegerFactoryAlloca() {
  int *a = (int *)alloca(sizeof(int) * 1024);
  *a = 0xdeadbeef;
  return a;
}

intptr_t IntegerFactory() {
  int a;
  a = 0xdeadbeef;
  return (intptr_t)&a;
}

int main(int argc, char **argv) {
  intptr_t p = IntegerFactory();
  int *a = (int *)p;

  printf("%08x\n", *a);
  return 0;
}
