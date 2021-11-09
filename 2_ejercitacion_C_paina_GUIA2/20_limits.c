/*
 * ============================================================================
 *
 * NOMBRE       : 20_limits.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : muestra el valor de las constantes simbolicas del header limits.h
 * FECHA        :
 *
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*#define*/


int main(void){

  printf("\n Constantes simbolicas definidas por el header limits.h\n");
  printf(" Constante simbolica CHAR_BIT: %u\n",CHAR_BIT);
  printf(" Constante simbolica CHAR_MIN: %d\n",CHAR_MIN);
  printf(" Constante simbolica CHAR_MAX: %d\n",CHAR_MAX);
  printf(" Constante simbolica SCHAR_MIN: %d\n",SCHAR_MIN);
  printf(" Constante simbolica SCHAR_MAX: %d\n",SCHAR_MAX);
  printf(" Constante simbolica UCHAR_MAX: %u\n",UCHAR_MAX);
  printf(" Constante simbolica SHRT_MIN: %d\n",SHRT_MIN);
  printf(" Constante simbolica SHRT_MAX: %d\n",SHRT_MAX);
  printf(" Constante simbolica USHRT_MAX: %u\n",USHRT_MAX);
  printf(" Constante simbolica INT_MIN: %d\n",INT_MIN);
  printf(" Constante simbolica INT_MAX: %d\n",INT_MAX);
  printf(" Constante simbolica UINT_MAX: %u\n",UINT_MAX);
  printf(" Constante simbolica LONG_MIN: %ld\n",LONG_MIN);
  printf(" Constante simbolica LONG_MAX: %ld\n",LONG_MAX);
  printf(" Constante simbolica ULONG_MAX: %ld\n",ULONG_MAX);
  printf(" Constante simbolica LLONG_MIN: %lld\n",LLONG_MIN);
  printf(" Constante simbolica LLONG_MAX: %lld\n",LLONG_MAX);
  printf(" Constante simbolica ULLONG_MAX: %ld\n",ULONG_MAX);


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
