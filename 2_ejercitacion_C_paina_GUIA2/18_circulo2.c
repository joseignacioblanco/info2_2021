/*
 * ============================================================================
 *
 * NOMBRE       : 18_circulo2.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : una estructura anidada para definir un circulo en coord polares
 * FECHA        : 13 may 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*#define*/


struct punto{
  float x,
        y;
};

struct circulo{
  struct punto coordenada;
  double radio;
};


double dist_origen(struct circulo);
double area_circ(struct circulo);


int main(void){

  struct circulo circulo1 = {0};

  printf("\n Ingrese las coordenadas ( x ; y ) del centro del círculo: ");
  scanf(" %f %f", &circulo1.coordenada.x, &circulo1.coordenada.y);
  printf("\n Ingrese el radio del círculo: ");
  scanf(" %lf",&circulo1.radio);

  printf("\n El circulo ingresado es:\n Centro: ( %.2f , %.2f )\n Radio: %.2f\n",
                                                circulo1.coordenada.x, circulo1.coordenada.y,
                                                circulo1.radio);

  printf("\n La distancia al origen de coordenadas es: %.2f\n El area del circulo es: %.2f\n", dist_origen(circulo1),
                                                                                               area_circ(circulo1));
  printf("\n Los parametros de las funciones para calcular la distancia al origen y el radio son pasados por valor.\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}



double dist_origen(struct circulo circle){

return (double) sqrt(pow(circle.coordenada.x, 2) + pow(circle.coordenada.y, 2));
}



double area_circ(struct circulo circle){

return M_PI * pow(circle.radio, 2);
}
