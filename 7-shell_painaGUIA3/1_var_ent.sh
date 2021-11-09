#!/bin/bash

# Script para visualizar el contenido de las siguientes variables de entorno:
# USER: contiene el nombre del usuario actual.
# PATH: contiene el conjunto de rutas donde el sistema busca los archivos.
# SHELL: contiene el nombre del binario que utiliza para llamar la shell
# PS1: contiene el simbolo del prompt principal.
# PS2: contiene el simbolo del prompt secundario.
# PWD: contiene la ruta del directorio en el que estoy parado
# OLDPWD: contiene la ruta del directrio inmediatamente anterior (cd -)


#-----------------------------------------------------------------------------------


NOMBRE_DEL_SCRIPT=$0

PRIMER_PARAMETRO=$1

SEGUNDO_PARAMETRO=$2

TERCER_PARAMETRO=$3

CANT_PARAMETROS=$#

TODOS_JUNTOS=$*

TODOS_SEPARADOS=$@

echo "    VARIABLES DE ENTORNO DEL SISTEMA:"
echo " El nombre de usuario es: $USER"
echo " El conjunto de path donde el sistema busca los archivos es: $PATH"
echo " La shell que ejecuta los Script esta en el directorio: $SHELL"
echo " El simbolo de prompt principal es: $PS1 "
echo " El simbolo de prompt secundario es: $PS2 "
echo " La ruta del directorio actual es: $PWD"
echo " La ruta del directorio anterior es: $OLDPWD"
echo "           FIN DEL SCRIPT"
