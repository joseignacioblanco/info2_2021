/*
 * ============================================================================
 *
 * NOMBRE       : 9_float2str1.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : ingresa un float y lo convierte a cadena.
 * FECHA        :
 *
 * ============================================================================
 */

/*

Escribir el cuerpo de la funcion float2str() del programa del Listado 7.
Esta funcion convierte la variable de punto flotante (float) val a una cadena
de caracteres cad. El valor a convertir es siempre positivo de 0.00 hasta 9.99.
La implementacion de la funcion no debe hacer uso de las funciones de biblioteca
de caracteres y cadenas.

                         Listado 7: Archivo float2str1.c

1 #include <stdio.h>
2 #include <stdlib.h>
3 #include <math.h>
4
5 #define LONGITUD 10
6
7 void float2str(float , char * );
8
9 int main(void)
10 {
11 float val;
12 char cad[LONGITUD];
13
14 val = 3.14;
15 float2str(val, cad);
16 printf(" %s\n", cad);
17
18 val = 1.75;
19 float2str(val, cad);
20 printf(" %s\n", cad);
21
22 return 0;
23 }
24
25 void float2str(float val, char *cad)
26 {
27  ---- Completar----
28 }

*/





#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define LONGITUD 10

void float2str(float, char * cad );

int main(void){

   float val;
   char cad[LONGITUD] = {0};

   val = 3.14;
   float2str(val, cad);
   printf(" %s\n", cad);

   val = 1.75;
   float2str(val, cad);
   printf(" %s\n", cad);


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}



void float2str(float val, char *cad)
{

   int parcero = val*100;
   int i;

   for(i = 3 ; i > -1 ; i--)
   {
      if(i != 1)
      {
       cad[i] = (parcero % 10) + 48; /*puedo usar constante de caracter '0' en vez de 48*/
       parcero /= 10;
      }

    else
       cad[i] = 46;  /*puedo poner el literal de caracter '.' que representa el 46*/

   }
}
