 PREGUNTA 1:  
 
  1.b

 x=1500000
 tiempos:
 0.294
 0.282
 0.292
 0.281
 0.260
 
 1.a

 tiempos:
 0.013
 0.022
 0.012
 0.012
 0.012
 
R// El proceso "a" tarda en completarse mucho menos que el proceso "b", debido  que el primero tiene los comando de abrir y cerrar la puerta fuera de la función "for", haciendo que no tengan que iterarse las veces que lo haga esa función, mientras que en el segundo, los comandos de abrir y cerrar la puerta están dentro de la función "for", lo cual las obliga a iterarse las veces que se requieran, haciendo que le tome más tiempo al proceso terminar su ejecución.



PREGUNTA 2:

Para realizar lo que la pregunta pide, hay que hacer un código con dos hilos, los cuales van a realizar las operaciones pedidas, el primero hará la división z/y y la guardará en la variable v; mientras el segundo hará la operación x*v, donde v es lo que se definió anteriormente, dando como resultado la operación pedida. 




PREGUNTA 3:

 Para poder crear un programa en c que me garantice que siempre el hijo espere que termine su padre para luego terminar él, se deben usar las funciones fork y wait, la primera se
 encarga de crear un proceso hijo casi identico al proceso padre y la función wait se encarga de hacer que el   proceso hijo espere a que el proceso padre termine para este empezar a ejecutarse.



 PREGUNTA 4:
 
  1. El porcentaje de utilización de la CPU será del 100%. El sistema operativo pondrá uno de los dos procesos a ejecutarse, para después darle paso al siguiente proceso. 
     Esto se sabe porque no se ejecuta ninguna llamada al sistema, por ende ningun proceso entrará en estado bloqueado.

  2. El tiempo que tardan los dos procesos en terminar su ejecución es de 10 tics. 

