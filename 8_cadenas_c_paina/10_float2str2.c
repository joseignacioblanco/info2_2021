/*
 * ============================================================================
 *
 * NOMBRE       : 10_float2str2.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : ingresa un float y lo convierte a cadena.
 * FECHA        :
 *
 * ============================================================================
 */

/*

Ampliar la funcion float2str() para que reciba como ultimo argumento
la cantidad de cifras decimales que se quieren obtener de la conversion
RECORDAR QUE SE DEBE COMPILAR CON LA OPCION -lm PRARA ENLAZAR CON libm.so
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define LONGITUD 10

void float2str(float, char * cad, int ndec );

int main(void){

   float val = M_PI;
   char cad[LONGITUD] = {0};

   float2str(val, cad, 2);
   printf(" %s\n", cad);

   float2str(val, cad, 4);
   printf(" %s\n", cad);

   float2str(val, cad, 6);
   printf(" %s\n", cad);


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}



void float2str(float val, char *cad, int ndec)
{

   int parcero = val * pow(10,ndec);
   int i;

   for(i = (ndec+1) ; i > -1 ; i--)
   {
      if(i != 1)
      {
       cad[i] = (parcero % 10) + '0';
       parcero /= 10;
      }

    else
       cad[i] = '.';

   }
}
