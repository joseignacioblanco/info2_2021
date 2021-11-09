/*
 * ============================================================================
 *
 * NOMBRE       : indices_matriz.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : muestra el indice de los elementos de una matriz
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

#define N 2
#define M 3


int main(void){

int i=0,
    j=0;

  for(i=0; i<N; i++){
    for(j=0; j<M; j++ ){
      printf("\n i = %u \t j = %u", i, j);
    }
  }
   printf("\n");

  return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
