/*
 * ============================================================================
 *
 * NOMBRE       : 6_suma.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : toma dos enteros por linea de comando y los suma
 * FECHA        : 20 06 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h> /*creo que atoi anda con esta*/
#include<ctype.h> /*para isalpha*/

/*#define*/


int main(int argc, char * argv[]){

int num[2] = {0};
int i;

 if(argc == 1 || argc > 3 || isalpha(argv[1][0]) || isalpha(argv[2][0])){
   printf("\n Error: debe ingresar por ejemplo: %s 2 3", argv[0]);
 }/*este if filtra si esta mal ingresado el formato*/

 else

 {
  for(i = 1; i < argc; i++)
     num[i-1] = atoi(argv[i]);   /*me convierte los argumentos de linea de comando a enteros*/

  printf("\n La suma de (%s + %s) es: %d", argv[1], argv[2], num[0] + num[1]);
 }

 printf("\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
