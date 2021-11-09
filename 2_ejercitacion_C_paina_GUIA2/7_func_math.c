/*
 * ============================================================================
 *
 * NOMBRE       : 7_func_math.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : programa que pone a prueba las funciones de la biblioteca matematica
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*#define*/


int main(void){

  printf("\n Dos al cubo es: %.2f\n",pow(2, 3));
  printf(" La raiz cuadrada de 9 es: %.2f\n",sqrt(9));
  printf(" El numero e elevado a la seis es: %.2f\n",exp(6));
  printf(" El logaritmo en base e de 60 es: %.2f\n",log(60));
  printf(" El logaritmo en base 10 de 900 es: %.2f\n",log10(900));
  printf(" El techo de 7.4 es: %.2f\n",ceil(7.4));
  printf(" El piso de 3.9 es: %.2f\n",floor(3.9));
  

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
