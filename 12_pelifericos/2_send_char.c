/*
 * ============================================================================
 *
 * NOMBRE       : 2_send_char.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : envia un char al arbino para prender un lep
 * FECHA        : 26 6 2021
 *
 * ============================================================================
 */

/* cuando ejecuto el programa debo indicar a la shell donde debe buscar la
   biblioteca libtermset.so para enlazarla dinamicamente: -ltermset
   lo hago agregando la ruta donde esta la biblioteca a la variable de
   entorno LD_LIBRARY_PATH. puedo verla con echo $LD_LIBRARY_PATH
   lo hago con el comando export LD_LIBRARY_PATH=$(pwd)/lib:$LD_LIBRARY_PATH

compilar con el comando:

gcc -Wall -Werror -std=c90 --pedantic-errors 2_send_char.c -I include/ -L lib/ -o send_charapp.out -ltermset

*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* para la funcion sleep(unsigned int segundos)*/
#include <fcntl.h>  /*para las funciones de bajo nivel*/
#include <unistd.h>
#include "termset.h"

#define BAUDRATE 9600


int main(int argc, char* argv[])
{
  int fd, i;  /*descriptor de archivo*/

  if(argc < 4)
  {
    printf("USAR: %s <device: /dev/ttyACM0> <char: r, a, or v> <segundos: 1>",argv[0]);
    printf("\n");
    return -1;
  }

  fd = open(argv[1], O_WRONLY | O_NOCTTY | O_SYNC); /*open device*/
  if(fd < -1)
  {
    printf("ERROR al abrir el puerto serie\n");
    return -1;
  }

  if(termset(fd, BAUDRATE, &ttyold, &ttynew) == -1)
  {
    printf("ERROR, no se puede configurar tty\n");
    return -1;
  }

for(i = 0; i < 5; i++)
  {
  sleep(atoi(argv[3])); /*si no le pongo pausa el arduino reinicia el puerto serie y no me llega a tomar el char*/
  write(fd, argv[2], 3); /*dejo que me lea 3 letras y no solo una para poder cambiar varios led*/
  printf("%d\n", i); /* va imprimiendo la cantidad de veces que escribe en el puerto*/
  }

  close(fd);

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
