#include <cstdio>

enum en {
  a0 = 0,
  a1,
  a2,
  a3,
  a4,
  a5,
};

en EnumFactory(int a) {
  return en(a);
}

int main(void) {
  en a = EnumFactory(8);
  printf("%d\n", a);
  return 0;
}
