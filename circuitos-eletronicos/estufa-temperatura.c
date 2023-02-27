int PinSpeaker = 7; // Speaker
int PinRoj = 8;
int PinAzu = 9;
int PinVer = 10;
int pinTMP = 0;
int PinVentilador = 6; // Ventilador (motor)
int valorTMP = 0;

void setup()
{
  pinMode(PinRoj, OUTPUT);
  pinMode(PinAzu, OUTPUT);
  pinMode(PinVer, OUTPUT);
  pinMode(PinSpeaker, OUTPUT); // Speaker
  pinMode(PinVentilador, OUTPUT); // Ventilador
  
  Serial.begin(9600);
  
  //digitalWrite(PinSpeaker, LOW);
  digitalWrite(PinRoj, HIGH);
  digitalWrite(PinAzu, LOW);
  digitalWrite(PinVer, LOW);
}

void loop()
{
  
  valorTMP= analogRead(pinTMP);
  
  Serial.print("Valor TMP := ");
  Serial.println(valorTMP);
  
  if(valorTMP <=165)
  {
    digitalWrite(PinRoj, LOW);
    digitalWrite(PinAzu, HIGH);
    digitalWrite(PinVer, LOW);
    digitalWrite(PinSpeaker, LOW);
    digitalWrite(PinVentilador, LOW);
  }
  
  if(valorTMP >165 and valorTMP <=207)
  {
    digitalWrite(PinRoj, LOW);
    digitalWrite(PinAzu, LOW);
    digitalWrite(PinVer, HIGH);
    digitalWrite(PinSpeaker, LOW);
    digitalWrite(PinVentilador, HIGH);
  }
  
  if(valorTMP > 207)
  {
    digitalWrite(PinRoj, HIGH);
    digitalWrite(PinAzu, LOW);
    digitalWrite(PinVer, LOW);
    digitalWrite(PinSpeaker, HIGH);
    digitalWrite(PinVentilador, HIGH);
  }
}