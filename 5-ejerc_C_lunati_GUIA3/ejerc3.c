
/*Crear una función que concatena dos cadenas (cadena 1 y cadena 2)
dejando el resultado de dicha operación sobre la primera (cadena 1).*/


#include<stdio.h>
#include<string.h>
#define TAM 100

 void concatenar(char * cadena1, const char * cadena2);

int main(void){

 char cadena1[TAM], cadena2[TAM];

   printf("\n Ingrese la primera cadena: ");
   scanf(" %[^\n]s", cadena1);
   printf("\n Ingrese la segunda cadena: ");
   scanf(" %[^\n]s", cadena2);
   printf("\n Concatenando...\n");
   concatenar(cadena1, cadena2);
   printf("\n La primera cadena ahora contiene: %s\n", cadena1);
   puts("\n Fin del programa");

 return 0;
}


void concatenar(char * cadena1, const char * cadena2)
 {
     size_t largo_cad1 = strlen(cadena1);
     size_t i;

     for (i = 0 ; i < TAM && cadena2[i] != '\0' ; i++)
        cadena1[largo_cad1 + i] = cadena2[i];
     cadena1[largo_cad1 + i] = '\0';

 }

