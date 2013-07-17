#include <cstdio>
#include <cstdlib>
#include <cstdint>

// not detected
int *IntegerFactoryAlloca(bool f) {
  int *a = (int *)alloca(sizeof(int) * 1024);
  *a = 0xdeadbeef;
  return a;
}

intptr_t IntegerFactory(bool f) {
  int a;
  a = 0xdeadbeef;
  return (intptr_t)&a;
}

int main(int argc, char **argv) {
  intptr_t p = IntegerFactory(argc);
  int *a = (int *)p;

  printf("%08x\n", *a);
  return 0;
}
