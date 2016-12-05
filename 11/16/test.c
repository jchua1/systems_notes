#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  sleep(4);
  execlp("emacs", "emacs", "-nw",  (char *)NULL);
  return 0;
}
