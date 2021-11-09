/*
 * ============================================================================
 *
 * NOMBRE       :
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : 
 * FECHA        :
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


union int_float{

  int entero;
  float real;
  };

void imprimir_union_int_float(union int_float u);

int main(void){

  union int_float u;
  
  printf("\n Ingrese un entero: ");
  scanf("%d",&(u.entero));
  imprimir_union_int_float(u);

  printf("\n Ingrese un real: ");
  scanf("%f", &(u.real));
  imprimir_union_int_float(u);

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


void imprimir_union_int_float(union int_float u){

  printf("- El miembro INT de la union es: %d\n", u.entero);
  printf("- El miembro FLOAT de la union es: %f\n", u.real);
}
