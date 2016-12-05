#include <stdio.h>

int addfive(int x) {
  return x+5;
}

int main() {
  printf("%d\n", addfive(5));
  printf("%d\n", addfive(6));
  int x = addfive(7);
  printf("%d\n", x);
  return 0;
}
