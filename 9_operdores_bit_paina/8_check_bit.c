/*
 * ============================================================================
 *
 * NOMBRE       : 8_check_bit.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : muestra el bit a eleccion de un numero de 8 bits.
 * FECHA        :
 *
 * ============================================================================
 */

/*

Muestra el valor de un bit a eleccion de una variable numerica de 8 bits.
Tanto el numero como el bit a leer se pasan por linea de comandos.

*/


#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


void binary_print (unsigned char val); /*prototipado*/

int main (int argc , char * argv[]) /*funcion main*/
{

   if(argc != 3 || atoi(argv[1]) > 255 || atoi(argv[1]) < 0 )
      printf("\n Uso: %s <numero entero de 0 a 255> <bit a mostrar>.\n", argv[0]);
   else{
      printf(" ");
      binary_print(atoi(argv[1]));
      printf("\n");
   }

   printf("\n El bit %s del numero [%s] tiene valor: [%c]", argv[2], argv[1], (atoi(argv[1]) & (1 << atoi(argv[2]))) ? '1' : '0');

   printf("\n\n FIN DEL PROGRAMA\n");

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
