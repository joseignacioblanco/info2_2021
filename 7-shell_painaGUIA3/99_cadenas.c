/*
 * ============================================================================
 *
 * NOMBRE       :
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : 
 * FECHA        :
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


int main(void){

  char cadena[20];

  scanf(" %20[^\n]s", cadena);

  printf("%s\n", cadena);


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
