#include <stdio.h>

int main() {

  short s = 83;
  double darr[4];
  short *sp = &s;
  darr[0] = 3.7;
  darr[1] = 3.14;
  darr[2] = 20.4;

  double *dp = darr;

  //sizeof returns unsigned long (for large amounts of memory)
  //%lu for unsigned long
  //x bit processor can only address x bits of memory
  
  printf("size of darr: %lu\n", sizeof(darr)); //number of allocated bytes
  printf("value of darr: %p\n", darr);
  printf("address of darr: %p\n", &darr);

  printf("darr[0]: %f\n", darr[0]);
  printf("*dp: %f\n", *dp);
  dp++;
  printf("*dp: %f\n", *dp);
  
  /*
  printf("size of s: %lu\n", sizeof(s));
  printf("value of s: %d\n", s);
  printf("address of s: %lu\n", &s);

  printf("\nsize of sp: %lu\n", sizeof(sp));
  printf("value of sp: %lu\n", sp);
  printf("address of sp: %lu\n", &sp);
  */
  
  return 0;
}
