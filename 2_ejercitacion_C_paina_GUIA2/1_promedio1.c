/*
 * ============================================================================
 *
 * NOMBRE       : promedio1.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : calcula el promedio de N enteros
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


int main(void){

  int cantidad = 0,
      numero = 0;
  short unsigned i = 0;
  float acumulador = 0;

  printf("\n Ingrese la cantidad de numeros a promediar: ");
  scanf(" %d", &cantidad);

  for(i=0; i<cantidad; i++){
    printf("\n Ingrese el entero %u: ",i+1);
    scanf(" %d", &numero);
   acumulador += numero;
  }

  printf("\n El promedio es: %f \n FIN DEL PROGRAMA\n",acumulador / cantidad);

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
