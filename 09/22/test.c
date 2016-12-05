#include <stdio.h>
#include <stdlib.h>

//example 1

void foo(int *n) {
  while (n) {
    printf("FOO!\n");
    (*n)--;
  }
}

int main() {
  foo(4);
  return 0;
}

//example 2

/*
void foo(int); //parameter does not need name

int main() {
foo();
return 0;
}

void foo(int n) {
while (n) {
printf("FOO!\n");
n--;
}
}
*/
