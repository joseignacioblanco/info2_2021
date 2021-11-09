/*
 * ============================================================================
 *
 * NOMBRE       : promedio2.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : calcula el promedio de enteros ingresados hasta apretar 0.
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


int main(void){

  int numero = 0;
  short unsigned i = 0;
  float acumulador = 0;

  do{
      i++;
      printf("\n Ingrese el entero %u: ",i);
      scanf(" %d", &numero);
      acumulador += numero;
    }while(numero !=0);

  printf("\n El promedio es: %f \n FIN DEL PROGRAMA\n",acumulador / (i-1));

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
