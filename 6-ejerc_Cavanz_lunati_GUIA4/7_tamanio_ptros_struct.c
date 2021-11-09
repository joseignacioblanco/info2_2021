/*
 * ============================================================================
 *
 * NOMBRE       : 7_tamanio_ptrs_struct.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : define variables punteros a estructuras y les saca el tamanio.-
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

int main(void){


 struct informacion_celda *ptr1, *ptr2;
 struct informacion_operador *i1, *i2;


 printf("\n Punto c: struct informacion_celda *ptr1 ocupa: %lu bytes.\n", sizeof ptr1);

 printf("\n Punto c: struct informacion_celda *ptr2 ocupa: %lu bytes.\n", sizeof ptr2);

 printf("\n Punto c: struct informacion_operador *i1 ocupa: %lu bytes.\n", sizeof i1);

 printf("\n Punto c: struct informacion_operador *i2 ocupa: %lu bytes.\n", sizeof i2);


 return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
