/*
 * ============================================================================
 *
 * NOMBRE       : 2_nombres_notas.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : carga nombres y notas y los ordena en orden ascendente
 * FECHA        : 6 julio 2021
 *
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h> /*para el return*/
#include <string.h> /*para la funcion strcmp*/

#define TAM 5 /*cantidad de alucnos a cargar*/

void ordenar(char * names_list[], float * notas_list[], unsigned int tam); /*prototipo de funcion ordenar*/

int main(void){

  int i, j;
  char buffer[100]; /*un buffer para almacenar el nombre y luego pedir memoria*/
  char * nombres[TAM]; /*arreglo de punteros que apuntan a los nombres*/
  float * notas[TAM]; /*arreglo de pinteros que apinta a las notas*/

  for(i = 0; i < TAM; i++)
  {
     printf("\n Ingrese el %dº nombre: ", i+1);
     scanf(" %[^\n]s", buffer);
     nombres[i] = (char *) malloc(strlen(buffer)); /*reserva memoria para el nombre ingresado*/
     strcpy(nombres[i], buffer); /*copia el nombre del buffer al lugar de memoria asignada*/

     notas[i] = (float *) malloc(3 * sizeof(float)); /*reserva memoria para guardar las 3 notas*/

     for(j = 0; j < 3; j++)
      {
         printf("\n Ingrese la %dº nota: " , j+1);
         scanf("%f", notas[i] + j);
      }
  }

  printf("\n La lista ingresada es:\n\n"); /*podria hacer esto en la funcion imprimir arreglo de nombres*/

  for(i = 0; i < TAM; i++)
  {
     printf("%2dº: %-20s  ---->  notas: [ %.2f | %.2f | %.2f ]\n", i+1, nombres[i], notas[i][0], notas[i][1], notas[i][2]);
  }

  printf("\n La lista ordenada es:\n\n");

  ordenar(nombres, notas, TAM); /*llama a la funcion ordenar y le pasa el arreglo de punteros y la cant de alumnos*/

  for(i = 0; i < TAM; i++)  /*otra vez la funcion imprimir arreglo de nombres*/
  {
     printf("%2dº: %-20s  ---->  notas: [ %.2f | %.2f | %.2f ]\n", i+1, nombres[i], notas[i][0], notas[i][1], notas[i][2]);
  }

  for(i = 0; i < TAM; i++)
  {
     free(nombres[i]);
     printf("\n liberando posicion de memoria: %p", nombres[i]);
     free(notas[i]);
     printf("\n liberando posicion de memoria: %p", (void *) notas[i]);
  }

  puts(""); /*solo un enter*/

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


void ordenar(char * name_list[], float *notas_list[], unsigned int tam) /*ordenamiento burbuja*/
   {
      int i, j;
      char * aux_ptr;
      float * naux_ptr;

      for(i = 1; i < tam; i++)
      {
         for(j = 0; j < tam - i; j++)
         {
           if((strcmp(*(name_list + j), *(name_list + j+1))) > 0) /*orden ascendente*/
              {                                             /*si quisiera descendente pongo < 0*/
                 aux_ptr = name_list[j];
                 naux_ptr   = notas_list[j];

                 name_list[j] = name_list[j+1];
                 notas_list[j] = notas_list[j+1];

                 name_list[j+1] = aux_ptr;
                 notas_list[j+1] = naux_ptr;
              }
         }
      }
   }
