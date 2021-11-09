/*
 * ============================================================================
 *
 * NOMBRE       : 8_struct_medallas.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : carga datos en una estructura y muestra los datos del deportista que tenga mas medallas
 * FECHA        : 12 7 21
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

#define CANT 3

struct datos
{
  char nombre[40];
  char pais[25];
};

struct atleta
{
  char deporte[30];
  struct datos pers;
  int medallas;
};

 int busca_mayor(struct atleta array_copy[]);

int main(void){

  int i, winner;
  struct atleta ats[CANT];

  for(i = 0; i < CANT; i++) /*for para cargar los datos de los atletas*/
  {
     printf("\n Ingrese el deporte del %dº atleta: ", i+1);
     scanf(" %s", ats[i].deporte);
     printf("\n Ingrese el nombre del %dº atleta: ", i+1);
     scanf(" %[^\n]s", ats[i].pers.nombre);
     printf("\n Ingrese el pais del %dº atleta: ", i+1);
     scanf(" %s", ats[i].pers.pais);
     printf("\n Ingrese el numero de medallas del %dº atleta: ", i+1);
     scanf("%d", &ats[i].medallas);
  }

  winner = busca_mayor(ats);

  printf("\n El atleta  con mayor numero de medallas es: %s", ats[winner].pers.nombre);
  printf("\n El deporte que practica es: %s", ats[winner].deporte);
  printf("\n El pais de origen es: %s", ats[winner].pers.pais);
  printf("\n El numero de medallas obtenidas es: %d", ats[winner].medallas);
  puts("\n\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}

 /*Funcion busca el atleta con mayor numero de medallas*/


  int busca_mayor(struct atleta array_ats[])
  {
     int best = -1;
     int i;
     for(i = 0; i < CANT; i++)
      {
         if(array_ats[i].medallas > best && array_ats[i].medallas != 0)
          {
             best = i;
          }
      }
   return best;
  }
