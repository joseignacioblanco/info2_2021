/*
 * ============================================================================
 *
 * NOMBRE       : ejemplo_lc.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : un programa que muestra un ejemplo de paso de parametros por linea de comando
 * FECHA        : 15 mayo 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


int main(int argc, char *argv[])
{
   int edad;

   if (argc==1)
   {
       printf("Debes ingresar mas parametros...\n");
       return 1;
   }

   printf("Hola %s, cual es tu edad: ", argv[1]);
   scanf("%d", &edad);

   printf("Muy bien %s, es un gusto saber que tienes %d de edad...\n", argv[1], edad); 

   printf("Fin del programa %s...\n\n", argv[0]);

   return 0;   
} 
