/*
 * ============================================================================
 *
 * NOMBRE       : 6_and_or_xor.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : Recibe un entero y devuelve las operaciones a niver de bits
 *                de dos numeros y los muestra en decimal y en exadecimal.
 * FECHA        : 22 06 2021
 *
 * ============================================================================
 */


/*

Escribir un programa que realice las operaciones AND, OR y OR exclusiva a nivel de bits
entre dos valores numericos de 8 bits cargados desde la lınea de comandos. Los valores de
entrada se expresan en notacion decimal y el resultado en notacion decimal y hexadecimal.

*/




#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


unsigned char and(char **);
unsigned char or(char **);
unsigned char xor(char **);


int main(int argc, char * argv[]){

  if(argc != 3)
     printf("\n USO: %s <entero 1> <entero 2>", argv[0]);
  else
  {
     printf("\n \t numero1= %s = 0x%X \n \t numero2= %s = 0x%X \n",argv[1], atoi(argv[1]), argv[2], atoi(argv[2]));
     printf("\n AND \t OR \t XOR \n");
     printf(" %u \t %u \t %u \n",and(argv) ,or(argv) ,xor(argv));
     printf(" 0x%X \t 0x%X \t 0x%X",and(argv) ,or(argv) ,xor(argv));

     printf("\n\n-------------------------------------------------------\n");

     printf("\n %s & %s = %u", argv[1], argv[2], and(argv));
     printf("\n 0x%X & 0x%X = 0x%X\n", atoi(argv[1]), atoi(argv[2]), and(argv));

     printf("\n %s | %s = %u", argv[1], argv[2], or(argv));
     printf("\n 0x%X | 0x%X = 0x%X\n", atoi(argv[1]), atoi(argv[2]), or(argv));


     printf("\n %s ^ %s = %u", argv[1], argv[2], xor(argv));
     printf("\n 0x%X ^ 0x%X = 0x%X\n", atoi(argv[1]), atoi(argv[2]), xor(argv));


  }

  printf("\n");

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}


unsigned char and(char * * argv){

 unsigned char uc;
 uc = (atoi(argv[1]) & atoi(argv[2]));

return uc;
}


unsigned char or(char * * argv){

 unsigned char uc;
 uc = (atoi(argv[1]) | atoi(argv[2]));

return uc;
}


unsigned char xor(char * * argv){

 unsigned char uc;
 uc = (atoi(argv[1]) ^ atoi(argv[2]));

return uc;
}
