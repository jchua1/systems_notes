#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <string.h>

int main(int argc, char *argv[]) {

  int semid;
  int key = ftok("makefile", 22);
  int sc;

  semid = semget(key, 1, IPC_CREAT | 0644);
  printf("semaphore created: %d\n", semid);

  union semun {
    int val;
    struct seid_ds *buf;
    unsigned short *array;
    struct seminfo *__buf;
  };

  if (strncmp(argv[1], "-c", strlen(argv[1])) == 0) {
    union semun su;
    su.val = 1;
    sc = semctl(semid, 0, SETVAL, su);
    printf("value set: %d\n", sc);
  }
  
  else if (strncmp(argv[1], "-v", strlen(argv[1])) == 0) {
    sc = semctl(semid, 0, GETVAL);
    printf("semaphore value: %d\n", sc);
  }

  else if (strncmp(argv[1], "-r", strlen(argv[1])) == 0) {
    sc = semctl(semid, 0, IPC_RMID);
    printf("semaphore removed: %d\n", sc);
  }

  return 0;
}
