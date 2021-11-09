
/*              Funciones matemáticas

4) a. Escribir una función que reciba las coordenadas rectangulares
de dos puntos del plano y devuelva la distancia entre ellos.

b. Valiéndose de la función del punto anterior, escribir una función
que calcule la longitud total de un segmento de n puntos
bidimensionales, respondiendo al siguiente prototipo:

double longitud_segmento(double puntos[][2], size_t n); */


#include<stdio.h>
#include<math.h> /*recordar construir enlazando con -lm*/
#define DIM 2

float dist_plano(float[], float[]);

int main(void){

 float punto1[DIM], punto2[DIM] = {0};

 printf("\n Ingrese el primer punto (x,y): ");
 scanf(" %f %f", &punto1[0], &punto1[1]);

 printf("\n Ingrese el segundo punto (x,y): ");
 scanf(" %f %f", &punto2[0], &punto2[1]);

 printf(" Los puntos ingresados son: p1=(%.2f ; %.2f) y p2=(%.2f ; %.2f)",punto1[0] ,punto1[1], punto2[0], punto2[1]);

 printf("\n La distancia entre los puntos del plano es: %.2f\n",dist_plano(punto1, punto2));



return 0;
}



float dist_plano(float p1[], float p2[])
{
return (sqrt(pow(p1[0]-p2[0],2)+pow(p1[1]-p2[1],2)));
}
