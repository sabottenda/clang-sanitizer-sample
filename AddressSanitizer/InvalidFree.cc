#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv) {
  int *a = new int[10];
  for (auto i = 0; i < 10; i++) {
    a[i] = 0;
  }
  printf("%d\n", a[0]);
  delete a;
  return 0;
}
