

   /*funcion que carga nombres en una matriz y los ordena alfabeticmente */


 #include <stdio.h>
 #include <stdlib.h>

 #define TAM 10


 int main(void){
 char nombres[][TAM] = {{"jose"}, {"pablo"}, {"mateo"}, {"damian"}};
 char *names[] = {"jose", "pablo", "mateo", "damian"};
 int i;

 for(i=0;i<4;i++)
 printf("%s\n", nombres[i]);

 for(i=0;i<4;i++)
 printf("%s\n", names[i]);

 printf("tamanio de matriz %lu \n", sizeof(nombres));
 printf("tamanio de arreglos * %lu \n", sizeof(names));


 for(i=0; i<4; i++){
    printf("\n Ingrese el nombre %u: ",i);
    scanf(" %[^\n]s", nombres[i]);
  }

 for(i=0; i<4; i++){
    printf("\n Ingrese el name %u: ",i);
    scanf(" %[^\n]s", *names + i*4);
  }

 for(i=0;i<4;i++)
 printf("%s\n", nombres[i]);

 for(i=0;i<4;i++)
 printf("%s\n", names[i]);


 printf("tamanio de matriz %lu \n", sizeof(nombres));
 printf("tamanio de arreglos * %lu \n", sizeof(names));


 return EXIT_SUCCESS; /*<stdlib.h>*/
 }
