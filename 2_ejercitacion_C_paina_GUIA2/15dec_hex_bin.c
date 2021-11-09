/*
 * ============================================================================
 *
 * NOMBRE       : 15dec_hex_bin.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : ingresa un entero del 0 al 255 y lo muestra en dec hex y bin
 * FECHA        : 6 - mayo - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/

void binario(int dato);


int main(void){

  short int dato = 0;

  while(dato != -1){
     do{
        printf("\n Ingrese un valor entero entre 0 y 255 (-1 para salir.): ");
        scanf("%hd", &dato);
     } while(dato < -1 || dato > 255);

     if(dato != -1){
        printf("\n\n \t\t %03d d = 0x%02X = ", dato, dato); /*si pongo %02o me imprime tambien en octal */
        binario(dato);
     }
  }

  printf("\n\n FIN DEL PROGRAMA!\n\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


    /* FUNCION IPRIMIR EN BINARIO*/

void binario(int dat)
{
    int sup = 7;
    while(sup >= 0)
    {
        if(dat & (((long int)1) << sup))
            printf("1");
        else
            printf("0");
        sup--;
    if(sup == 3)printf(" ");
    }
    printf(" b\n");
}
