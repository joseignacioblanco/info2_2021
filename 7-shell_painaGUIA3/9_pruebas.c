/*
 * ============================================================================
 *
 * NOMBRE       :
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : 
 * FECHA        :
 *
 * ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*#include<>*/

/*#define*/


int main(void){

  printf("\n Mondongo\n");


return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}

/*

Ir al directorio del usuario y crear un directorio de prueba
> cd [ENTER]
> mkdir prueba
Luego:
a) Crear un directorio
> mkdir dir
b) Crear un archivo vacio (0 bytes) dentro del directorio creado
> touch dir/vacio
c) Mostrar los permisos del archivo creado
> ls -l dir/vacio
d) Mostar los permisos del propio directorio (archivo)
> ls -ld dir
Anotar los permisos en forma num´erica (p.e., 735)
e) Quitar permiso de lectura al directorio
> chmod u-r dir
f ) Mostrar los archivos del directorio
> ls -l dir
¿Qu´e pasa?
g) Moverse al directorio (mv dir) y listar los archivos (ls)
h) Restablecer los permisos originales del directorio creado utilizando notaci´on num´erica
i) Quitar permiso de escritura al directorio (chmod u-w dir) y crear otro archivo vacio
j) Borrar los archivos (rm) y directorios (rmdir) creados haciendo los cambios de permisos necesarios

*/
