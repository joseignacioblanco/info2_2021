/*este ejemplo crea un archivo de texto plano de acceso secuencial*/

#include <stdio.h>

#define TAM 15


int main(void){

   int cuenta;
   char nombre[TAM];
   double saldo;

   FILE *ptr_archivo; /*puntero a la estructura de tipo FILE*/

   if((ptr_archivo = fopen("deudores.txt", "w")) == NULL)
   {
      printf("No se puede abrir el archivo\n");
   }
   else
   {
      printf(" Ingresar cuenta, nombre y saldo. \n Al finalizar ingresar ctrl+d.\n ?-->");
      scanf("%d%s%lf",&cuenta, nombre, &saldo);

      while(!feof(stdin))
      {
         fprintf(ptr_archivo,"%d %s %.2f\n\n", cuenta, nombre, saldo);
         printf("?-->");
         scanf("%d%s%lf", &cuenta, nombre, &saldo);
      }
   fclose(ptr_archivo);
   }

   return 0;
}
