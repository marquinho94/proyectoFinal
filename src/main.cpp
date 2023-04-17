#include <Arduino.h>

void setup() {
  // pinMode(1,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);

  // put your setup code here, to run once:
  // Hola, estoy escribiendo mi codigo base 
}

void loop() {
  // digitalWrite(13, HIGH);
  Serial.println("Hola, el led deberia encender");
  
  delay(500);
  // digitalWrite(13, LOW);
  Serial.println("led apagado");
  delay(500);

  // put your main code here, to run repeatedly:
}