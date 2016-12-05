#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char line[] = "ls -a -l";
  char * s = line;
  char * command[10];

  int i =0;
  while (s) {
    command[i] = strsep(&s, " ");
    printf("%s\n", command[i]);
    i++;
  }
  command[i] = 0;
  execvp(command[0], command);
  return 0;
}
