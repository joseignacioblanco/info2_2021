void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  Serial.println("\n CANTIDAD DE MEMORIA QUE OCUPAN EN BYTES LOS DATOS EN ARBINO:\n\n");
  Serial.print("El tamaño de un char es:.............................");
  Serial.println(sizeof(char));
  Serial.print("El tamaño de un unsigned char es:....................");
  Serial.println(sizeof(unsigned char));
  Serial.print("El tamaño de un int es:..............................");
  Serial.println(sizeof(int));
  Serial.print("El tamaño de un unsigned int es:.....................");
  Serial.println(sizeof(unsigned int));
  Serial.print("El tamaño de un short int es:........................");
  Serial.println(sizeof(short int));
  Serial.print("El tamaño de un unsigned short int es:...............");
  Serial.println(sizeof(unsigned short int));
  Serial.print("El tamaño de un long int es:.........................");
  Serial.println(sizeof(long int));
  Serial.print("El tamaño de un unsigned long int es:................");
  Serial.println(sizeof(unsigned long int));
  Serial.print("El tamaño de un float es:............................");
  Serial.println(sizeof(float));
  Serial.print("El tamaño de un double es:...........................");
  Serial.println(sizeof(double));
  Serial.print("El tamaño de un long double es:......................");
  Serial.println(sizeof(long double));
  Serial.print("El tamaño de un puntero es:..........................");
  Serial.println(sizeof(char *));
  Serial.print("El tamaño de un void es:.............................");
  Serial.println(sizeof(void));


}

void loop() {
  // put your main code here, to run repeatedly:

}
