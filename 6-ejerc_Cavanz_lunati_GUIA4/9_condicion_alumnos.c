/*
 * ============================================================================
 *
 * NOMBRE       : 9_condicion_alumnos.c  ejercicio 4 pagina 3
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : punto 4 de la guia 4
 * FECHA        : 12 7 21
 *
 * ============================================================================
 */



#include<stdio.h>
#include<stdlib.h>


#define TAM_MAX_CADENA 20
#define CANT_NOTAS 5
#define MAX_CANT_ALUMNOS 50




  /*-------Enumeracion para establecer la condicion del alumno-----------------------------*/

 enum status{INDEFINIDA = -1, LIBRE, REGULAR, PRMOCION_PRACTICA, PROMCION_TEORICA, APROBACION_DIRECTA};





 struct alumno              /*declaracion de la estructura para guardar los datos del alumno*/
 {
   char nombre[TAM_MAX_CADENA],
        apellido[TAM_MAX_CADENA];
   unsigned int legajo;
   float notas[CANT_NOTAS];
   enum status condicion;
 };




 /*--------------------------PROTOTIPOS DE FUNCIONES---------------------------------------*/

 void mostrar_menu(unsigned int * opcion_ptr);/*recibe un puntero a un entero sin signo*/
 void cargar_alumno(struct alumno * alucnaje);/*recibe un puntero a datos de tipo estruct alumno*/
 void modificar_datos(struct alumno * alucnaje);
 void consultar_datos(struct alumno * alucnaje);
 void imprimir_todo(struct alumno * alucnaje);
 enum status cargar_condicion(float nota[]);/*recibe un arreglo de floats y devuelve un dato de tipo enum status*/
 int tiene_todas_las_notas(float nota[]);
 void imprimir_condicion(enum status cond);
 void ordenar_por_legajo(struct alumno * alucnaje);







/*--------------------------------FUNCION MAIN--------------------------------------------*/

