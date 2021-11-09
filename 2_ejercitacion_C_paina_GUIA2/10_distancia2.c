/*
 * ============================================================================
 *
 * NOMBRE       : 10_distancia2.c
 * AUTOR        : José Blanco 83621
 * Version      : 8_distancia.c pero Version 1.2
 * Descripción  : calcula la distancia entre dos puntos del plano con struct
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>  /*para las funciones pow y sqrt*/

/*#define*/

  struct punto{
  float x, y;
  };

float distancia(struct punto * p1, struct punto * p2);
void ingresar(struct punto * p1, struct punto * p2);

int main(void){

 struct punto p1, p2;
 
  ingresar(&p1, &p2);

  printf("La distancia entre (%g,%g) y (%g,%g) es %.2g\n", p1.x, p1.y, p2.x, p2.y, distancia(&p1, &p2));

 
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


float distancia(struct punto * p1, struct punto * p2){
  return sqrt(pow((p1->x - p2->x),2) + pow((p1->y - p2->y),2));
}


void ingresar(struct punto * p1, struct punto * p2){

  printf("\n Ingrese el punto p1:");
  scanf(" %f %f", &p1->x, &p1->y);
  printf("\n Ingrese el punto p2:");
  scanf(" %f %f", &p2->x, &p2->y);
}
