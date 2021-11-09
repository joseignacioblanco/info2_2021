char option = ' ';
int red = 9, green = 5;

void setup()

{
   // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(red, OUTPUT);
   pinMode(green, OUTPUT);
   digitalWrite(red, HIGH);
   digitalWrite(green, HIGH);
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  
   if(Serial.available() != 0)
   {
    option = Serial.read();
    if(option == 'r')
    {
      for(int i = 0 ; i < 1 ; i++)
      {
         digitalWrite(red, LOW);
         delay(1000);
         digitalWrite(red, HIGH);
         delay(1000);
      }
    }

    else if(option == 'g')
    {
      for(int i = 0 ; i < 6 ; i++)
      {
         digitalWrite(green, LOW);
         delay(70);
         digitalWrite(green, HIGH);
         delay(70);
      }
    }
  
   delay(10);
   }
}
