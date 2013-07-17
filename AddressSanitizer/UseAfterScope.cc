#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv) {
  int *a;
  {
    int b = 0xdeadbeef;
    a = &b;
  }
  printf("%08x\n", *a);
  return 0;
}
