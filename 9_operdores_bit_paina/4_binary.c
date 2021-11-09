/*
 * ============================================================================
 *
 * NOMBRE       : 4_binary.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : recibe un entero positivo y lo convierte a binario.
 * FECHA        : 21 6 2021
 *
 * ============================================================================
 */


/*

Escribir un programa que imprima en notacion binaria un numero de 8 bits recibido desde la linea
de comandos. El listado 1 muestra el esqueleto del programa con una posible implementacion de la
funcion para imprimir en notacion binaria una variable tipo unsigned char. Completar el cuerpo
de la funcion main() para que el programa tenga la interaccion del usuario como se muestra en
el listado 2. Al ejecutar el programa sin argumentos, el mismo muestra la forma correcta de uso
indicando que espera recibir un valor numerico como argumento.

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
   else
      binary_print(atoi(argv[1]));

   printf("\n FIN DEL PROGRAMA\n");

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

