int potValue;
int wiper;
int ignition;
int pwmOut=0;
int analogpin = A0;
void setup()
{
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
}
void loop()
{
  ignition=digitalRead(5);
    if(ignition==HIGH)
  {
     ignitionON(); 
  }
  else
  { //ignitionOFF
    digitalWrite(13,LOW);
    digitalWrite(8,LOW);
    digitalWrite(3,LOW);
  }    
}

void ignitionON()
{
  digitalWrite(13,HIGH);
  wiper=digitalRead(4);
  if(wiper==HIGH)
  {
     wiperON(); 
  }
  else
  { //wiperOFF
    digitalWrite(8,LOW);
    digitalWrite(3,LOW);
  }
}


void wiperON()
{
 digitalWrite(8,HIGH);
 potValue = analogRead(A0);
 pwmOut = map(potValue, 0, 1023, 0 , 255); 
  if(pwmOut == 0)
  {
    analogWrite(3,0);
  }
  else if(pwmOut > 0 && pwmOut < 63)//high rain intensity
 {
    analogWrite(3,63);//motor runs at 25% duty cycle
  }
 else if(pwmOut >= 63 && pwmOut <= 150)//medium rain intensity
 {
   analogWrite(3,127);//motor runs at 50% duty cycle
 }
 else if(pwmOut > 150 && pwmOut <=255)//low rain intensity
 {
   analogWrite(3,190);//motor runs at 75% duty cycle
 }
 
 }
  
  
