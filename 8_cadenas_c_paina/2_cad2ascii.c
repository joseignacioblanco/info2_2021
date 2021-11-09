/*
 * ============================================================================
 *
 * NOMBRE       :
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  :
 * FECHA        :
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*#define*/


int main(void){

   char cadena[21];
   int i;

   printf("\n Ingrese una cadena (max. 20 caracteres): ");
   scanf("%[^\n]s", cadena);

   for(i = 0 ; i < strlen(cadena) ; i++){
      printf("\n '%c' \t %d \t 0x%X", cadena[i], cadena[i], cadena[i]);
   }

   printf("\n FIN DEL PROGRAMA\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
