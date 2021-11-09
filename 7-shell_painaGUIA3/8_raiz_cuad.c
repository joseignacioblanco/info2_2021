/*
 * ============================================================================
 *
 * NOMBRE       : 8_raiz_cuad.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : pide un numero por pantalla y calcula la raiz cuadrada.
 * FECHA        : 19 junio 2021
 *
 * ============================================================================
 */

#include<stdio.h>  /*para la prinf y la escanf*/
#include<stdlib.h> /*para la funcion atoi creo*/
#include<math.h>   /*para sqrt*/
#include<ctype.h>  /*para la funcion isdigit*/
#include<string.h> /*para la funcion strlen creo*/

#define RANGO 20

int validar_numero(char *); /*prototipo de funcion*/

int main(void)
{

   int centinella = 0;
   int number = 0;
   char num[RANGO];

   do{
        do{
           printf("\n Ingrese un numero entero (ingrese 0 para salir): ");

           scanf("%s", num);
           centinella = validar_numero(num);
           }
        while(centinella == 0);

   number = atoi(num); /*convierte cadenas a enteros*/

         fprintf(stdout, "\n La raiz cuadrada de %d es: %.2f", number, sqrt(number));
     }
   while(number != 0);

   printf("\n FIN DEL PROGRAMA.\n");

   return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}



/*FUNCION VALIDAR_NUMERO*/

int validar_numero(char * num)
{
   int i;
   for(i = 0; i < strlen(num); i++)
   {
      if(!(isdigit(num[i])))
      {
         fprintf(stderr, "\n INGRESA SOLO NUMEROS ENTEROS POSITIVOS\n");
         return 0;
      }
   }
   return 1;
}
