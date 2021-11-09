/*
 * ============================================================================
 *
 * NOMBRE       : 10_reset_bit.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : setea un bit de un numero de 8 bits.
 * FECHA        : 23 6 2021
 *
 * ============================================================================
 */

/*

Escribir un programa que ponga a cero logico un bit especifico en un numero de 8 bits.

*/


#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


void binary_print (unsigned char val); /*prototipado*/

int main (int argc , char * argv[]) /*funcion main*/
{

   if(argc != 3 || atoi(argv[1]) > 255 || atoi(argv[1]) < 0 )
      printf("\n Uso: %s <8 bits numbrer> <number shift>.\n", argv[0]);
   else{

      printf("\n \t %s & ~(1 << %s) = %d", argv[1], argv[2], (atoi(argv[1]) & ~(1 << atoi(argv[2]))));
      printf("\n ");
      binary_print(atoi(argv[1]));
      printf(" & ~(1 << %s) = ", argv[2]);
      binary_print(atoi(argv[1]) & ~(1 << atoi(argv[2])));
      printf("\n\n FIN DEL PROGRAMA\n");

   }
 return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}



 void binary_print (unsigned char val)
 {
 unsigned char b;
 unsigned char mask = (1<<7);

    for (b = 1; b <= 8 * sizeof(unsigned char); b++)
    {
        putchar(val & mask ? '1' : '0');
        mask >>= 1;   /*este operador corre la mascara y la guarda en ella misma*/
        if(b==4)      /*para separar los nibbles*/
           printf("-");
    }
 }
