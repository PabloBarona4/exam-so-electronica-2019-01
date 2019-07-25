#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"

float v;
puerta(puerta); 

void *division(void *arg) {
    float y = 350;
    float z = 25;
    cerrar_puerta(puerta);
    v=z/y;
    printf("El resultado de la division z/y = %f\n",v);
    abrir_puerta(puerta);
    return NULL;
}

void *multiplicacion(void *arg) {
    int x=1250;
    
    sleep(2)
    cerrar_puerta(puerta);
    v=v*x;
    printf("El resultado de la multiplicacion x*(z/y) = %f\n",v);
    abrir_puerta(puerta);
    
    return NULL;
}

int main(int argc, char *argv[]) {

    crear_puerta(puerta);
    pthread_t p1, p2;
    pthread_create(&p1, NULL, division, NULL); 
    pthread_create(&p2, NULL, multiplicacion, NULL);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    destruir_puerta(puerta);
    
    return 0;
}
