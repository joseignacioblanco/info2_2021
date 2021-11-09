
/*  Archivo cabecera complejo.h  */


#ifndef _COMPLEJO_H
#define _COMPLEJO_H


/*-----------------------------------------------------------------------------------------------------------*/


      /* Declaracion de la estructura complejo_t */
      /* La estructura debe ir primero porque luego se la invoca en los prototipos y debe reconocerla*/

   typedef struct
    {

       float x;
       float y;

    }complejo_t;

/*------------------------------------------------------------------------------------------------------------*/

      /* Prototipo de funciones para operar con numeros complejos */

   void complejoCargar(complejo_t * ptr_complx_z, float real, float imaginaio);

   void complejoImprimir(complejo_t complx_z);
   void complejoImprimirPolarGrad(complejo_t complx_z);
   void complejoImprimirPolarRad(complejo_t complx_z);

   complejo_t complejoSumar(complejo_t complx_1, complejo_t complx_2);
   complejo_t complejoRestar(complejo_t complx_1, complejo_t complx_2);



#endif
