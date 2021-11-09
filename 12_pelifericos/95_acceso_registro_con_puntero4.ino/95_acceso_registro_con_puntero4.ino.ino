void setup() {
 //aqui en setup no uso ninguna macro para referirme a los puertos.
 
 int * ddrb = 0x24; //define puntero a entero y le asigna la direccion 0x24 (que es la direccion fija del puerto DDRB). 
 
 *ddrb = 0b00000010; //al puerto DDRB le cargo el valor 00000010 (pin 1 en alto: lo configura como salida: LED rojo del ponchito).

 *(unsigned char *) 0x2A = 0b01000000;    // Lo que contiene la direccion de memoria 0x2A(direccion fija del DDRD) es 
                                          // igual a 0b01100000: hace exactamente lo mismo que lo que hace con
                                          // el puerto DDRB de arriba pero ahora, con el puerto DDRD. Y le pone
                                          // en alto el pin 6 (o sea: lo configura como salida: LED amarillo del ponchitito).
                                          // Pude referirme a la direcciond e memoria como un unsigned char 8bits.
                                          // Se pone de manifiesto que el nombre de una variable es en si mismo
                                          // su direccion de memoria: 0x2A o bien 42(dec) o bien 0b00101010.
}                                         
 
void loop() {

//aqui en loop ya sí uso las macros para referirme a los puertos.
  
  PIND = 0b01000000; // Toglea el pin 6 del puerto PORTD atravez de colocarle un 1 en el bit 6 del puerto PIND.
  PINB = 0b00000010; // Tóglia el pin 1 del puerto PORTB a traves de colocarle un 1 en el bit 1 del puerto PINB.
  
delay(500);  //deláya 500 milisegundos.
}
