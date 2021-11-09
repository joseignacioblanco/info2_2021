/*
 * ============================================================================
 *
 * NOMBRE       : 17_circulo1.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : una estructura anidada para definir un circulo en coord polares
 * FECHA        : 13 mayo 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/

struct punto{
  float x,
        y;
};

struct circulo{
  struct punto coordenada;
  double radio;
};


int main(void){

  struct circulo circulo1 = {0};

  printf("\n Ingrese las coordenadas ( x ; y ) del centro del círculo: ");
  scanf(" %f %f", &circulo1.coordenada.x, &circulo1.coordenada.y);
  printf("\n Ingrese el radio del círculo: ");
  scanf(" %lf",&circulo1.radio);

  printf("\n El circulo ingresado es:\n Centro: ( %.2f , %.2f )\n Radio: %.2f\n",
                                                circulo1.coordenada.x, circulo1.coordenada.y,
                                                circulo1.radio);


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
