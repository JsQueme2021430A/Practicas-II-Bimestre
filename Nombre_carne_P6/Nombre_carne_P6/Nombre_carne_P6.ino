/*
Centro educativo laboral Kinal
Perito en electronica
Quinto perito
Seccion A
Curso; Taller de electronica digital y reparacion de computadoras
Alumno; Jorge Diego Queme Andrino
Carne; 2021430
Proyecto; Practica 6 parte 1
*/

#include <LiquidCrystal.h> 
#define RS 6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5


LiquidCrystal LCD (RS,Enable,D4,D5,D6,D7);


void setup() {
LCD.begin(16,2);
LCD.print("Diego Queme");
LCD.setCursor(0,1);
LCD.print("2021430");

}

void loop() {

}