int main(void){

 unsigned int opcion;/*es un indice para elegir la funcion a llamar*/
 unsigned int *opcion_ptr = &opcion; /*puntero al indice para manejar desde el menu*/
 struct alumno lista_de_alumnos[MAX_CANT_ALUMNOS] = {0}; /*define un arreglo de 50 estructuras alumno y las pone a cero*/
 struct alumno * lista_de_alumnos_ptr = lista_de_alumnos;/*carga el puntero con la direccion del arreglo datos de los alumnos*/
 void (*funcion_menu[4])(struct alumno * alucnaje) = {cargar_alumno, modificar_datos, consultar_datos, imprimir_todo};
                                                     /*un arreglo de punteros a funciones que reciben
                                                     un puntero a un arreglo de estructuras alumno y no devuelven nada */


 int i;
 for(i = 0 ; i < MAX_CANT_ALUMNOS ; i++) /*pone en condicion indefinida todos los campos condicion del arreglo*/
     lista_de_alumnos[i].condicion = INDEFINIDA;

 do
 {

  /* system("clear");*/ /*De la biblioteca <stdlib.h> me limpia la pantalla*/

   mostrar_menu(opcion_ptr); /*me muestra el menu y guarda la opcion elegida en la variable unsigned int opcion*/

   if(opcion > 0 && opcion < 5) /*filtra las opciones no validas*/
      (*funcion_menu[opcion-1])(lista_de_alumnos_ptr); /*llama a la funcion elegida atravez del menu y le pasa el arreglo de estructuras*/
   else if(opcion != 5)
      printf("\n\n INGRESE UNA OPCION VALIDA!\n\n");

   ordenar_por_legajo(lista_de_alumnos_ptr); /* cada vez que muestre el menu, se habran ordenado los alumnos por legajo decreciente*/

 }
 while(opcion != 5); /*sale solo en caso de opcion 5 de salida*/

 printf("\n\n ------------FIN DEL PROGRAMA----------- \n\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


/*------------------------------------------------------------------------------*/




          /*----------------- funcion mstrar menu--------------*/

 void mostrar_menu(unsigned int * opcion_elegida)
 {

  printf("\n\n");
  printf("\n \t Cargar alumnos: ........1");
  printf("\n \t Modificar datos:........2");
  printf("\n \t Consultar notas:........3");
  printf("\n \t Imprimir todo:..........4");
  printf("\n \t Salir del programa:.....5");
  printf("\n \t Ingrese la opcion deseada: ");

  scanf("%u", opcion_elegida);
 }


/*----------------------------------------------------------------------------*/





                   /*------fucnion 1  cargar alumnos----------*/

 void cargar_alumno(struct alumno * alucnaje)
  {

   volatile int i = 0, j; /*creo que si no le ponia volatil me parece que seguia incrementando no se porque, revisar!!!*/
    char flag = '1';

     system("clear");
     printf("\n eligio la opcion 1 para cargar alumno");

     do
      {
         if(((alucnaje + i) -> legajo) == 0)
          {
             printf("\n Ingrese el NOMPRE del %dº alumno: ", i+1);
             scanf(" %[^\n]s", (alucnaje + i) -> nombre);
             printf("\n Ingrese el APELLIDO del %dº alumno: ", i+1);
             scanf(" %[^\n]s", (alucnaje + i) -> apellido);
             printf("\n Ingrese el LEGAJO del %dº alumno: ", i+1);
             scanf("%u", &((alucnaje + i) -> legajo));
             for(j = 0; j < CANT_NOTAS; j++)
              {
                 printf("\n Ingrese la %dº NOTA del %dº alumno: ", j+1, i+1);
                 scanf("%f", (alucnaje + i) -> notas + j);
              }
             (alucnaje + i) -> condicion = cargar_condicion((alucnaje + i) -> notas);
             printf("\n Ingrese 0 para terminar de cargar datos\n Ingrese ENTER para contiuar cargando datos\n");

             flag = getchar();
             flag = getchar();
          }
         i++; /*incrementa el indice para pasar al siguiente alumno*/

      }
     while(flag != '0'); /*condicion para terminar de cargar notas*/
  }



/*----------------------------------------------------------------------------------*/







          /*--------funcion 2 modificar datos------*/




 void modificar_datos(struct alumno * alucnaje)
  {
     int posicion, j;


     printf("\n Ingrese la posicion del alumno a modificar: ");
     scanf("%d", &posicion);
     posicion--; /*porque el arreglo va de 0 a 49 y la posicion va de 1 a 50*/

     printf("\n Ingrese el NOMPRE del %dº alumno: ", posicion);
             scanf(" %[^\n]s", (alucnaje + posicion) -> nombre);
             printf("\n Ingrese el APELLIDO del %dº alumno: ", posicion);
             scanf(" %[^\n]s", (alucnaje + posicion) -> apellido);
             printf("\n Ingrese el LEGAJO del %dº alumno: ", posicion);
             scanf("%u", &((alucnaje + posicion) -> legajo));
             for(j = 0; j < CANT_NOTAS; j++)
              {
                 printf("\n Ingrese la %dº NOTA del %dº alumno: ", j+1, posicion);
                 scanf("%f", (alucnaje + posicion) -> notas + j);
              }
             (alucnaje + posicion) -> condicion = cargar_condicion((alucnaje + posicion) -> notas);
             printf("\n DATOS MODIFICADOS EXITOSAMENTE!\n");
  }


/*-----------------------------------------------------------------------------------------*/








     /*-----------funcion 3 consultar datos de un solo alumno-----------------*/


 void consultar_datos(struct alumno * alucnaje)
  {
     unsigned int consulta_legajo = 0;
     int i, j, flag = 0;
     float suma_notas = 0;


     system("clear");
     printf("\n Ingrese el numero de legajo a consultar: ");
     scanf("%u", &consulta_legajo);

     for(i = 0 ; i < MAX_CANT_ALUMNOS ; i++)
      {
         if((alucnaje + i) -> legajo == consulta_legajo)
         {
             printf("\n%2d) LEGAJO Nº: %u\n", i+1, (alucnaje + i) -> legajo);
             printf("    NOMBRE: %s, %s.\n", (alucnaje +i) -> apellido, (alucnaje + i) -> nombre);
             for(j = 0 ; j < CANT_NOTAS ; j++)
              {
                 printf("    NOTAS: [%.2f]", (alucnaje + i) -> notas[j]);
                 suma_notas += (alucnaje + i) -> notas[j];
              }
             printf("\n    PROMEDIO: %.2f", suma_notas/CANT_NOTAS);
             printf("\n    CONDICION: ");
             imprimir_condicion((alucnaje + i) -> condicion);
             flag = -1;
          }
      }
     if(flag == 0)
        printf("\n No existe un alumno con ese legajo, intente nuevamente.\n");
  }


/*--------------------------------------------------------------------------------------------*/












               /*----------funcion 4 imprimir todos los datos cargados------------------*/


 void imprimir_todo(struct alumno * alucnaje)
  {
     int i = 0, j, flag = 0;
     system("clear");
     printf("\n Los datos cargados son: \n");

         while((alucnaje + i) -> legajo != 0 && i < 50) /*imprime todo lo que no tenga legajo nulo: deberia ordenarlo por legajo!*/
          {
             printf("\n%2d) LEGAJO Nº: %u\n", i+1, (alucnaje + i) -> legajo);
             printf("    NOMBRE: %s, %s.\n", (alucnaje +i) -> apellido, (alucnaje + i) -> nombre);
             for(j = 0 ; j < 5 ; j++)
                printf("    NOTAS: [%.2f]", (alucnaje + i) -> notas[j]);
             printf("\n    CONDICION: ");
             imprimir_condicion((alucnaje + i) -> condicion);
             i++;
             flag = -1;
          }
         if(flag == 0)
            printf("\n Aun no se cargaron alumnos!");
  }



/*---------------------------------------------------------------------------------------------*/







                        /*funcion auxiliar para cargar condicion*/


 enum status cargar_condicion(float note[])
  {
     int i, sumat_notas = 0;

     for(i = 0; i < CANT_NOTAS; i++)
      {
         sumat_notas += note[i];
      }

     if((sumat_notas / i) < 6) /*si el promedio es menor a seis queda libre*/
         return LIBRE;

     if((sumat_notas / i) >= 6 && (sumat_notas / i) < 8)/*si el promedio es entre seis y ocho y tiene todas las notas: regular*/
      {
         if(tiene_todas_las_notas(note))
            return REGULAR;
         else
            return LIBRE; /*tengo que poner si o si este else porque sino puede que no devuelva nada la funcion*/
      }
     else if((sumat_notas / i) >= 6)
      {
         if(tiene_todas_las_notas(note))
            return APROBACION_DIRECTA;
         else
            return LIBRE;
      }
     else
        return LIBRE;
  }


     /*FALTA PARA PROMO PRACTICA y para PROMO TEORICA revisar y corregir*/


/*----------------------------------------------------------------------------------------*/







      /*--------funcion auxiliar para comprobar si tiene todas las notas cargadas-----------*/



 int tiene_todas_las_notas(float note[])/*verifica que haya rendido todos los examenes*/
  {
     int i;
     for(i = 0; i < CANT_NOTAS; i++)
      {
         if(note[i] == 0)/*si hay alguna de las notas que no tiene o sea un cero, devuelve falso y queda libre*/
            return 0;
      }
     return 1;
  }


/*----------------------------------------------------------------------------------------*/










     /*-----------funcion auxiliar para imprimir la condicion que le corresponde-----------------------*/



 void imprimir_condicion(enum status cond)
  {
     switch(cond)
      {
        case 0:
           printf("LIBRE\n");
        break;

        case 1:
           printf("REGULAR\n");
        break;

        case 2:
           printf("PROMOCION PRACTICA\n");
        break;

        case 3:
           printf("PROMOCION TEORICA\n");
        break;

        case 4:
           printf("APROBACION DIRECTA\n");
        break;

        default:
           printf("Condicion indefinida\n");
        break;

      }
  }



/*----------------------------------------------------------------------------------------------*/



/*-------funcion auxiliar que ordena los alumnos por legajo decreciente--------------*/


void ordenar_por_legajo(struct alumno * alucnaje)
 {                                                        /*ordenamiento burbuja*/
    int i, j;
    struct alumno aux_alumno;


    for(i = 0 ; i < MAX_CANT_ALUMNOS ; i++)
    {
       for(j = 0 ; j < MAX_CANT_ALUMNOS - 1 - i ; j++)
       {
          if((alucnaje + j) -> legajo < (alucnaje + (j+1)) -> legajo)
          {
             aux_alumno = *(alucnaje + j);
             *(alucnaje + j) = *(alucnaje + (j + 1));
             *(alucnaje + (j + 1)) = aux_alumno;
          }
       }
    }
 }




