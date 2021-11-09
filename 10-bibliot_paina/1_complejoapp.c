/*
 * ============================================================================
 *
 * NOMBRE       : 1_complejoapp.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : programa para operar con numeros complejos. "aplicacion"
 * FECHA        : 24 junio 2021
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h> /*define la constante simbolica EXIT_SUCCES*/
#include"complejo.h"  /*este header tiene los prototipos de las funciones de numeros complejos*/

/*#define*/


int main(void)
 {

    complejo_t z1, z2, z_suma, z_resta; /* Define las variables de tipo complejo_t (viene de un typedef: struct)*/

    complejoCargar (& z1 , 2, 3);     /* Llama a las fuciones que cargan la estructura de complejos*/
    complejoCargar (& z2 , -1, -1);

    printf ("\n El complejo z1 es: ");
    complejoImprimir(z1);                 /* Llama a la funcion imprimir complejo*/
    printf("\n En notacion polar: MODULO /_ GRADOS= ");
    complejoImprimirPolarGrad(z1);
    printf("\n En notacion polar: MODULO /_ RAD= ");
    complejoImprimirPolarRad(z1);

    puts("\n\n--------------------------------------");

    printf ("\n El complejo z2 es: ");
    complejoImprimir(z2);
    printf("\n En notacion polar: MODULO /_ GRADOS= ");
    complejoImprimirPolarGrad(z2);
    printf("\n En notacion polar: MODULO /_ RAD= ");
    complejoImprimirPolarRad(z2);

    puts("\n\n--------------------------------------");


    /* Suma de nros complejos */
    z_suma = complejoSumar (z1, z2);          /* Llama a la funcion sumar complejos*/
    printf ("\n La suma de z1 y z2 es: ");
    complejoImprimir(z_suma);
    printf(" = ");
    complejoImprimirPolarGrad(z_suma);
    printf(" = ");
    complejoImprimirPolarRad(z_suma);

    puts("\n\n--------------------------------------");


    /* Resta de nros complejos */
    z_resta = complejoRestar(z1, z2);          /* Llama a la funcion restar complejos*/
    printf ("\n La resta de z1 y z2 es: ");
    complejoImprimir(z_resta);
    printf(" = ");
    complejoImprimirPolarGrad(z_resta);
    printf(" = ");
    complejoImprimirPolarRad(z_resta);


    printf("\n\n FIN DEL PROGRAMA.\n");

    return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
 }

