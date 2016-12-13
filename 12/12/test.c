#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  
  int fds[2];

  pipe(fds);

  int f = fork();
  if (f == 0) {
    printf("[child] listening\n");
    close(fds[1]);
    char s[20];
    read(fds[0], s, Sizeof(s));
    printf("[child] got: %s\n", s);
  }
  else {
    close(fds[0]);
    printf("[parent] sleeping\n");
    sleep(5);
    write(fds[1], "hello there", 12);
  }
  return 0;
}
