/*
 * ============================================================================
 *
 * NOMBRE       : promedio3.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : calcula el promedio de enteros ingresados hasta apretar 0
 *                usando la funcion de prototipo  double promedio(int * , int).
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define TAM 100*/

double promedio(int * suma_total, int cant_numeros);

int main(void){

  int numero = 0;
  short unsigned i = 0;
  int acumulador = 0;

  do{
      i++;
      printf("\n Ingrese el entero %u: ",i);
      scanf(" %d", &numero);
      acumulador += numero;
    }while(numero !=0);

  printf("\n El promedio por funcion es: %lf \n",promedio(&acumulador, i-1));
  printf("\n El promedio es: %f \n FIN DEL PROGRAMA\n",(float)acumulador / (i-1));

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}



double promedio(int * suma_total, int cant_numeros){

  return (double) ((float)*suma_total/cant_numeros);

}
