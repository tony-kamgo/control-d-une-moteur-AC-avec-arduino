
//AC_Fan_tony

#define triacpulse 3
int dimming = 128;
int  sensorValue;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(triacpulse, OUTPUT);
}

void loop() 
{
  sensorValue=analogRead(A0);
  Tony=75*sensorValue;
  attachInterrupt(0,acon,FALLING);
}

void acon()
{
  delayMicroseconds(Tony);
  digitalWrite(triacpulse,HIGH);
  delayMicroseconds(10);
  digitalWrite(triacpulse,LOW);  
}
