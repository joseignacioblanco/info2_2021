/*
 * ============================================================================
 *
 * NOMBRE       : 1_ctype1.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : evalua las funciones de biblioteca ctype.
 * FECHA        : 20 06 2021
 *
 * ============================================================================
 */

/* Escribir un programa para evaluar las funciones de manejo de caracteres
(archivo de cabecera <ctype.h>). Las funciones a evaluar son:
isdigit, isalpha, isalnum, isxdigit, islower y isupper.
El programa debe solicitarle al usuario que ingrese un caracter de forma
continuada hasta precionar Ctrl-C */



#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/*#include<>*/

/*#define*/


int main(void){

   char caracter;

   while(1){
      printf("\n Ingrese un caracter (Ctrl + C para salir): ");
      scanf(" %c", &caracter);

      isdigit(caracter) ? printf(" isdigit: SI\n") : printf(" isdigit: NO\n");
      isalpha(caracter) ? printf(" isalpha: SI\n") : printf(" isalpha: NO\n");
      isalnum(caracter) ? printf(" isalnum: SI\n") : printf(" isalnum: NO\n");
      isxdigit(caracter) ? printf(" isxdigit: SI\n") : printf(" isxdigit: NO\n");
      islower(caracter) ? printf(" islower: SI\n") : printf(" islower: NO\n");
      isupper(caracter) ? printf(" isupper: SI\n") : printf(" isupper: NO\n");
   }

   return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
