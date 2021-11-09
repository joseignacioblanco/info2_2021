/*
 * ============================================================================
 *
 * NOMBRE       : 12_dais2.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : lo mism que el 11 pero con %s de string dentro del for
 * FECHA        :25 - abril - 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/

char dato[5][10] = {{76, 117, 110, 101, 115, 0},
                    {77, 97, 114, 116, 101, 115, 0},
                    {77, 105, 101, 114, 99, 111, 108, 101, 115, 0},
                    {74, 117, 101, 118, 101, 115, 0},
                    {86, 105, 101, 114, 110, 101, 115, 0}};

int main(void){

  int i;
  for(i = 0; i < 5; i++)
      printf("%s\n", dato[i]);

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
