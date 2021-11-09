/*
 * ============================================================================
 *
 * NOMBRE       : edulab.c
 * AUTOR        : grupo 7
 * Version      : 1.0
 * Descripción  : archivo de impementacion de la biblioteca edulab
 * FECHA        : 30 8 2021
 *
 * ============================================================================
 */

#include <stdio.h> /*para los printf, scanf, etc*/
#include <stdlib.h>
#include "edulab.h" /*para conocer los prototipos de funciones bienvenida, etc*/



         /*+++++++++++++++++++ FUNCION DE BIENVENIDA ++++++++++++++++++++++++*/


 void bienvenida(void){

    printf("\n ###########################################################");
    printf("\n #                                                         #");
    printf("\n #                        EDU-LAB                          #");
    printf("\n #    Mini laboratorio para las tecnicas digitales         #");
    printf("\n #                                                         #");
    printf("\n #    Trabajo Practico Informatica II - Version 01         #");
    printf("\n #                                                         #");
    printf("\n ###########################################################");

  }


      /*---------------- FIN DE LA FUNCION DE BIENVENIDA -------------------*/






         /*+++++++++++++++++++ FUNCION DE DESPEDIDA ++++++++++++++++++++++++*/


 void despedida(void){

    printf("\n\n   #####################################################################    ");
    printf("\n   #                                                                   #      ");
    printf("\n   #  * * * *   *     *       *           *           *       *     *  #      ");
    printf("\n   #  *         *     *      * *         * *         * *      *     *  #      ");
    printf("\n   #  *         * * * *     *   *       *   *       *   *     *     *  #      ");
    printf("\n   #  *         *     *    * * * *     * * * *     * * * *    *     *  #      ");
    printf("\n   #  * * * *   *     *   *       *   *       *   *       *   * * * *  #      ");
    printf("\n   #                                                                   #      ");
    printf("\n   #####################################################################\n\n\n");

  }


      /*---------------- FIN DE LA FUNCION DE DESPEDIDA -------------------*/
      
      
      
      
      
      /*--------------FUNCION INSTRUCCIONES---------------*/
      
           void instrucciones(char leccion)
      {
      system("clear");
      printf("\n\n * AHORA ESTUDIA LA LECCION #%c.", leccion);
      printf("\n\n * UNA VEZ LEIDO, CERRA LA VENTANA DEL APUNTE.");
      printf("\n\n * Y LUEGO, CUANDO ESTES LISTO PARA CONTINUAR, PRESIONA ENTER... ");
      getchar();
      }  
      
            
      /*---------------FIN DE LA FUNCION INSTRUCCIONES----------------------------*/
      
            
      
      
      /*--------------FUNCION PREGUNTERO---------------*/
      
      void preguntero (char leccion){}
      
      
      
      
      
      
      
      /*---------------FIN DE LA FUNCION PREGUNTERO----------------------------*/
      
      void conclusion (char leccion){}
      
      
      
      
      
      
      /*--------------FUNCION CONCLUSION---------------*/
      
      
      
      
      
      
      
      
      
      /*---------------FIN DE LA FUNCION CONCLUSION---------------------*/
      
      
      
      
      
      
      
      
      
      
      
      
      
      

/* void modo_edulab(user_data * new_user){} */ /* implementacion que pasa al archivo 3_modo_edulab.c */






/* void modo_test(user_data * new_user){} */ /* implementacion que pasa al archivo 4_modo_test.c */






/* void modo_minilab(user_data * new_user){} */ /* implementacion que pasa al archivo 5_modo_minilab.c */
