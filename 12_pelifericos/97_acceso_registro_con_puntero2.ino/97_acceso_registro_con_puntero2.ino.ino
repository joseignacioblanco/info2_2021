
void setup() {

 int * ddrb = 0x24; //define puntero a entero y le asigna la direccion 0x24 (que es la direccion fija del puerto DDRB).
 
 *ddrb = 0b00100000; //al puerto DDRB le cargo el valor 00100000 (pin 5 en alto: lo configura como salida).


 (*(unsigned char *)(0x2A)) = 0b01000000; // Lo que contiene la direccion de memoria 0x2A es igual a 0b01100000: hace lo mismo
                                          // que arriba pero con el puerto DDRD y le pone en alto el pin 6.
}
 
void loop() {
  
  PIND = 0b01000000; // Toglea el pin del puerto PORTD atravez de colocarle un 1 en el bit5 del puerto PIND.
  PINB = 0b00100000; // Toglea el pin del puerto PORTB a traves de colocarle un 1 en el bit 5 del puerto PINB.
  
delay(500);

  
}
