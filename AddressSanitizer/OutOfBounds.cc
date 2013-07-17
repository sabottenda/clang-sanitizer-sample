#include <cstdio>
#include <cstdlib>

int *IntegerFactory(bool f) {
  int *a = new int[1024];
  for (auto i = 0; i < 1024; i++) {
    a[i] = 0xdeadbeef;
  }
  return a;
}

int main(int argc, char **argv) {
  int *p = IntegerFactory(argc);
  printf("%08x\n", p[1030]);
  delete[] p;
  return 0;
}
