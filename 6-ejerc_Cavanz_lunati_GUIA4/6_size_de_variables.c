/*
 * ============================================================================
 *
 * NOMBRE       : 6_size_de_variables.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : declara, define y muestra el tamanio de variables.-
 * FECHA        : 12 07 21
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

 /*INFORMACION SOBRE LA CELDA*/

 struct informacion_celda
  {
     char nombre[SIZE]; /*Nombre de la celda*/
     unsigned int identificador; /*Numero identificador*/
     float calidad_senal; /*Calidad de la Senial (entre 0 y 100)*/
     struct informacion_operador * ptr_operador; /*Puntero a una segunda estructura*/
  };

 /*INFORMACION SOBRE EL OPERADOR*/

 struct informacion_operador
  {
     char nombre[SIZE]; /*Cadena de texto con el nombre*/
     unsigned int prioridad; /*Prioridad de conexion*/
     unsigned int ultima_comprob; /*Fecha de la ultima comprobacion*/
  };

 struct informacion_celda a;
 struct informacion_celda *b;

int main(void){

 int *p;
 int c;

 p = &c;
 *p = 5;

 printf("\n Punto b: struct informacion_celda a ocupa: %lu bytes.\n", sizeof a);

 printf("\n Punto b: struct informacion_celda *b ocupa: %lu bytes.\n", sizeof b);

 printf("\n Punto b: int *p ocupa: %lu bytes.\n", sizeof p);

 printf("\n Punto b: int c ocupa: %lu bytes.\n", sizeof c);

 printf("\n La variable puntero p conntiene la direccion de c: %p.\n", p);

 printf("\n La variable c contiene: %d.\n", *p);






 return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
