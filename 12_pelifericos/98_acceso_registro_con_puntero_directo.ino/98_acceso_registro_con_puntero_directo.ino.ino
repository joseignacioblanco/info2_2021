
void setup() {

(*(volatile uint8_t *)(0x2A)) |= 0b01100000;

 //int * ddrd = 0x2A; //defino puntero a entero y le asigno la direccion 0x2A (puerto DDRD)
 int * ddrb = 0x24; //define puntero a entero y le asigna la direccion 0x24 (puerto DDRB) 
 
 //*ddrd = 0b01100000; //donde apunta ddrd le cargo el valor 01100000 pines 6 y 5
  *ddrb = 0b00100010; //donde apunta ddrb le cargo el valor 00100010 pines 5 y 1
}
 
void loop() {
  
  PIND = 0b01100000;
  PINB = 0b00100010;
  
delay(500);

  
}
