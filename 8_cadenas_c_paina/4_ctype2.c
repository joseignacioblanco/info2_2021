/*
 * ============================================================================
 *
 * NOMBRE       : 4_ctype2.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : ejercicio 1 pero con linea de comando
 * FECHA        :
 *
 * ============================================================================
 */

/* int main(int argc, char * argv[]) */

#include<stdio.h>
#include<stdlib.h> /*para es EXIT SUCCES del return*/
#include<ctype.h>  /*para las isdigit isalnum my todas esas*/
#include<string.h> /*para la strcpy y la srtlen*/
/*#include<>*/

#define BUFFER 20


int main(int argc, char * argv[]){

   char caracter[BUFFER];

   strcpy(caracter, argc != 1 ? argv[1] : "ERROR");

   if(strlen(caracter) > 1 || argc > 2 || argc == 1){
      printf("\n ERROR: Ingrese solo un caracter. (EJEMPLO: %s a)\n", argv[0]);
   }
   else
   {
      isdigit(caracter[0]) ? printf(" isdigit: SI\n") : printf(" isdigit: NO\n");
      isalpha(caracter[0]) ? printf(" isalpha: SI\n") : printf(" isalpha: NO\n");
      isalnum(caracter[0]) ? printf(" isalnum: SI\n") : printf(" isalnum: NO\n");
      isxdigit(caracter[0]) ? printf(" isxdigit: SI\n") : printf(" isxdigit: NO\n");
      islower(caracter[0]) ? printf(" islower: SI\n") : printf(" islower: NO\n");
      isupper(caracter[0]) ? printf(" isupper: SI\n") : printf(" isupper: NO\n");
   }
   return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
