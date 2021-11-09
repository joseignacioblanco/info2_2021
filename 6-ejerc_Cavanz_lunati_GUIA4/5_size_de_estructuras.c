/*
 * ============================================================================
 *
 * NOMBRE       : 5_size_de_estructuras.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : declara, define y muestra el tamanio de una estatruct.-
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

  printf("\n Punto a: El tamanio que ocupa en memoria una variable del tipo struct informacion_celda es de: %lu bytes.\n",
                                                                               sizeof(struct informacion_celda));

  printf("\n Punto a: El tamanio que ocupa en memoria una variable del tipo struct informacion_operador es de: %lu bytes.\n",
                                                                               sizeof(struct informacion_operador));


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
