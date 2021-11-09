/*
 * ============================================================================
 *
 * NOMBRE       : sizeof_type.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : Me muestra el tamanio en bytes que ocupan en memoria los datos
 * FECHA        : 13 mayo 21
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


int main(void){

  printf("\n CANTIDAD DE MEMORIA QUE OCUPAN EN BYTES LOS DATOS PC UBUNTU 64-bits:\n\n");
  printf(" Un \"char\" ocoupa:.................%2lu bytes.\n", sizeof(char));
  printf(" Un \"unsigned char\" ocupa:.........%2lu bytes.\n", sizeof(unsigned char));
  printf(" Un \"int\" coupa:...................%2lu bytes.\n", sizeof(int));
  printf(" Un \"unsigned int\" ocoupa:.........%2lu bytes.\n", sizeof(unsigned int));
  printf(" Un \"short int\" ocoupa:............%2lu bytes.\n", sizeof(short int));
  printf(" Un \"unsigned short int\" ocoupa:...%2lu bytes.\n", sizeof(unsigned short int));
  printf(" Un \"long int\" coupa:..............%2lu bytes.\n", sizeof(long int));
  printf(" Un \"unsigned long int\" ocoupa:....%2lu bytes.\n", sizeof(unsigned long int));
  printf(" Un \"float\" ocoupa:................%2lu bytes.\n", sizeof(float));
  printf(" Un \"duble\" ocoupa:................%2lu bytes.\n", sizeof(double));
  printf(" Un \"long double\" ocoupa:..........%2lu bytes.\n", sizeof(long double));
  printf(" Un \"puntero\" ocoupa:..............%2lu bytes.\n", sizeof(char *));
  printf(" Un \"dato void\" ocupa:.............%2lu bytes.\n", sizeof(void));

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
