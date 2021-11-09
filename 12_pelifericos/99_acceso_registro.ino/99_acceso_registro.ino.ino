
void setup() {
  
 int * ddrd = 0x2A,
     * ddrb = 0x24;
 
  *ddrd = 0b01100000;
  *ddrb = 0b00100010;
}
 
void loop() {
  
  PIND = 0b01100000;
  PINB = 0b00100010;
  
delay(500);

  
}
