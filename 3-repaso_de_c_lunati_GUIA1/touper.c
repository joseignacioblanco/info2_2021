
/* cambia a mayuscula un caracter fase alfa info_2 prof. lunati 8/04/2021  */

/*Escribir un programa en C que lea un caracter y lo imprima en pantalla en mayúscula.*/

/*---------------------------------------------------------------*/

  /* para compilar hago: gcc -Wall -Werror -std=c90 touper.c  */

#include<stdio.h>

int main(void){

 char letra;

   printf("\n Ingrese una letra minuscula: ");


   do
   scanf(" %c",&letra);
   while(!(letra >= 'a' && letra <= 'z'));


   printf("\n La \"%c\" en mayuscula es \"%c\"\n", letra, letra-32);


 return 0;
}
