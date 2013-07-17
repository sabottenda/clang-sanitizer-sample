#include <cstdio>
#include <cstdlib>

int main(void) {
  int *p1 = (int *)malloc(sizeof(int));
  char *p2 = (char *)p1;
  p2++;
  int *p3 = (int *)p2;
  printf("%08x\n", *p3);
  return 0;
}
