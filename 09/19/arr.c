#include <stdio.h>
#include <stdlib.h>

int main() {

  int x = 81;
  float y = 92.3456;

  int arr[5];

  printf("Hello, world! %d \n", x);

  int i;
  for (i = 0; i < 10; i++) {
    arr[i] = 10;
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  return 0;

}
