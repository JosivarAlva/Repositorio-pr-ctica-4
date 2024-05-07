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

#define BOTON_1 2 
#define BOTON_2 3
#define BOTON_3 4
int pines[4] = {5, 6, 7, 8};

void setup() {
  pinMode(BOTON_1, INPUT);
  pinMode(BOTON_2, INPUT);
  pinMode(BOTON_3, INPUT);
  for(int p = 0; p < 4 ; p++){
    pinMode(pines[p], OUTPUT);
  }
}

void loop(){
  for(int b = 0; b < 10; b++){
    for(int c = 0; c < 4; c++){
      digitalWrite(pines[c], (b >> c) & 1);
    }
    
    if(digitalRead(BOTON_1) == HIGH){
      delay(1000);
    }
    
    else if(digitalRead(BOTON_2) == HIGH){
      delay(2000);
    }
   
    else if(digitalRead(BOTON_3) == HIGH){
      delay(3000);
    }
    
    else if(digitalRead(BOTON_1 && BOTON_2 && BOTON_3) == HIGH){
     delay(500);
    }
    
    else if(digitalRead(BOTON_1 && BOTON_2 && BOTON_3) == LOW){
     delay(500);
    }
    
    delay(500);
  }
}
