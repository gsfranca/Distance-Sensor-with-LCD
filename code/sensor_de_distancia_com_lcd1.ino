#include <LiquidCrystal.h>

int trig = 13;
int echo = 6;
int pin7 = 7;
int pin8 = 8;
const int  buzzer = 9;
LiquidCrystal displayLCD{12, 11, 5, 4, 3, 2};
//

void setup()
{
    displayLCD.begin(16,2);
    Serial.begin(9600);
    pinMode(echo, INPUT);
    pinMode(trig, OUTPUT);
    pinMode(pin7, OUTPUT);
    pinMode(pin8, OUTPUT);
    pinMode(buzzer, OUTPUT);
  
}
//
void loop()
{
  //Inicio da leitura - Sensor Ultrassônico
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
  //Tempo de Onda Sônica
    int duracao = pulseIn(echo, HIGH);
  //Calc Distância
    int distancia = (duracao/2) / 29.1;
  //Exibir distância
  	//Monitor Serial
  	Serial.println(distancia);
  	//LCD
  	displayLCD.setCursor(5,0);
  	displayLCD.print(distancia);
  	displayLCD.setCursor(9,0);
  	displayLCD.print("cm");
  	delay(1000);
  if (distancia <= 15)
  {
    digitalWrite(pin8, LOW);
    tone(buzzer, 1500);
    delay(500);
    digitalWrite(pin7, HIGH);
    delay(100);
    digitalWrite(pin7, LOW);
    delay(100);
    // LCD - Aviso
    displayLCD.setCursor(4,1);
    displayLCD.print("CUIDADO!");  
  }
  if (distancia>15)
  {
    noTone(buzzer);
    delay(500);
    digitalWrite(pin7, LOW);
    delay(100); 
   	digitalWrite(pin8, HIGH);
    displayLCD.setCursor(4,1);
    displayLCD.clear();  
  }      
}