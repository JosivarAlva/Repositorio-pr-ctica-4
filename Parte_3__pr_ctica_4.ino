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


// defino los pines 
#define push_buttom_1 10
#define push_buttom_2 11
#define push_buttom_3 12
#define push_buttom_4 13
#define Led1 2
#define Led2 3
#define Led3 4
#define Led4 5
#define Led5 6
#define Led6 7
#define Led7 8

#define A A0
#define B A1
#define C A2
#define D A3
#define E A4
#define F A5
#define G 9
 
//declaro los pines digitales y analógicos como entradas o salidas
void setup() {
  Serial.begin(9600);
  pinMode(push_buttom_1, INPUT);
  pinMode(push_buttom_2, INPUT);
  pinMode(push_buttom_3, INPUT);
  pinMode(push_buttom_4, INPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  //imprimo que el inicio del programa 
  Serial.println("Presione un botón"); 
}
 
void loop() 
  {
  //se lee el estado del pulsador y si es low se imprimen las instrucciones
  if(digitalRead(push_buttom_1) == LOW){
    Serial.println("Practica No.4 Josivar Alva");
    delay(800);
  }
  //se lee el estado del pulsador y si es low se imprimen las instrucciones

  if(digitalRead(push_buttom_2) == LOW){
    Serial.println("Inicia secuencia de leds");
    // se inicia una secuencia de aágado y encendido para los leds
    digitalWrite(Led1, HIGH);
    delay(500);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, HIGH);
    delay(500);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, HIGH);
    delay(500);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, HIGH);
    delay(500);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, HIGH);
    delay(500);
    digitalWrite(Led5, LOW); 
    digitalWrite(Led6, HIGH);
    delay(500);
    digitalWrite(Led6, LOW); 
    digitalWrite(Led7, HIGH);
    delay(500);
    digitalWrite(Led7, LOW); 
  }  //se lee el estado del pulsador y si es low se imprimen las instrucciones

  if(digitalRead(push_buttom_3) == LOW){
    Serial.println("Cuatro");
    //Letra C
    delay(1000);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, LOW);
    delay(2000);
    //Letra U
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, LOW);
    delay(2000);
    //Letra A
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    delay(2000);
    //Letra T
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    delay(2000);
    //Letra R
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, LOW);
    delay(2000);
    //Letra O
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, LOW);
    delay(2000);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
  }
  if(digitalRead(push_buttom_1) == LOW && digitalRead(push_buttom_3) == LOW){
    Serial.println("Gracias Por Su Atencion");
    delay(500);
  }
  if(digitalRead(push_buttom_2) == LOW && digitalRead(push_buttom_4) == LOW){
    Serial.println("Gracias Por Su Atencion");
    delay(500);
  }
}
