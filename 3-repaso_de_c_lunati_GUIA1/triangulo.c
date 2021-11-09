  /* Calcula hipotenusa version alfa - prof. lunati info_2 8 04 2021  */


/*Escribir un programa en C que solicite al usuario los valores de los
 catetos de un triangulo, calcule cual es la hipotenusa, el área
y el perímetro y muestre en pantalla estos resultados*/

/*---------------------------------------------------------------*/

/*para compilar uso:  gcc -Wall -Werror -std=c90 triangulo.c -lm  */

#include<stdio.h>
#include<math.h>

int main(void){

float adyacente= 0, opuesto= 0;

 printf("\n Ingrese los valores a y b de los catetos de un triangulo rectangulo.\n a: ");

 scanf("%f",&adyacente);

 printf(" b: ");

 scanf("%f",&opuesto);

 printf("\n El valor de la hipotenusa es de: %.2f\n",sqrt(pow(adyacente,2) + pow(opuesto,2)));

 return 0;
}


  /* recordar compilar contra la biblioteca matematica con -lm: (gcc -Wall -Werror -std=c90 triangulo.c -lm) */
