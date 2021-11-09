/*
 * ============================================================================
 *
 * NOMBRE       : 3_suma_eco.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : Declara dos enteros, los suma y devuelve la suma por return del main
 * FECHA        : 15 mayo 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

/*#define*/


int main(int argc, char *argv[]){

if (argc==1)
   {
       printf("     Ingrese como parametros dos numeros enteros para poderlos sumar.\n");
       return 0;
   }

  int a = atoi(argv[1]),
      b = atoi(argv[2]);
  printf("\n     SUMANDO...\n");

if(a+b < 0 || a+b > 255){
  printf("     El resultado debe entrar en 8 bits de 0 a 255, evite overflow.\n");
}
  return a + b;
}

