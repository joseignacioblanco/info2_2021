
          /* complejo.c */

 /* archivo fuente para construir la biblioteca libcomplejo.so y libcomplejo.a */


#include<stdio.h>
#include<math.h>
#include"complejo.h"


 /* Funcion para CARGAR un numero complejo*/
void complejoCargar(complejo_t * ptr_complx_z, float real, float imaginario)
 {
    (ptr_complx_z -> x) = real;
    (ptr_complx_z -> y) = imaginario;

 }


/* Funcion para IMPRIMIR un numero complejo*/
void complejoImprimir(complejo_t complx_z)
 {

 printf(" (%.3f , %.3f) ", complx_z.x, complx_z.y);

 }


void complejoImprimirPolarGrad(complejo_t complx_z)  /*NUEVA punto 10*/
{
  double modulo, angulo;

     modulo = sqrt(pow(complx_z.x, 2) + pow(complx_z.y, 2));
     angulo = atan2(complx_z.y, complx_z.x);
     printf("[%.3f] /_ %.3fº",modulo, (angulo * 180/M_PI)); /*no lo soporta el -std=c90*/

}



void complejoImprimirPolarRad(complejo_t complx_z) /*NUEVA punto 10*/
{

 double modulo, angulo;

    modulo = sqrt(pow(complx_z.x, 2) + pow(complx_z.y, 2));
    angulo = atan2(complx_z.y, complx_z.x);
    printf("[%.3f] /_ %.3f rad",modulo, angulo);

}




/* Funcion para SUMAR dos numeros complejos*/
complejo_t complejoSumar(complejo_t complx_1, complejo_t complx_2)
 {

    complejo_t suma;

       suma.x = (complx_1.x + complx_2.x);
       suma.y = (complx_1.y + complx_2.y);

    return suma;
 }




/* Funcion para RESTAR numeros complejos*/
complejo_t complejoRestar(complejo_t complx_1, complejo_t complx_2)
 {

    complejo_t resta;

      resta.x = (complx_1.x - complx_2.x);
      resta.y = (complx_1.y - complx_2.y);

    return resta;
 }
