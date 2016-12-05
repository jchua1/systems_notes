#include <stdio.h>
#include <fcntl.h>

int main() {
  umask(0000);
  
  int file = open("file", O_CREAT, 0666);
  return 0;
}
