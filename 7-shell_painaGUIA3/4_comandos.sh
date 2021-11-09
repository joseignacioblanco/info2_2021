#!/bin/bash

# script para probar comandos en la shell.

#-----------------------------------------------------------------------------------


NOMBRE_DEL_SCRIPT=$0

PRIMER_PARAMETRO=$1

SEGUNDO_PARAMETRO=$2

TERCER_PARAMETRO=$3

CANT_PARAMETROS=$#

TODOS_JUNTOS=$*

TODOS_SEPARADOS=$@


ls $HOME #me lista los archivos que estan bajo el directorio /home/goye/ 
ls /home/$USER #me lista los archivos que estan bajo el directorio /home/goye/
cd #me lleva al directorio home
cd $OLDPWD #me devuelve al directorio anterior
cd -  #tambien me devuelve al directorio anterior
