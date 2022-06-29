// Projeto 12 - Alarme com sensor a laser
 
int pinoSensorLuz = A0;
int pinoBuzzer = 6;              
int valorLuz = 0;                     
 
void setup()
{       
    Serial.begin(9600);
    // configura pino do buzzer como saída
    pinMode(pinoBuzzer,OUTPUT);
}
 
void loop()
{
  valorLuz = analogRead(pinoSensorLuz);       
  Serial.println(valorLuz);
  if(valorLuz<500)
  {               
    Serial.println("Para tocar");
    tone(pinoBuzzer, 400);
  }
  else
  {                   
    noTone(pinoBuzzer);
  }
  delay(500);                  
}
