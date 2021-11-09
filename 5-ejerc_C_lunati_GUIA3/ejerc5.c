/*  MATRICES: *//*printf(" LA minima temperatura de la semana es: %.2f : \n\n", min_sem(&temp_medic[0][0]));*/




#include <stdio.h>
#include <stdlib.h> /* Esta biblioteca es para poder usar el rand */
#include <time.h>  /* Esta biblioteca me ayuda con time(NULL) */
#include <ctype.h> /* Esta me ayuda con la fucnion system(clear)*/
#include <string.h> /*para usar strlen()*/

#define DIAS 7
#define HORAS 24
#define LONG 10

/*enum days {domingo, lunes, martes, miercoles, jueves, viernes, sabado};*/   /*no me sirvio la enumeracion*/

 void imprimir_temp(void); /*prototipo de mostrar los valores cargados en la matriz*/
 float max_sem(float * temperatures); /*prototipo de la funcion de maxima semanal*/
 float min_sem(float * temperatures); /*minima semanal*/
 void max_dia(float * temperatures, char * dias); /*maxima dia*/
 void min_dia(float * temperatures, char * dias); /*minima dia*/
 float med_sem(float * temperatures); /*temperatura media de la semana*/
 void med_dia(float * temperatures, char * dias); /*minima dia*/
 void ifmed_dia(float *temperatures, char * dias); /*cantidad de dias con promedio mayor a 30 grados*/

 int main(void){

 float temp_medic[DIAS][HORAS] = {0};
 char dias[DIAS][LONG] = {{"Domingo\0"}, {"Lunes\0"}, {"Martes\0"}, {"Miercoles\0"}, {"Jueves\0"}, {"Viernes\0"}, {"Sabado\0"}};
 unsigned i, j;


    srand(time(NULL)); /* Es la semilla para la funcion rand. si no le pongo una semilla variable, me da siempre el mismo resultado*/


    for(i = 0; i < DIAS; i++){                 /*este for carga temperaturas aleatorias*/
       for(j = 0; j < HORAS; j++)
          temp_medic[i][j] = (rand()%57)-11; /*para que las temperaturas vayan de -11 a 45 porque va de 0 a 56 y resta 11*/
     }


   void imprimir_temp(void){
    for(i = 0; i < DIAS; i++){                 /*este for presenta en tabla las temperaturas*/
       for(j = 0; j < HORAS; j++)
          printf("(%.1f) ", temp_medic[i][j]);
       puts("");
     }
    }

   imprimir_temp();

   printf("\n ¿Desea ingresar valores manualmente si / no? ");

   char centinella[2];
   unsigned dia, hora = 0;

   scanf(" %s",centinella); /*expresion regular para que entren solo letras e ignore los numeros*/

   while(centinella[0] == 's'){

      do{
         printf("\n Elija el dia a cargar (domingo = 1, lunes = 2, etc...): ");
         scanf("%u",&dia);
        } while(dia <= 0 || dia > DIAS);


      do{
         printf("\n Elija la hora a cargar (desde las 0 a las 23hs.): ");
         scanf("%u",&hora);
        } while(hora < 0 || hora > 23);

      printf("\n Ingrese el valor de temperatura para dia %s y hora %u: ", dias[dia-1], hora);
      scanf(" %f", &temp_medic[dia-1][hora]);

      printf("\n¿Dese cargar otro valor mas? (si / no) ");
      scanf(" %[^\n]s", centinella);
   }

   system("clear");
   printf("\n");
   imprimir_temp();

   printf("\n\n RESULTADOS: \n\n");

   printf(" La MAXIMA temperatura de la semana es: %.2f  \n\n", max_sem(&temp_medic[0][0]));
   printf(" La minima temperatura de la semana es: %.2f \n\n", min_sem(&temp_medic[0][0]));
   printf(" MAXIMAS:");
   max_dia(&temp_medic[0][0], &dias[0][0]);
   printf("\n\n MINIMAS:");
   min_dia(&temp_medic[0][0], &dias[0][0]);
   printf("\n\n La temperatura media de la semana es: %.2f\n", med_sem(&temp_medic[0][0]));
   med_dia(&temp_medic[0][0], &dias[0][0]);
   printf("\n\n Dias en los que la temperatura media fue superior a los 30 grados: ");
   ifmed_dia(&temp_medic[0][0], &dias[0][0]);



 return 0;
}



           /*funcion que calcula la maxima temperatura semanal*/

   float max_sem(float *temperatures){

      float supremo_semanal = *temperatures;
      unsigned day, hour;

      for(day = 0; day < DIAS ; day++){
         for(hour = 0; hour < HORAS; hour++ ){
             if(supremo_semanal < *(temperatures + day*HORAS + hour))
                supremo_semanal = *(temperatures + day*HORAS + hour);
         }
       }
   return supremo_semanal;
  }


        /*funcion que calcula la minima temperatura semanal*/

   float min_sem(float *temperatures){

      float infimo_semanal = *temperatures;
      unsigned day, hour;

      for(day = 0; day < DIAS ; day++){
         for(hour = 0; hour < HORAS; hour++ ){
             if(infimo_semanal > *(temperatures + day*HORAS + hour))
                infimo_semanal = *(temperatures + day*HORAS + hour);
         }
       }
   return infimo_semanal;
  }



     /* funcion que calcula la maxima temperatura por dia*/

     void max_dia(float *temperatures, char * dias){

      float supremo_diario[DIAS] = {0};
      unsigned day, hour;

      for(day = 0; day < DIAS ; day++){
         for(hour = 0; hour < HORAS; hour++ ){
             if(supremo_diario[day] < *(temperatures + day*HORAS + hour))
                supremo_diario[day] = *(temperatures + day*HORAS + hour);
         }
       printf("\n Maxima del %s: %.2f", dias + day*LONG, supremo_diario[day]);

       }

  }





          /*funcion que calcula la minima temperatura por dia*/


      void min_dia(float *temperatures, char * dias){

      float infimo_diario[DIAS] = {0};
      unsigned day, hour;

      for(day = 0; day < DIAS ; day++){
         for(hour = 0; hour < HORAS; hour++ ){
             if(infimo_diario[day] > *(temperatures + day*HORAS + hour))
                infimo_diario[day] = *(temperatures + day*HORAS + hour);
         }
       printf("\n Minima del %s: %.2f", dias + day*LONG, infimo_diario[day]);

       }

  }

            /*funcion que calcula la temperatura media de la semana */

      float med_sem(float * temperatures){

       float media_semanal = 0;
       unsigned day, hour;

      for(day = 0; day < DIAS ; day++){
         for(hour = 0; hour < HORAS; hour++ )
            media_semanal += *(temperatures + day*HORAS + hour);
       }
      media_semanal /= DIAS*HORAS;

       return media_semanal;
      }


      /*funcion que calcula la temperatura media por dia*/


      void med_dia(float *temperatures, char * dias){

      float media_diaria[DIAS] = {0};
      unsigned day, hour;

      for(day = 0; day < DIAS ; day++){
         for(hour = 0; hour < HORAS; hour++ ){
             media_diaria[day] += *(temperatures + day*HORAS + hour );
         }
       media_diaria[day] /= HORAS;
       printf("\n Temperatura media del %s: %.2f", dias + day*LONG, media_diaria[day]);

       }

  }




      /*funcion que calcula los dias que la temperatura media fue superior a los 30 grados*/


      void ifmed_dia(float *temperatures, char * dias){

      float media_diaria[DIAS] = {0};
      unsigned day, hour, acumulador = 0;

      for(day = 0; day < DIAS ; day++){
         for(hour = 0; hour < HORAS; hour++ ){
             media_diaria[day] += *(temperatures + day*HORAS + hour );
         }
       media_diaria[day] /= HORAS;
       if(media_diaria[day] > 30.00){
          printf("\n Temperatura media del %s: %.2f", dias + day*LONG, media_diaria[day]);
          acumulador ++;
        }
       }

     printf("\n La cantidad de dias son %u \n", acumulador);
  }

