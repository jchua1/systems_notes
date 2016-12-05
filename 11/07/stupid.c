#include <stdio.h>
#include <stdlib.h>
#include

static void sighandler(int signo) {

  if (signo == SIGINT)
    printf("Nice Try!\n");

}

int main() {

  signal(SIGINT, sighandler);

  while(1)
    printf("hello, I'm: %d\n", getpid());

  return 0;
}
