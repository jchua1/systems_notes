#include <stdio.h>

int main() {
  char arr[6];

  arr[0] = 'c';
  arr[1] = 65;
  arr[2] = 't';
  arr[3] = 0;
  
  printf("arr: %s\n",arr);
  printf("sizeof arr: %lu\n", sizeof(arr));

  char s2[] = "hello";

  printf("s2: %s\n",s2);
  printf("sizeof s2: %lu\n", sizeof(s2));
}
