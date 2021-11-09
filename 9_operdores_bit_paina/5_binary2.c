/*
 * ============================================================================
 *
 * NOMBRE       : 5_binary2.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : recibe un entero positivo y lo convierte a binario de 16 bit.
 * FECHA        : 21 6 2021
 *
 * ============================================================================
 */


/*

Escribir un programa que imprima en notacion binaria un numero de 16 bits recibido desde la linea
de comandos.

1) debo cambiar el tipo de dato de unsigned char de 8 bits a unsigned short int de 16 bits.

2) los valores que puede almacenar un unsigned short int van de 0 a 65535.

3) los valores que debemos pasar por linea de comand para que se active un solo uno son x = 1^n
   donde n es el bit que queremos activar: del 1 al 15. (o sea 1, 2, 4, 8, 16, 32, 64, 128, 512, etc...)

*/



#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


void binary_print (unsigned short int val); /*prototipado*/

int main (int argc , char * argv[]) /*funcion main*/
{

   if(argc != 2 || atoi(argv[1]) > 65535 || atoi(argv[1]) < 0 )
      printf("\n Uso: %s <numero entero de 0 a 65.535>.\n", argv[0]);
   else
      binary_print(atoi(argv[1]));

   printf("\n FIN DEL PROGRAMA\n");

 return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}



 void binary_print (unsigned short int val)
 {
 unsigned char b;
 unsigned short int mask = (1<<15);

    for (b = 1; b <= 16 * sizeof(unsigned char); b++)
    {
        putchar(val & mask ? '1' : '0');
        mask >>= 1;   /*este operador corre la mascara y la guarda en ella misma*/
        if(!(b%4))      /*para separar de a 4 bits preguntando si b es multiplo de 4*/
           printf(" ");
    }
 }
