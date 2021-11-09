

             /* programa en alfa prof. lunati guia 0  */

/*Leer una línea de texto que contenga letras mayúsculas y minúsculas.
 Escribir el texto con letras mayúsculas y minúsculas intercambiadas y
 el resto de los caracteres intactos.
 (Sugerencia: Utilizar el operador condicional ? : y las funciones de
 biblioteca islower, tolower ytoupper.)*/

/*---------------------------------------------------------------*/

   /*  para compiar hago: gcc -Wall -Werror -std=c90 mayus_minus.c  */


#include<stdio.h>
#include<ctype.h> /*este archivo cabecera me proporciona las funciones to_upper, to_lower, is_alpha, etc*/
#include<stdlib.h> /*este es para que funcione la system("clear") que me borra la basura de la pantalla*/

#define TAM 100

void intercambio(char *oracion);

int main(void){

char frase[TAM];


 system("clear");

 puts("\n Ingrese una frase \"CoN MayUScUlas y CoN mInUsCuLas\"\n");

 /*scanf("%100[^\n]s",frase);*/ /*meto la expresion regular para que no le de bolilla a los espacios y pa que no se pase de 100 chares*/
 fgets(frase, TAM, stdin);  /*otra forma mas elegante de hacer lo mismo y no complicarla con expresiones regulares*/

 intercambio(frase);

 printf("\n %s \n",frase);

 printf("\nLa diferencia entre mayusculas y minusculas es de: %d caracteres ascci.-\n", 'b'-'B'); /* b-B =32 */

 return 0;
}


void intercambio(char *oracion){

 int i;

    for(i=0; i<TAM; i++){

       if(islower(oracion[i]))
          oracion[i] -= ('a'-'A');

       else if(isupper(oracion[i]))
          oracion[i] += ('a'-'A');
    }
}
