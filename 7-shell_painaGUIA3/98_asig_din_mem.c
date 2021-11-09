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



int main(void){

  int a = 5;
  int *p;

  p = (int *) malloc(sizeof (int));

  puts("ingrese un numero para sumarle 5");
  scanf("%d",p);

  printf("\n El resultao es %d: \n", a+(*p));

  free(p);
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
