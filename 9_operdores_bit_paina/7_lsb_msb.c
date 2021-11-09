/*
 * ============================================================================
 *
 * NOMBRE       : 7_lsb_msb.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : muestra los bits LSN y MSB de un numero de 8 bits.
 * FECHA        :
 *
 * ============================================================================
 */

/*

Muestra el valor los bits menos significativo (LSB, Least Significant Bit)
y mas significativo (MSB, Most Significant Bit) de un valor numerico de
8 bits cargado desde la linea de comandos.

*/


#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


void binary_print (unsigned char val); /*prototipado*/

int main (int argc , char * argv[]) /*funcion main*/
{

   if(argc != 2 || atoi(argv[1]) > 255 || atoi(argv[1]) < 0 )
      printf("\n Uso: %s <numero entero de 0 a 255>.\n", argv[0]);
   else{
      printf(" ");
      binary_print(atoi(argv[1]));
      printf("\n");
   }

   printf("\n EL LSB de %s es: %c", argv[1], (atoi(argv[1]) & (1 << 0)) ? '1' : '0');
   printf("\n EL MSB de %s es: %c", argv[1], (atoi(argv[1]) & (1 << 7)) ? '1' : '0');

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
