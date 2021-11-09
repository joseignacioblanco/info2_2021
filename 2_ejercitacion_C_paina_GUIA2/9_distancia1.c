/*
 * ============================================================================
 *
 * NOMBRE       : 9_distancia1.c
 * AUTOR        : José Blanco 83621
 * Version      : 8_distancia.c pero Version 1.1
 * Descripción  : calcula la distancia entre dos puntos del plano
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>  /*para las funciones pow y sqrt*/

/*#define*/

float distancia(float * p1, float * p2);
void ingresar(float * p1, float * p2);

int main(void){

  float p1[2] = {0}, p2[2] = {0};

  ingresar(p1, p2);

  printf("La distancia entre (%g,%g) y (%g,%g) es %.2g\n",
      p1[0], p1[1], p2[0], p2[1], distancia(p1, p2));

 
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


float distancia(float * p1, float * p2){
return sqrt(pow((*(p1) - *(p2)),2) + pow((*(p1 + 1) - *(p2 + 1)),2));
}


void ingresar(float * p1, float * p2){

  printf("\n Ingrese el punto p1:");
  scanf(" %f %f", p1, p1 + 1);
  printf("\n Ingrese el punto p2:");
  scanf(" %f %f", p2, p2 + 1);
}
