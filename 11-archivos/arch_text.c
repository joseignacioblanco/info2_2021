#include <stdio.h>

int main(void){

     FILE *ptr_arch; /*que apunta a una estructura de tipo file*/
    char caracter;

    ptr_arch = fopen("archivo1.txt", "r");


    if(ptr_arch == NULL)
    {
       printf("\n El archivo no se puede abrir\n");
    }
    else
    {
       printf("\n Archivo abierto.\n");

       while(!feof(ptr_arch))
       {
          caracter = fgetc(ptr_arch);
          if(ptr_arch != NULL)
             printf("%c", caracter);
       }
   puts("");
       fclose(ptr_arch);
    }

return 0;
}
