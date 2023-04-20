

/*
Centro educativo laboral Kinal
Perito en electronica
Quinto perito
Seccion A
Curso; Taller de electronica digital y reparacion de computadoras 
Alumno; Jorge Diego Queme Andrino
Carne; 2021430
Proyecto; RGB por Pulsadores 
*/

#define LedR 2
#define LedG 3
#define LedB 4
#define But0 5
#define But1 6
#define setpinInput(pin)        pinMode(pin,INPUT)      
#define setpinInputPullup(pin)  pinMode(pin, INPUT_PULLUP)  
#define setpinOutput(pin)       pinMode(pin, OUTPUT)      
#define SBI(pin)                digitalWrite(pin, HIGH)   
#define CBI(pin)                digitalWrite(pin, LOW)

void setup() {
  setpinOutput(LedR);
  setpinOutput(LedG);
  setpinOutput(LedB);
  setpinInput(But0);
  setpinInput(But1);
}

void loop() {

  bool estado_boton0 = digitalRead(But0);
  bool estado_boton1 = digitalRead(But1);

digitalRead(But0);
digitalRead(But1);

if(estado_boton1 == LOW && estado_boton0 == LOW){
  SBI(LedR);
  delay(200);
  CBI(LedR);
  delay(200);
  SBI(LedG);
  delay(200);
  CBI(LedG);
  delay(200);
  SBI(LedB);
  delay(200);
  CBI(LedB);
  delay(200);
 }

 if(estado_boton0 == HIGH && estado_boton1 == LOW){
  SBI(LedR);
  SBI(LedG);
  CBI(LedB);
 }
 
 if(estado_boton1 == HIGH && estado_boton0 == LOW){
  SBI(LedG);
  SBI(LedB);
  CBI(LedR);
 } 

 if(estado_boton1 == HIGH && estado_boton0 == HIGH){
  SBI(LedR);
  SBI(LedB);
  CBI(LedG);
}
}
