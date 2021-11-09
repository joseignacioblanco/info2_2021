/*
 * ============================================================================
 *
 * NOMBRE       : 1_endian.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : me dice si mi arquitectura es big o little endian
 * FECHA        : 29 6 21
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


int main(void){

  printf("\n Mondongo\n");

  int16_t j = 1;
  int8_t * ptr = (int8_t *) &j;

  if(ptr[0] == 1) printf("\n Little Endian \n");
  else          printf("\n Big Endian \n");


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
