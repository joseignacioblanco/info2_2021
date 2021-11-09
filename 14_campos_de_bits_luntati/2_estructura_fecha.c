/*
 * ============================================================================
 *
 * NOMBRE       : estructura_fecha.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : almacenar una fecha con campos de bits.
 * FECHA        : 26 07 2021
 * OBSERVACIONES: para compilar no puedo ponerle el --pedantic-errors porque me dice que
 *                los campos de bits son una extension de GCC. Pero solo jode cuando uso
 *                chares, porque cuando uso int o unsigned int no jode mas con esa albertencia
 *                ademas solo lo hace cuando uso el estandar c90 porque en c11 por ejemplo ya no jode.
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


struct date
 {
    unsigned char dia:5,
                  mes:4,
                  anio:7;
 };


int main(void){

  struct date fecha;
  unsigned dia, mes, anio;

  printf("\n Ingrese una fecha en formato [dd/mm/aa]: ");
  scanf("%u/%u/%u", &dia, &mes, &anio);
                                                  /*parece que tengo que asignar asi los campos de bits porque no me
                                                    deja asignar con scanf directamente, o sea me dice que no se puede*/
  fecha.dia = dia;                                /*tomarle la direccion a un campo de bits: que porqueria... */
  fecha.mes = mes;
  fecha.anio = anio;

  printf(" El dia ingresado es: %u\n El mes ingresado es: %u\n El anio ingresado es: %u\n", fecha.dia, fecha.mes, fecha.anio);
  printf(" El tamanio de la estructura con campos de bits es de: %lu bytes.\n", sizeof(struct date));
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
