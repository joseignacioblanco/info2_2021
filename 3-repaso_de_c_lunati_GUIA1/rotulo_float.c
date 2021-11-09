
   /* rotulo de floats en alfa prof. lunati info_2 8 04 2021  */

/*Supongamos que x1 y x2 son variables en coma flotante cuyos valores
son 8.0 y -2.5 respectivamente. Visualizar los valores de x1 y x2,
con los rótulos adecuados por ejemplo: x1 = 8.0 x2 = -2.5 */

/*---------------------------------------------------------------*/

  /* para compilar hago: gcc -Wall -Werror -std=c90 rotulo.c  */


#include<stdio.h>
#include<ctype.h>

void imprimir_rotulo(float primero, float segundo);

int main(void){

   float numero_1 = 0, numero_2 = 0;

   puts("\nIngrese dos Numeros decimales:");


   scanf("%f %f",&numero_1, &numero_2);


   imprimir_rotulo(numero_1, numero_2);


 return 0;
}



 void imprimir_rotulo(float primero, float segundo){

    printf("\n %.1f \n %.1f \n",primero, segundo);
 }
