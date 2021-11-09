#!/bin/bash

# Escribe un script de Shell que realice las siguientes tareas:
# Cree un directorio en el directorio actual cuyo nombre se recibe por parámetro
# Cree un directorio src dentro del directorio anterior
# Cree un archivo vacío dentro del directorio src llamado main.c
# Insertar en el archivo main.c el código completo en C de un programa que muestre en consola “Hola Mundo” mediante el comando printf
# Abra el archivo main.c con el programa gedit*/


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

cp ../hola.c scr/main.c   #esta linea me pega el ola mundo

cd scr
gcc -Wall -Werror -std=c90 main.c
./a.out

gedit main.c
