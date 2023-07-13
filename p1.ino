// C++ code
//
int green = 12;
  int yellow = 8;
 int red= 13;
 int ON = 1000; 
int OFF = 1000;

void setup()
{
  
  pinMode(red,OUTPUT );
  pinMode(green,OUTPUT );
  pinMode(yellow,OUTPUT );
  
}

void loop()
{
  digitalWrite(green, HIGH); 
  delay(ON);
  
  digitalWrite(yellow, HIGH);
  delay(ON);
   digitalWrite(yellow,LOW);
  delay(OFF);
   digitalWrite(yellow, HIGH);
  delay(OFF);
  digitalWrite(yellow, LOW);
  delay(OFF);
   digitalWrite(yellow, HIGH);
  delay(OFF);
    digitalWrite(yellow, LOW);
   digitalWrite(green, LOW); 
delay(OFF);

  digitalWrite(red, HIGH);
  delay(OFF);
  
   digitalWrite(red, LOW);
    delay(OFF);
 
}
  

