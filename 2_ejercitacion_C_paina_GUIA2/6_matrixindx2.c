/*
 * ============================================================================
 *
 * NOMBRE       : matrixindex.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : muestra el indice de los elementos de una matriz pero con formato
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

#define N 5
#define M 6


int main(void){

int i=0,
    j=0;

  for(i=0; i<N; i++){
    for(j=0; j<M; j++ ){
      printf("(%u , %u)  ", i, j);
      if(j == M-1)printf("\n");
    }
  }
   printf("\n");

  return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
