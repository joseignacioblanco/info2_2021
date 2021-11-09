/*Punteros
1)Escribir un programa en el que se defina un arreglo de 10 punteros
a float, se lean diez números en las ubicaciones en las que hacen
referencia los punteros. Se sumen todos los números y se almacene el
resultado en una dirección a la que haga referencia un puntero.
El programa debería mostrar el contenido de todas las variables,tanto
los punteros como los números de tipo float.*/


#include <stdio.h>
#define TAM 10


int main(void){

 float valor[TAM]={1.33, 5.61, 8.5, 9.77, 9.12, 0.58, 4.12, 9.31, 144.50, 1.10};
 float *ptr_arreglo[TAM]; /*un vector de punters que apuntan a float*/
 float resultado=0;
 float * ptr_resultado = &resultado;
 int i=0;


   for(i = 0; i < TAM; i++){

      ptr_arreglo[i] = &valor[i];
      printf("posicion de mem: %p - valor %2d: %.2f \n",ptr_arreglo[i], i+1, *ptr_arreglo[i]);
      *ptr_resultado += *ptr_arreglo[i];
      }

   printf("\nposicion de mem: %p El total es: %.2f \n",ptr_resultado, *ptr_resultado);


return 0;

}
