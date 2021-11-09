 /*     guarda un nombre en un arreglo en alfa - prof. lunati info_2 8/04/2021     */


/*Escribir un programa en C que mediante las funciones scanf y printf
genere el mensaje "Por favor, introduce tu nombre:" y que el usuario
pueda ingresar su nombre en la misma linea.
Asignar el nombre en un arreglo de caracteres llamado nombre.*/

/*---------------------------------------------------------------*/


  /* para compiar hago: gcc -Wall -Werror -std=c90 nomb_arreglo.c   */


#include<stdio.h>

#define TAM 20

int main(void){

char nombre[TAM];

   printf("\n Por favor, Ingrese su nombre. --> ");

   scanf("%20[^\n]s",nombre); /*el 20 es para que no se pase mas allá del arreglo de 20 chares*/
                              /*la expresion regular es para que el scanf no tome solo el primer nombre*/
   printf("\n Bienvenido %s. \n\n",nombre);

 return 0;
}
