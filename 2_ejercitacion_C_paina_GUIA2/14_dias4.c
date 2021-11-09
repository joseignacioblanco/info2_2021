/*
 * ============================================================================
 *
 * NOMBRE       : 14_dias4.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : programa igual que el ejercicio 11 pero con puntero a char
 * FECHA        :
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include"dias.h"/*para poder sacar el saisof de la matriz datos*/
/*#include<>*/

/*#define*/


int main(void){

  char * dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};
  int i;

  for(i=0; i<5; i++){
     printf("%s\n", dias[i]);/*este si funciona porque se salta arreglo por arreglo*/
     /*printf("%s\n", *dias + i); este no funciona porque va letra por letrai el * tiene precedencia ante el +*/
     /*printf("%s\n", *(dias + i)); este si funciona y es equivalente al primero pero con aritmetica*/
  }
  printf("\n El arreglo de datos ocupa %lu bytes en memoria.\n", sizeof(dias));

  printf("\n Encambio el arreglo de datos como vector bidimencional ocupa %lu bytes.\n", sizeof(dato));
  printf("\n El tamanio de un puntero a char es de %lu bytes.\n", sizeof(char *));

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
