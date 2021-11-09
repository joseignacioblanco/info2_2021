#/*
# * ============================================================================
# *
# * NOMBRE       : files.sh
# * AUTOR        : José Blanco 83621
# * Version      : 1.0
# * Descripción  : escript de la shell que implementa un ls -l
# * FECHA        : 8 5 2021
# *
# * ============================================================================
# */

 #! /bin/bash

 for file in *; do
   echo -n "Nombre de archivo: "
   echo ${file}
 done

 exit 0
