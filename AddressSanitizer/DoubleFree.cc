#include <cstdio>
#include <cstdlib>

void print(int *a) {
  printf("%d\n", a[0]);
  free(a);
}

int main(int argc, char **argv) {
  int *a = (int *)malloc(sizeof(int) * argc);
  print(a);
  free(a);
  return 0;
}
