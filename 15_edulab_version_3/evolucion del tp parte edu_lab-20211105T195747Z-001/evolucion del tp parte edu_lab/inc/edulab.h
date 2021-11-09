/*
 * ============================================================================
 *
 * NOMBRE       : edulab.h
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : archivo cabecera de la biblioteca edulab
 * FECHA        : 30 08 21
 *
 * ============================================================================
 */




#include <time.h> /* Me ayuda con la estructura time_t*/


#define TAM_NAME 15
#define MODO_EDULAB '1'
#define MODO_TEST '2'
#define MODO_MINILAB '3'
#define SALIR_DEL_PROGRAMA '4'
#define RED 'r'
#define GREEN 'g'
#define BAUDRATE 9600





        /*++++++++++++++++++ DECLARACION DE VARIABLES Y STRUCTS +++++++++++++++*/



                    /*Estructura para guardar datos del usuario*/
struct usuario {
   time_t data_time;                /*Estructura definida en time.h: guarda la fecha*/
   char user_name[TAM_NAME];        /*Un arreglo de char para guardar el user name*/
   union{                           /*Una union de */
      unsigned char puerto_completo;/*Un byte entero para manejar todo el puerto*/
      struct{
         unsigned char in_0 : 1;    /*bit a bit para manipular el puerto*/
         unsigned char in_1 : 1;
         unsigned char in_2 : 1;
         unsigned char in_3 : 1;
         unsigned char out_0: 1;
         unsigned char out_1: 1;
         unsigned char padin: 2;    /*Rellena los espacios vacios para alinear datos: padding*/
       };
    }in_out;
};

typedef struct usuario user_data; /*alias a la estructura usuario*/
typedef user_data * ptr_user_data; /*alias de un puntero a la estruct usuario*/


      /*------------------ FIN DE LAS DECLARACIONES DE VARABLES Y STRUCTS ------------------*/




         /*++++++++++++++++ PROTOTIPADO DE FUNCIONES +++++++++++++++++++++++++++*/

void bienvenida(void);
void despedida(void);
void modo_edulab(ptr_user_data new_user);
void modo_test(user_data * new_user);
void modo_minilab(user_data * new_user);
void instrucciones(char);
void preguntero(char, user_data * new_user);
void conclusion(const user_data * const new_user, int calif, char lecc);
void correcta(int * const good, user_data * new_user); /*puntero constante a dato no constante*/
void falsa(user_data * new_user);
void parpadio (const char color);

        /*------------- FIN DEL PROTOTIPADO DE FUNCIONES -----------------------*/




        /*-----------------ENUMERACIONES UTILES-------------------------*/

enum lexion {LECCION_1 = '1', LECCION_2, LECCION_3, LECCION_4};


         /*----------FIN DE LAS ENUMERACIONES-------------------*/
