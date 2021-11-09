/*
 * ============================================================================
 *
 * NOMBRE       : 1_carga_nombres_ordena.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : carga 10 nombres de alumnos, los ordena y los muestra en pantalla
 *                lo hace con memoria dinamica y muestra las posiciones de memoria liberada.
 * FECHA        : 5 julio 2021
 *
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h> /*para el return*/
#include <string.h> /*para la funcion strcmp*/

#define TAM 5 /*cantidad de alucnos a cargar*/

void ordenar(char * names_list[], unsigned int tam); /*prototipo de funcion ordenar*/

int main(void){

  int i;
  char buffer[100]; /*un buffer para almacenar el nombre y luego pedir memoria*/
  char * nombres[TAM]; /*arreglo de punteros que apuntan a los nombres*/

  for(i = 0; i < TAM; i++)
  {
     printf("\n Ingrese el %dº nombre: ", i+1);
     scanf(" %[^\n]s", buffer);
     nombres[i] = (char *) malloc(strlen(buffer)); /*reserva memoria para el nombre ingresado*/
     strcpy(nombres[i], buffer); /*copia el nombre del buffer al lugar de memoria asignada*/
  }

  printf("\n La lista ingresada es:\n\n"); /*podria hacer esto en la funcion imprimir arreglo de nombres*/

  for(i = 0; i < TAM; i++)
  {
     printf("%2dº: %s\n", i+1, nombres[i]);
  }

  printf("\n La lista ordenada es:\n\n");

  ordenar(nombres, TAM); /*llama a la funcion ordenar y le pasa el arreglo de punteros y la cant de alumnos*/

  for(i = 0; i < TAM; i++)  /*otra vez la funcion imprimir arreglo de nombres*/
  {
     printf("%2dº: %s\n", i+1, nombres[i]);
  }

  for(i = 0; i < TAM; i++)
  {
     free(nombres[i]);
     printf("\n liberando posicion de memoria: %p", nombres[i]);
  }

  puts(""); /*solo un enter*/

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


void ordenar(char * name_list[], unsigned int tam) /*ordenamiento burbuja*/
   {
      int i, j;
      char * aux_ptr;

      for(i = 1; i < tam; i++)
      {
         for(j = 0; j < tam - i; j++)
         {
           if((strcmp(*(name_list + j), *(name_list + j+1))) > 0) /*orden ascendente*/
              {                                             /*si quisiera descendente pongo < 0*/
                 aux_ptr = name_list[j];
                 name_list[j] = name_list[j+1];
                 name_list[j+1] = aux_ptr;
              }
         }
      }
   }
