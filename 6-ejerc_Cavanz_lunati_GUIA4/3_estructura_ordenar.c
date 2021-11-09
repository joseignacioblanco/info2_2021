/*
 * ============================================================================
 *
 * NOMBRE       : 3_estructura_ordenar
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : almacena nombres y notas en una estructura adecuada y las ordena por nombre
 * FECHA        : 6 julio 2021
 *
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGOR_NOMBRE 20
#define CANT_NOTAS 3

struct estudiantes /*declaracion de la estructura estudiantes: con miembro nombre y notas*/
 {
    char nombre[LARGOR_NOMBRE];
    float notas[CANT_NOTAS];
 };


void imprimir(struct estudiantes * lista_ptr, int cant_de_alumnos);/*prototipo de funciones*/
void ordenar(struct estudiantes * lista_ptr, int cant_de_alumnos);

int main(void){

 int i = 0, j;
 char buffer_nombre[LARGOR_NOMBRE];
 char * flag = "0";/*este flag me va comparar si el usuario ingresa 0 para salir del programa*/
 struct estudiantes * alucnaje_ptr; /*define un puntero que apunta a un tipo de dato struct estudiantes*/

 do  /*bucle que se repite hasta que se ingrese un cero: 0*/
 {
    printf("\n Ingrese el nombre del %dº alumno (0 para salir): ", ++i); /*pide un nombre o salir PREINCREMENTA i !!!*/
    scanf(" %[^\n]s", buffer_nombre);  /*mete el nombre que ingresa por teclado en el buffer*/
    if(strncmp(buffer_nombre, flag, 1) == 0) /*si el usuario ingresa cero sale del if-else y por ende tambien del do-Wile*/
     {
        break;
     }
    else
     {

        if(i == 1) /*si es la primera pasada, reserva memoria con malloc*/
           alucnaje_ptr = (struct estudiantes *) malloc(i * sizeof(struct estudiantes));
        else       /*si no es la primera vez que pasa, reserva memoria con realloc*/
           alucnaje_ptr = (struct estudiantes *) realloc(alucnaje_ptr, i * sizeof(struct estudiantes));

        if(alucnaje_ptr == NULL) /*si malloc o realloc no pudo reservar memoria sale el error*/
         {
            printf("\n ERROR EN REASIGNACION DE MEMORIA REALLOC");
         }
        else  /*en caso que si pudo reservar memoria, copia el nombre ingresado a la estructura y pide las notas*/
         {

            strcpy((alucnaje_ptr + (i-1)) -> nombre, buffer_nombre);

            for(j = 0; j < CANT_NOTAS; j++) /*tiene que pedir tres notas, por eso el for*/
             {
                printf("\n Ingrese la %dº nota: ", j+1);
                scanf("%f", & ((alucnaje_ptr + (i-1)) -> notas[j])); /*las guarda en el campo de notas de la estructura i segun la pasada*/
             }

         }
     }
 }
 while(strncmp(alucnaje_ptr -> nombre, flag, 1) != 0); /*hace que salga si el usuario ingresa un cero en lugar de un nombre*/

 if(i != 1)
  {
     imprimir(alucnaje_ptr, i);

     ordenar(alucnaje_ptr, i);

     imprimir(alucnaje_ptr, i);

     printf("\n\n ---FIN DEL PROGRAMA--- \n\n");
  }

 else
  {
     printf("\n\n ---FIN DEL PROGRAMA--- \n\n");
  }
return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


 void imprimir(struct estudiantes * lista_ptr, int cant_de_alumnos)
  {
     int i;
     for(i = 0; i < cant_de_alumnos-1; i++) /*el for va hasta cant_de_alumnos - 1 porque la i que le pasa va adelantada: PREINCREMENTA i*/
      {
         printf("\n %dº) %s [%.2f - %.2f - %.2f]", i+1, (lista_ptr + i) -> nombre,
                                                        (lista_ptr + i) -> notas[0],
                                                        (lista_ptr + i) -> notas[1],
                                                        (lista_ptr + i) -> notas[2]);
      }
     puts("");
  }



 void ordenar(struct estudiantes * lista_ptr, int cant_de_alumnos) /*ordena con el metodo burbuja*/
 {
    int i, j;
    struct estudiantes alumn_aux;

    for(i = 0; i < cant_de_alumnos-1; i++) /*va hasta n-1 porque i viene con un conteo de mas porque se preincrementa cuando pide el nombre*/
    {
       for(j = 0; j < cant_de_alumnos -2 -i; j++)
        {
           if(strcmp(((lista_ptr + j) -> nombre), (lista_ptr + (j+1)) -> nombre ) > 0)/*de manera ascendente*/
            {
               alumn_aux = *(lista_ptr + j);
               *(lista_ptr + j) = *(lista_ptr + (j+1));
               *(lista_ptr + (j+1)) = alumn_aux;
            }
        }
    }
 }
