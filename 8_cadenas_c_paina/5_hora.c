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

int main(void)
{
   char cadena[6];
   unsigned char hora, min;

   printf("Ingrese la hora en format ’HH:MM’: ");
   scanf(" %s", cadena);

   hora = atoi(&cadena[0]);
   min = atoi(&cadena[3]);

   printf("Horas: %d\n", hora);
   printf("Minutos: %d\n", min);


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
