#!/bin/bash

# Este Script construye y ejecuta el archivo 3_suma_eco.c y luego muestra la 
# variable de entorno ? con el comando echo $?

#-----------------------------------------------------------------------------------


NOMBRE_DEL_SCRIPT=$0

PRIMER_PARAMETRO=$1

SEGUNDO_PARAMETRO=$2

TERCER_PARAMETRO=$3

CANT_PARAMETROS=$#

TODOS_JUNTOS=$*

TODOS_SEPARADOS=$@

gcc -Wall -Werror --pedantic-errors 3_suma_eco.c
./a.out $PRIMER_PARAMETRO $SEGUNDO_PARAMETRO

echo "     La suma de ($PRIMER_PARAMETRO + $SEGUNDO_PARAMETRO) es: $?"


