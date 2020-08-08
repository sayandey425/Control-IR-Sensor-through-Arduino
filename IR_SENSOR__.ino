void setup() {
   
pinMode(3,OUTPUT);
pinMode(2,OUTPUT);

pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

pinMode(A2,INPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);

analogWrite(10,255);
analogWrite(11,255);
Serial.begin(9600);


}
void loop() 
{
  
  int s2=digitalRead(A2);
  
  int s1=digitalRead(A1);
  
  int s0=digitalRead(A0);

 
  if ((s2==1) && (s1==0) && (s0==1))
  {
    //Serial.println("Forward");
    forward();
    
  }
  if ((s2==0) && (s1==1) && (s0==1))
  {
    //Serial.println("Right");
    left();
    
  }
  if ((s2==1) && (s1==1) && (s0==0))
  {
   //Serial.println("Left");
    right();
    
  }
  else
  {
    digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  }
}
void forward()
{
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
}
void left()
{
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
  
}
void right()
{
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);

}
void left_spin() {
  //
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,1);

}
void right_spin()
{
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
}


