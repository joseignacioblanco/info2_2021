/*  

Imprime un numero en binario del derecho y del revez bajado de la pagina
http://eenube.com/index.php/ldp/c/96-mostrar-un-numero-entero-en-binario-en-c
tiene algunos errores como por ejemplo que el corrimiento deberia ir hasta 31 y no
hasta 32 como va por el 8*4 de la linea 20.

*/




#include<stdio.h>
#define CHAR_BITS 8


void 
print_binint_invertido(int num)
{
    int sup = CHAR_BITS*sizeof(int);
    int i = 0;
    while(sup > i)
    {
        if(num & (((long int)1) << i))
            printf("1");
        else
            printf("0");
        i++;
    }
    printf("\n");
}





void 
print_binint(int num)
{
    int sup = CHAR_BITS*sizeof(int);
    while(sup >= 0)
    {
        if(num & (((long int)1) << sup))
            printf("1");
        else
            printf("0");
        sup--;
    }
    printf("\n");
}


int main()
{
    int num;
    printf("introduzca un numero entero:");
    scanf("%d", &num);
    printf("Número binario\n");
    print_binint(num);
    print_binint_invertido(num);
    return 0;
}
