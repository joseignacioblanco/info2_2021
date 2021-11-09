/*
 * ============================================================================
 *
 * NOMBRE       : 11_dais1.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : 
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

  int i, j;
  for(i = 0; i < 5; i++){
    for(j = 0; j < 10; j++){
      printf("%c", dato[i][j]);
    }
    printf("\n");
  }
  printf("\n La matriz de datos char ocupa %lu bytes en memoria\n", sizeof(dato));

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
