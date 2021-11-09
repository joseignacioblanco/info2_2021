/* recordar que hay que construir compilando contra la biblioteca matematica con -lm al final
 * si lo pongo antes del sqrt.c parece que se enoja, por lo menos en std=c90 asi que la forma
 * correcta de construirlo es: $ gcc -Wall -Werror -std=c90 sqrt.c -lm y asi anda joya*/

#include<stdio.h>
#include<math.h>

int main(void){

 /* double x = 2.;*/   /* (.)algo como que indica que el dos es flotante */

  printf("\n La raiz cuadrada de 2 es: %g\n", sqrt(2.));  /* el %g se refiere a double pero le pone un decimal menos creo */

return 0;
}
