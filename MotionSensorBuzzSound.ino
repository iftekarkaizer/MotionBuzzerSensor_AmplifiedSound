int ledpin = 9;
int isdpin = 8;
int pir = 10;
int dt = 300;
int buzzer = 2;
int pirvalue; // Move the declaration here to make it a global variable

void setup()
{
  pinMode(pir, INPUT);
  pinMode(ledpin, OUTPUT);
  pinMode(buzzer, OUTPUT);
 // pinMode(isdpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(pir) == HIGH)
  {

    digitalWrite (ledpin,HIGH);
    digitalWrite (buzzer,HIGH);
    digitalWrite(isdpin, HIGH);
    delay (1000);
  }

else
{

  digitalWrite(ledpin,LOW);
  digitalWrite(buzzer,LOW);
  digitalWrite(isdpin, LOW);
}
   
}


