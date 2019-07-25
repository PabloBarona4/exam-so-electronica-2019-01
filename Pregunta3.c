#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {

  printf("I'm gonna lose this exam \n", (int) getpid());

  int rc = fork();

  if (rc < 0) { 

    fprintf(stderr, "fork failed\n");

    exit(1);

  } else 
      
      if (rc == 0) { 
      
      int rc_wait = wait(NULL);
      printf("ok, father  \n", rc, rc_wait, (int) getpid());

      } else {

        printf("Don't say that\n", (int) getpid());

  }

  return 0;

}
