/*
 * ============================================================================
 *
 * NOMBRE       : 8_distancia.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : calcula la distancia entre dos puntos del plano
 * FECHA        : 25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>  /*para las funciones pow y sqrt*/

/*#define*/

float distancia(float,float,float,float);

int main(void){

  printf("La distancia entre (%g,%g) y (%g,%g) es %.2g\n",
      1.0, 2.0, 3.0, 4.0, distancia(1.0, 2.0, 3.0, 4.0));
  printf("La distancia entre (%g,%g) y (%g,%g) es %.2g\n",
      2.0, 3.0, 3.0, 2.0, distancia(2.0, 3.0, 3.0, 2.0));
  printf("La distancia entre (%g,%g) y (%g,%g) es %.2g\n",
      -1.0, -1.0, 2.0, 2.0, distancia(-1.0, -1.0, 2.0, 2.0));

 
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


float distancia(float a,float b,float c,float d){

return sqrt(pow((a-c),2)+pow((b-d),2));
}

