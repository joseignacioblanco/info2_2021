/*
 * ============================================================================
 *
 * NOMBRE       : 8_toupper.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : Convierte a mayuscula los argumentos pasados por lineas de comando.
 * FECHA        : 20 06 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/*#define*/


int main(int argc, char * argv[]){

int i, j;

      for(i = 0; i < argc; i++) /*recorre cada palabra del arreglo argv[]*/
      {
         for(j = 0; j < strlen(argv[i]); j++) /*recorre caracter por caracter segun la palabra i*/
         {
            if(isalpha(argv[i][j])) /*pregunta si se trata de una letra*/
            {
               printf("%c", toupper(argv[i][j])); /*la convierte en mayuscula*/
            }
            else    /*si no es letra no cambia nada, solo imprime lo que tenga en esa posicion*/
            {
               printf("%c", argv[i][j]);
            }
         }
         printf("\n");
      }
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}

