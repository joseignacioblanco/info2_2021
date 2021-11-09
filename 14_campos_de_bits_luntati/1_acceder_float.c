/*
 * ============================================================================
 *
 * NOMBRE       : acceder_float.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : mediante union accede a los bytes de un float
 * FECHA        : 25 07 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


 union bytes_and_float
 {
    char uno,
         dos,
         tres,
         cuatro;
    unsigned char chararray[4];
    float flotante;
 };



int main(void){

 union bytes_and_float uni_char_float;
 int i;

  printf("\n Ingrese un float\n");
  scanf("%f", &uni_char_float.flotante);

  printf(" Ingresado como float es el numero: %f\n", uni_char_float.flotante);
  printf(" Visto como un conjunto de 4 bytes interpretados como char en base decimal: ");
  for(i = 0 ; i < 4 ; i++)
     printf(" [%u] ", uni_char_float.chararray[i]);
  printf(" Visto como un conjunto de 4 bytes interpretados como char en base hexadecimal: ");
  for(i = 0 ; i < 4 ; i++)
     printf(" [0x%X] ", uni_char_float.chararray[i]);
  puts("");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
