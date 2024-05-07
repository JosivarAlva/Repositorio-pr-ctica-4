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


//defino los pines
#define pulsador_1 2
#define pulsador_2 3
#define tiempo delay(500);

//declaro una variable
int numero = 0;

void setup() {
  // determino los modos e instrucciones al monitor serial
  Serial.begin(9600);
  Serial.println("Presiona un interruptor");
  Serial.println(" 1. Ascendente");
  Serial.println(" 2. Descendente");
  pinMode(pulsador_1, INPUT);
  pinMode(pulsador_2, INPUT);
}
void loop(){
    //se lee el estado del pulsador y si es high se imprimen las instrucciones

  if(digitalRead(pulsador_1) == HIGH){
    for(int ascenso = 0; ascenso < 100; ascenso++){
   Serial.println(ascenso);
      tiempo
    }
  }
     //se lee el estado del pulsador y si es high se imprimen las instrucciones
  if(digitalRead(pulsador_2) == HIGH){
    for(int descenso = 99; descenso > -1; descenso--){
    Serial.println(descenso);
      tiempo
    }
  }
  if(numero > 99){
      numero = 1;
    Serial.println(numero);
    
  }
  if(numero < 0){
    numero = 99;
    Serial.println(numero);
    
  }
}  
