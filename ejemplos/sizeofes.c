/*en este ejemplo hago sizeof de los tipos de datos y algunas estructuras para 
ver que da*/


#include <stdio.h>

int main(void){

//void a = 3; al parecer void no es un tipo de dato.-
int b = 4;


printf("\n\n -El tamaño de un entero es de %u bytes.-\n",sizeof (b));
printf("\n -El tamaño de un char es de %u bytes.-\n",sizeof (char));
printf("\n -El tamaño de un float es de %u bytes.-\n",sizeof (float));
printf("\n -El tamaño de un double es de %u bytes.-\n",sizeof (double));
/*printf("\n -El tamaño de un bool es de %u bytes.-\n",sizeof (bool));  no existe en este estandar por lo menos,.*/
printf("\n -El tamaño de un void es de %u bytes.-\n",sizeof (void));
printf("\n -El tamaño de un long int es de %u bytes.-\n",sizeof (long int));


return 0;
}
