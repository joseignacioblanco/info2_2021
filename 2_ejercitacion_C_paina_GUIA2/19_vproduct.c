/*
 * ============================================================================
 *
 * NOMBRE       : 19_vproduct.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : calcula el producto punto y cruz de dos vectores de 3 dimensiones.
 * FECHA        : 14 may 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/

float producto_punto(float *, float *);
void producto_cruz(float *, float *, float *);

int main(void){

  float vector1[3] = {0},
        vector2[3] = {0},
        resultado[3]={0};
  int i = 0;

  printf("\n Producto escalar y vectorial de dos vectores de dimension 3.\n");
  printf("\n Ingrese los elementos del primer vector: ");
  for(i=0; i<3; i++)
  scanf("%f", &vector1[i]);
  printf("\n Ingrese los elementos del segundo vector: ");
  for(i=0; i<3; i++)
  scanf("%f", &vector2[i]);

  printf("\n Vectores cargados: \n\tV1 = ( %.2f ; %.2f ; %.2f )\n\tV2 = ( %.2f ; %.2f ; %.2f )\n",
                        vector1[0], vector1[1], vector1[2], vector2[0], vector2[1], vector2[2]);

  printf("\n El producto punto es: %.2f \n",producto_punto(vector1,vector2));
  producto_cruz(vector1, vector2, resultado);
  printf("\n El producto cruz es: ( %.2f ; %.2f ; %.2f )\n\n",resultado[0], resultado[1], resultado[2]);
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}

float producto_punto(float vector1[], float vector2[]){

return vector1[0]*vector2[0] + vector1[1]*vector2[1] + vector1[2]*vector2[2];
}


void producto_cruz(float vector1[], float vector2[], float resultado[]){

  resultado[0] = vector1[1]*vector2[2] - vector2[1]*vector1[2];
  resultado[1] = vector2[0]*vector1[2] - vector1[0]*vector2[2];
  resultado[2] = vector1[0]*vector2[1] - vector2[0]*vector1[1];
}
