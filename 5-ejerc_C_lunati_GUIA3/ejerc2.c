
/* Cadenas de caracteres:
Escribir una función que reciba una cadena de caracteres "s" y un arreglo
de caracteres con espacio suficiente "t", y copie la cadena en el arreglo,
terminando la cadena con el caracter ’\0’
(funcion strcpy() de la biblioteca): void strcpy(char *t, const char *s);*/


#include<stdio.h>
#define TAM 100

void copiar(const char origen[], char destino[], size_t largo); /*prototipo de la funcion copiar*/

int main(void){

 char  origen[TAM] ={"Cadena origen no inicializada\0"};
 char  destino[TAM] = {"Aun esta vacio\0"};

   printf("\n 0 - Los arreglos ORIGEN y DESTINO son de %ld caracteres.\n",sizeof(origen));
   printf("\n 1 - La cadena ORIGEN sin inicializar contiene: %s. \n", origen);
   printf("\n 2 - Ingrese una cadena de caracteres para cargar en ORIGEN: ");
   scanf("%[^\n]s", origen);
   printf("\n 3 - La cadena ORIGEN se inicializo con: %s \n", origen);
   printf("\n 4 - La cadena DESTINO contiene: %s. \n", destino);

   printf("\n 5 - Enviando la cadena ingresada para ser copiada en DESTINO...\n");
   copiar(origen, destino, sizeof(origen));

   printf("\n 6 - Ahora la cadena DESTINO contiene: %s \n", destino);
   puts("\n 7 - Fin del programa.\n");

 return 0;
}


 void copiar(const char origen[], char destino[], size_t largo)
 {
    size_t i;

    for (i = 0; i < largo && origen[i] != '\0'; i++) /*copia la cadena char por char*/
        destino[i] = origen[i];
    for ( ; i < largo; i++)                          /*agrega finales de cadena hasta el final*/

        destino[i] = '\0';
 }
