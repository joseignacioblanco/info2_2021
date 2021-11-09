/* operacion y mabntenimiento de una lista enlazada */

#include <stdio.h>
#include <stdlib.h>


/*-----------------------estructura auto_referenciada----------------------------*/

struct nodoLista{
   char dato; /*cada nodoLista contiene un caracter*/
   struct nodoLista *ptrSiguiente; /*puntero al siguiente nodo*/
};


typedef struct nodoLista NodoLista; /*sinonimo para la estruct nodoLista*/
typedef NodoLista *ptrNodoLista; /*sinonimo para un puntero a NodoLista*/


/*--------------------prototipos de funciones------------------------------------*/

void insertar (ptrNodoLista *ptrS, char valor);
char eliminar (ptrNodoLista *ptrS, char valor);
int estaVacia (ptrNodoLista ptrS);
void imprimeLista (ptrNodoLista ptrActual);
void instrucciones (void);



int main(void)
{
   ptrNodoLista ptrInicial = NULL; /*inicialmente no hay nodos*/
   int eleccion; /*eleccion del menu del usuario*/
   char elemento; /*caracter que introduce el usuario*/


   instrucciones(); /*despliega el menú de opciones*/
   printf("? ");
   scanf("%d", &eleccion);



   /*repite mientras el usuario no elija la opcion 3*/

   while(eleccion != 3){

      switch(eleccion){

         case 1:
            printf("Introduzca un caracter: ");
            scanf("\n%c", &elemento);
            insertar(&ptrInicial, elemento); /*inserta el elemento en la lista*/

            imprimeLista(ptrInicial);
            break;

         case 2:
            /*si la lista no esta vacia*/
            if(!estaVacia(ptrInicial)){
               printf("Introduzca un caracter para eliminar: ");
               scanf("\n%c", &elemento);
               
               /*si encuentra el caracter, lo remueve*/ 
               if(eliminar(&ptrInicial, elemento)){
                  /*elimina elemento*/
                  printf("caracter %c eliminado.\n", elemento);
                  imprimeLista(ptrInicial);
               }
               else{
                  printf("no se encuentra el caracter %c. \n\n", elemento);
               }
            }
            else{
               printf("La lista esta vacia. \n\n");
            }
            
            break;
            
        default:
           printf("Operacion invalida. \n\n");
           instrucciones();
           break;
      } /*fin del switch*/
      
      printf("? ");
      scanf("%d", &eleccion);
      
   } /*fin del while*/

   printf("Fin de la ejecucion. \n");
   return 0;
}/*fin del main*/


/*---------------------------------implementacion de instrucciones---------------------------------*/
/*despliega las instrucciones del programa para el usuario*/
void instrucciones(void)
{
   printf("Introduzca su eleccion:\n"
      "   1 para insertar un elemento en la lista.\n"
      "   2 para eliminar un elemento de la lista.\n"
      "   3 para terminar.\n");
}/*fin de la funcion instrucciones*/



/*--------------------------implementacion de insertar-----------------------------*/
/*inserta un nuevo valor dentro de la lista y lo hace en orden*/
void insertar(ptrNodoLista *ptrS, char valor)
{
   ptrNodoLista ptrNuevo;      /*apuntador a un nuevo nodo*/
   ptrNodoLista ptrAnterior;   /*apuntador a un nodo previo de la lista*/
   ptrNodoLista ptrActual;     /*apuntador al nodo actual de la lista*/
   
   ptrNuevo = malloc(sizeof(NodoLista)); /*reserva memoria para un nuevo nodo*/
   
   if(ptrNuevo != NULL ){ /*en caso que si hay espacio disponible*/
      ptrNuevo -> dato = valor; /*coloca le valor en el nodo*/
      ptrNuevo -> ptrSiguiente = NULL; /*el nodo no se liga a otro nodo*/
      
      ptrAnterior = NULL;
      ptrActual = *ptrS;
      
      /*while para localizar la ubicacion correcta en la lista*/
      while(ptrActual != NULL && valor > ptrActual -> dato){
         ptrAnterior = ptrActual;                   /*entra al siguiente nodo*/
         ptrActual = ptrActual -> ptrSiguiente;
      }/*fin del while*/
      
      /*inserta un nuevo nodo al principio de la lista*/
      if(ptrAnterior == NULL){
         ptrNuevo -> ptrSiguiente = *ptrS;
         *ptrS = ptrNuevo;
      }/*fin del if*/
      
      else{ /*inserta un nueo nodo en tre ptrAnterior y ptrActual*/
         ptrAnterior -> ptrSiguiente = ptrNuevo;
         ptrNuevo -> ptrSiguiente = ptrActual;
      }/*fin del else*/
      
   }/*fin del if*/
   
   else{
      printf("No se inserto %c. No hay memoria disponible.\n", valor);
   }/*.fin del else*/
}/*fin del la funcion insertar*/




/*-------------------------implementacion de eliminar-------------------------------*/

/*elimina un elemento de la lista*/

char eliminar(ptrNodoLista *ptrS, char valor)
{
   ptrNodoLista ptrAnterior; /*apuntador a un nodo preio de la lista*/
   ptrNodoLista ptrActual;   /*apuntador al nodo actual de la lista*/
   ptrNodoLista tempPtr;     /*apuntador a un nodo temporal*/
   
   /*elimina el primer nodo*/
   if(valor == (*ptrS) -> dato){
      tempPtr = *ptrS; /*almacena el nodo a eliminar*/
      *ptrS = (*ptrS) -> ptrSiguiente; /*desata el nodo*/
      free(tempPtr);/*libera el nodo desatado*/
      return valor;
   } /*fin del if*/
   
   else{
      ptrAnterior = *ptrS;
      ptrActual = (*ptrS) -> ptrSiguiente;
      
      /*ciclo para localizar la ubicacion correcta en la lista*/
      while(ptrActual != NULL && ptrActual -> dato != valor){
         ptrAnterior = ptrActual;                  /*entra al siguiente nodo*/
         ptrActual = ptrActual -> ptrSiguiente;
      } /*fin del wile*/
      
      /*elimina el nodo de ptrActual*/
      if(ptrActual != NULL){
         tempPtr = ptrActual;
         ptrAnterior -> ptrSiguiente = ptrActual -> ptrSiguiente;
         free(tempPtr);
         return valor;
      }/*fin del if*/
   }/*fin del else*/
   return'\0';

}/*fin de la funcion eliminar*/






/*---------------implementacion de estaVacia------------------------*/
/*devuelve 1 si la lista esta vacia, de lo contrario devuelve 0*/
int estaVacia(ptrNodoLista ptrS)
{
   return ptrS == NULL;
}  /*fin de la funcion estaVacia*/





/*-------------------implementacion de imprimeLista------------------------*/
/*imprime la lista con todos sus elementos recorriendolos uno a uno*/

void imprimeLista(ptrNodoLista ptrActual)
{
   /*si la lista esta vacia*/
   if(ptrActual == NULL){
      printf("La lista esta vacia.\n\n");
   } /*fin del if*/
   
   else{
      printf("La lista es:\n");
      
      /*mientras no sea el final de la lista*/
      while(ptrActual != NULL){
         printf("%c -->", ptrActual -> dato);
         ptrActual = ptrActual -> ptrSiguiente;
      }/*fin del whie*/
      
      printf("NULL\n\n");
   }/*fin del else*/
} /*fin del la funcion imprimir lista*/




