/* programa en alfa (guia 0 prof. lunati)  */

/*Este programa solicita al usuario que introduzca 10 numeros
enteros, los ordena de menor a mayor y los muestra en pantalla*/

/*---------------------------------------------------------------*/

  /* para compiar hago: gcc -Wall -Werror -std=c90 ordena_num.c  */


#include<stdio.h>

#define TAM 10

int main(void){

void ordenar(int *arreglo); /*prototipo de funcion ordenar*/

int num_enteros[TAM]={0};
int i=0;

puts("\n Ingrese 10 números positivos.\n");

   for(i=0; i<TAM; i++)
   scanf("%d",&num_enteros[i]);

   puts(""); /*solo pone un enter*/

   ordenar(num_enteros);

   for(i=0; i<TAM; i++)
   printf("Posicion:%2d --> %d\n", i+1, num_enteros[i]); /*%2d le da margen de dos espacios para alinear*/


return 0;
}


void ordenar(int *arreglo){      /*revisar la funcion ordenar porque no se si esta andando bien!!*/

int i=0, j=0, aux=0;

 for(i=1; i<TAM; i++){
    for(j=0; j<TAM-i; j++){
       if(arreglo[j]>arreglo[j+1]){
          aux=arreglo[j];
          arreglo[j]=arreglo[j+1];
          arreglo[j+1]=aux;
       }


    }
 }
}
