#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

//Si le ponía un "sleep" a la función padre para verificar si el hijo lo esperaba, resulta que el hijo se ejecuta y no espera. Según lo que aparece cuando uno busca "man wait"
//dice que la función wait sirve para que la función padre espere a la función hijo, pero no menciona nada para hacerlo de manera inversa, así que no se qué más hacer 

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
