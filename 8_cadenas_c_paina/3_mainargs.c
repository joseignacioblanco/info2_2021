/*
 * ============================================================================
 *
 * NOMBRE       : 3_mainargs.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : recibe por linea de comando los argumentos y los muestra
 * FECHA        : 20 06 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*#define*/


int main(int argc, char * argv[]){

  int i;

  for(i = 0; i < argc; i++)

    printf("\n argv[%d]:   %s \t (%ld)", i, argv[i], strlen(argv[i]));

  printf("\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
