/* programa en alfa  */


   /* programa de la clase numero 6 de nieva
      solicita un numero e indica si el numero
      ingresado es positivo o negativo*/


#include<stdio.h>
/*#include<ctype.h> no hace falta pero es para el isalpha to lower isanum y todas esas.*/
#include<stdlib.h>

int main(void){

   int numero_ingresado = 0;

   inicio:   /*etiqueta para el goto*/

   system("clear");  /*anda con la cabecera de stdlib.h*/

   printf("\n Ingrese un numero entero distinto de cero --> ");
   scanf(" %d", &numero_ingresado);

   if(numero_ingresado == 0){ /*no se que hace este if pero funciona para filtrar cero y letras*/
      getchar();
      goto inicio;
      }

   else if(numero_ingresado < 0){
      printf("\n El numero %d es negativo\n",numero_ingresado);
      }

   else
      {
      printf("\n El numero %d es positivo\n", numero_ingresado);
      }


return 0;
}
