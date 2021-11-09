#!/bin/bash

#Escriba un segundo script de Shell que realice las siguientes acciones:
#Cree la carpeta nombre_de_proyecto/bin si no existe previamente
#Compile el código main.c y guarde en el directorio bin el ejecutable utilizando el comando gcc 
#(para ayuda puede consultar: https://iie.fing.edu.uy/~vagonbar/gcc-make/gcc.htm)



#-----------------------------------------------------------------------------------


NOMBRE_SCRIPT=$0

NOMBRE_DIRECTORIO=$1

NOMBRE_DE_ARCHIVO=$2

TERCER_PARAMETRO=$3

CANT_PARAMETROS=$#

TODOS_JUNTOS=$*

TODOS_SEPARADOS=$@


mkdir $NOMBRE_DIRECTORIO
cd $NOMBRE_DIRECTORIO
mkdir scr
touch scr/main.c

echo "#include<stdio.h>
   int main(void){

      printf(\"HOLA MUNDO!!!\");
      puts(\"\");

   return 0;
   }" > scr/main.c

mkdir bin

gcc -Wall -Werror -std=c90 scr/main.c -o bin/a.out
cd bin
./a.out
