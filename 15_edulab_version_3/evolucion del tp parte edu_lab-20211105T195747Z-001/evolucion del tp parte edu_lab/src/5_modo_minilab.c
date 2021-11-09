/*En modo miniab, el usuario tendrá un laboratorio*/


#include <stdio.h>
#include <stdio_ext.h> /*para la funcion __fpurge*/
#include <stdlib.h>
#include "edulab.h"

void modo_minilab(ptr_user_data new_user){


   system("clear");


   printf("\n ###########################################################");
   printf("\n #                  MODO MINI-LAB       (EMA)              #");
   printf("\n #                                                         #");
   printf("\n #                                                         #");
   printf("\n #           ELIJA UNA OPCION PARA CONTINUAR               #");
   printf("\n #                                                         #");
   printf("\n ###########################################################");



    printf("\n\n Presione enter para continuar");
    __fpurge(stdin);
    getchar();

}
