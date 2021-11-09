/*
 * ============================================================================
 *
 * NOMBRE       : 14_set bites.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : Programa que recibe por linea de comandos un entero de 32 bits
 *                e imprime en pantalla el valor de los bytes que lo componen en
 *                notacion hexadecimal.
 * FECHA        : 23 jun 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

/*#define*/


union entero{
   unsigned int num_32bit;      /*declara la union entero*/
   unsigned char byte[4];
};


int main(int argc, char * argv[]){

union entero numero;   /*define una variable de tipo union entero que se llama numero*/

  numero.num_32bit = ~(0 << 31);

  if(argc != 2)
     printf("\n USO: %s <numero de 32 bits: entre 0 y %u>\n",argv[0], numero.num_32bit);
  else
  {
     numero.num_32bit = atoi(argv[1]);
     printf("\n %s = %02X-%02X-%02X-%02X \n", argv[1], numero.byte[3], numero.byte[2], numero.byte[1], numero.byte[0]);
  }

  printf("\n FIN DEL PROGRAMA.\n");
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
