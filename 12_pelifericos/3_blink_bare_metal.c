/*
 * ============================================================================
 *
 * NOMBRE       : 3_blink_bare_metal.c
 * AUTOR        : José Blanco 83621
 * Version      : 1.0
 * Descripción  : hola mundo de hardware en bare metal hace parpadear leds
 * FECHA        : 26 6 2021
 *
 * ============================================================================
 */

#include<avr/io.h>
#include<util/delay.h>
/*#include<>*/

#define BLINK_DELAY_MS 1000


int main(void)
{
   /*Inicializa el pin digital 5 del puerto B como salida (13 en arbino))*/
DDRB |= _BV(DDB5);

while(1)
{
  PORTB |= _BV(PORTB5);  /* Enciende el led de la placa*/
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB5); /* Apaga el LED*/
  _delay_ms(BLINK_DELAY_MS);
}

return 0;
}
