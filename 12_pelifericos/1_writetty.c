/*
 * ============================================================================
 *
 * NOMBRE       : 1_writetty.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : escribe un saludo en el puerto ttyS0
 * FECHA        : 25 6 2021
 *
 * ============================================================================
 */


/* debo abrir el socat en otra terminal con el comando:
   socat pty,link=/tmp/ttyS0 pty,link=/tmp/ttyS1
   Luego abro cutecom en el puerto /temp/ttyS1
   Yluego ejecuto este programa para que escriba en la terminal
   de cutecom que representa el archivo de dispositivo
   el mensaje programado.
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> /* Unix standard function definitions */
#include<fcntl.h>  /* File control definitions */

 int main ( void )
 {
    int fd ; /* descriptor de archivo */

    fd = open ("/tmp/ttyS0", O_WRONLY );
    if( fd == -1)
     {
        printf (" ERROR : no se pudo abrir /tmp/ttyS0 \n");
        return -1;
     }

    write (fd , "Hola TTY \n", 9);

    close (fd);

return EXIT_SUCCESS; /* EXIT_SUCCESS esta definido en el header stdlib.h */
}
