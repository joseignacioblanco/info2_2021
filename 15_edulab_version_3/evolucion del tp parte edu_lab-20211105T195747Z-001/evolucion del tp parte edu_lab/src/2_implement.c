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
#include <stdio_ext.h> /*para que no joda el __fpurge(stdin)*/
#include <stdlib.h> /* para el rand y los clear, etc */
#include "edulab.h" /*para conocer los prototipos de funciones bienvenida, etc*/





         /*+++++++++++++++++++ FUNCION DE BIENVENIDA ++++++++++++++++++++++++*/


 void bienvenida(void){

    printf("\n ###########################################################");
    printf("\n #                                                         #");
    printf("\n #                Bienvenido a EDU-LAB                     #");
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

      void preguntero (char leccion, user_data *new_user){

         int num_preg = 0;
         int i = 0;
         int aciertos = 0;
         char respuestas_1[10];
         char answers_1[10];
         char salir = '0';
         FILE * answ_ptr;

         system("clear");
         
         if((answ_ptr = fopen("./conf/answers_1.txt","r")) == NULL)
         {
            printf("\n ERROR AL ABRIR EL ARCHIVO DE RESPUESTAS 1");
         }
         else
         {
            for(i = 0 ; i < 10 ; i++)
            {
               fscanf(answ_ptr, "%c", answers_1 + i);
            }
            switch(leccion)
            { /*selecciona el tema a evaluar*/
               case LECCION_1:

                  do
                  {

                     switch(num_preg) /*va seleccionando cada pregunta del tema 1*/
                     {
                        case 0:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 10 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 1:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 20 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 2:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 30 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 3:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 40 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 4:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 50 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 5:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 60 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 6:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 70 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 7:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 80 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 8:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 90 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           printf("\n");
                        break;

                        case 9:
                           printf("\n");
                           system("cat ./conf/preguntero1.txt | head -n 100 | tail -n 10");
                           __fpurge(stdin);
                           /*respuestas_1[num_preg] = salir = getchar();
                           respuestas_1[num_preg] == answers_1[num_preg] ? correcta(&aciertos) : falsa(&fallas) ;*/
                           (respuestas_1[num_preg] = salir = getchar()) == answers_1[num_preg] ? correcta(&aciertos, new_user) : falsa(new_user);
                           conclusion(new_user, aciertos, leccion);
                           printf("\n\n ENTER PARA CONTINUAR...");
                           __fpurge(stdin);
                           getchar();
                           
                        break;

                     }/*fin del switch, no puedo hacerlo con un for porque no me anda el head en el system como variable*/
                     num_preg++;
                     if(num_preg == 10)
                        salir = 's';

                  }
                  while(salir != 's');
               break;


               case LECCION_2:
               break;


               case LECCION_3:
               break;

               case LECCION_4:
               break;
            }/*fin del swith*/
         }/*fin del else*/
      fclose(answ_ptr);
      }




      /*---------------FIN DE LA FUNCION PREGUNTERO----------------------------*/





      /*-----------respuestas correctas o falsas--------------*/
      
      void correcta(int * const good, user_data * new_user) /*va devolver 1 de 5 respuestas de felicitaciones aleatoriamente*/
      {
         srand(time(NULL));/*planta la semilla del rand aleatorio*/
         
         system("clear");
         
         (*good)++; /*claro porque si no incremento el contenido se va el puntero (deberia ser puntero constante a dato no const)*/
         
         parpadio(GREEN);
         
         switch(rand()%5)
         {
            case 0:
               printf(" POLEEEEENTA [%2d de 10]\n", *good);
            break;
            
            case 1:
               printf(" Jamón, %s [%2d de 10]\n", new_user -> user_name, *good);
            break;
            
            case 2:
               printf(" Ahí ta, ve? [%2d de 10]\n", *good);
            break;
            
            case 3:
               printf(" SI %s, vamo todavia [%2d de 10]\n", new_user -> user_name, *good);
            break;
            
            case 4:
               printf(" %s, %s, RA RA RAAAA... [%2d de 10]\n", new_user -> user_name, new_user -> user_name, *good);
            break;
         }

      }




      void falsa(user_data * new_user)
      {
         srand(time(NULL));/*planta la semilla del rand aleatorio*/
         
         system("clear");
         
         parpadio(RED);

         switch(rand()%5)
         {
            case 0:
               printf(" ponele mas voluntad cullA\n\n");
            break;
            
            case 1:
               printf(" Que inutil, %s\n\n", new_user -> user_name);
            break;
            
            case 2:
               printf(" Dejaaaaaaaa...\n\n");
            break;
            
            case 3:
               printf(" NOOOO %s, piteeeee\n\n", new_user -> user_name);
            break;
            
            case 4:
               printf(" Vee VOOOOOOO\n\n");
            break;
         }

      }



      /*----------------fin de resp correctas o falsas----------------*/





      /*--------------FUNCION CONCLUSION---------------*/

       void conclusion (const user_data * const new_user, int calificacion, char modulo)
       {
          FILE * score_ptr;
          
          if((score_ptr = fopen("creditos.txt", "a")) == NULL)
          {
             printf("\nERROR AL ABRIR EL ARCHIVO creditos.txt\n");
          }
          else
          {
             if (calificacion >= 6)
             {
                printf(" FELICITACIONES %s!!! Aprobaste el módulo %c con calificacion: %.2f puntos", new_user -> user_name, modulo, calificacion*10.0);
                
                fprintf(score_ptr, " %ld \t%s \t%.2f", new_user -> data_time, new_user -> user_name, calificacion * 10.0);
             }
             else
             {
                printf(" Todo mal %s cote tenes un %.2f puntos en el modulo %c anda a repasar el apunte bolo", new_user -> user_name, calificacion*10.0, modulo);
                
                fprintf(score_ptr, " %ld \t%s \t%.2f", new_user -> data_time, new_user -> user_name, calificacion * 10.0);
             }
          }
       }


      /*---------------FIN DE LA FUNCION CONCLUSION---------------------*/
/*void parpadio(const char color){} borrar cuando implemente en 6_interfase*/




/* void modo_edulab(user_data * new_user){} */ /* implementacion que pasa al archivo 3_modo_edulab.c */


/* void modo_test(user_data * new_user){} */ /* implementacion que pasa al archivo 4_modo_test.c */


/* void modo_minilab(user_data * new_user){} */ /* implementacion que pasa al archivo 5_modo_minilab.c */
