/*
 * ============================================================================
 *
 * NOMBRE       : 7_compara_cad.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : Recibe dos cadenas por linea de comandos y compara las cadenas
 *                utilizando la funcion strcmp, e indica si la primer cadena es
 *                menor, igual o mayor que la segunda.
 * FECHA        : 20 06 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*#define*/


int main(int argc, char * argv[]){

   if(argc != 3)
      printf("\n ERROR: Ingrese con el formato %s <cadena 1> <cadena 2>\n", argv[0]);
   else

      switch(strcmp(argv[1],argv[2])){

      case 0:
         printf("\n %s es igual a %s \n", argv[1], argv[2]);
      break;

      default:

         if(strcmp(argv[1],argv[2]) > 0)
            printf("\n %s es mayor que %s \n", argv[1], argv[2]);
         else
            printf("\n %s es menor que %s \n", argv[1], argv[2]);
      break;

     }

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}

