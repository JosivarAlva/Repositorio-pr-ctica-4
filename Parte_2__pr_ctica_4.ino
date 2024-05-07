/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1, práctica 5
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 5 de mayo del año 2024
   link de la simulacion: 
*/


const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int switchPin1 = 10;
const int switchPin2 = 11;
const int switchPin3 = 12;
int switchState1 = LOW;
int switchState2 = LOW;
int switchState3 = LOW;
int speed = 500;
 
void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(switchPin1, OUTPUT);
  pinMode(switchPin2, OUTPUT);
  pinMode(switchPin3, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  switchState1 = digitalRead(switchPin1);
  switchState2 = digitalRead(switchPin2);
  switchState3 = digitalRead(switchPin3);
  if (switchState1 == HIGH) {
    speed = 100;
    Serial.println("Secuencia - velocidad 1");
    performSequence();
  }
  else if (switchState2 == HIGH) {
    speed = 2000;
    Serial.println("Secuencia - velocidad 2");
    performSequence();
  }
}
 
void performSequence() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(speed);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = 7; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(speed);
    digitalWrite(ledPins[i], LOW);
  }
}
