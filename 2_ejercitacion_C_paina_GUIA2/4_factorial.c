/*
 * ============================================================================
 *
 * NOMBRE       : factorial.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : calcula el factorial de los numeros 1 hasta el 10.-
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

#define TAM 10


int main(void){
  short unsigned int i = 0;
  long unsigned int factorial = 1;

  do{
    printf("\n %2u! = %ld",i ,factorial);
    i++;
    factorial *= i;
  }while(i <= TAM);

    printf("\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
