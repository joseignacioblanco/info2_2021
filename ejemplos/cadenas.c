/*
 * ============================================================================
 *
 * NOMBRE       : cadenas.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : solo define cadenas de caracteres
 * FECHA        :
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


int main(void){

     char cadena1 [11] = {"HOLA MUNDO\0"},
          cadena2 [] = {'h','o','l','a','\0'},
          cadena3 [] = {72, 111, 108, 97, 0};

   printf(" %s\n %s\n %s\n", cadena1, cadena2, cadena3);


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
