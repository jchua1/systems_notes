#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/types.h>

int main() {
  int sd;
  int *a;
  int f;
  int status;
  sd = shmget(24601, sizeof(int), IPC_CREAT | 0644);
  f = fork();
  if (f == 0) {
    a = shmat(sd, 0, 0);
    *a = 841;
    printf("sd: %d\n", sd);
    printf("Child: %p\n", a);
    printf("Child: %d\n", *a);
  }
  else {
    wait(&status);
    a = shmat(sd, 0, 0);
    printf("Parent: %p\n", a);
    printf("Parent: %d\n", *a);
    struct shmid_ds d;
    shmctl(sd, IPC_STAT, &d);
    printf("shmem size: %d\n", d.shm_segsz);
    //shmctl(sd, IPC_RMID, 0);
  }
  return 0;
}
