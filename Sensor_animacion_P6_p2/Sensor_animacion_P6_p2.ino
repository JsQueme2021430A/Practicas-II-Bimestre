/*
Centro educativo laboral Kinal
Perito en electronica
Quinto perito
Seccion A
Curso; Taller de electronica digital y reparacion de computadoras
Alumno; Jorge Diego Queme Andrino
Carne; 2021430
Proyecto; Practia 6 parte 2
*/

#define Note_C4 262
int Trigger = 2;
int Echo = 3;
long Sensor;
long Distancia;
int SUMA=0;
#include <LiquidCrystal.h> 
#define RS 13
#define Enable 12
#define D4 8
#define D5 9
#define D6 10
#define D7 11
const int Buzzer = 5;


LiquidCrystal LCD (RS,Enable,D4,D5,D6,D7);

byte Cierra[] = {
  B00000,
  B00000,
  B01110,
  B11111,
  B11111,
  B11111,
  B01110,
  B00000
};

byte Abre[] = {
  B00000,
  B00000,
  B01111,
  B11100,
  B11000,
  B11100,
  B01111,
  B00000
};

byte Coins[] = {
  B00000,
  B00000,
  B00000,
  B00100,
  B01110,
  B01110,
  B00100,
  B00000
};

byte Fantasma[] = {
  B00000,
  B01110,
  B11111,
  B01011,
  B11111,
  B00011,
  B11111,
  B10101
};

byte FantasmaON[] = {
  B00000,
  B01110,
  B11111,
  B01011,
  B11111,
  B00011,
  B11111,
  B01010
};


byte gameover[] = {
  B00000,
  B10101,
  B01010,
  B00000,
  B11011,
  B00000,
  B01010,
  B10101
};


void setup() {
pinMode(Trigger, OUTPUT);
pinMode(Echo, INPUT);
digitalWrite(Trigger, LOW);
LCD.begin(16,2);
LCD.print("No.Personas");
LCD.createChar(1,Cierra);
LCD.createChar(2,Abre);
LCD.createChar(3,Coins);
LCD.createChar(4,Fantasma);
LCD.createChar(5,FantasmaON);
LCD.createChar(6,gameover);
}

void loop() {
digitalWrite(2, HIGH);
delayMicroseconds(10);
digitalWrite(2, LOW);
Sensor = pulseIn(3, HIGH);

Distancia = Sensor/59;

Serial.begin(9600);
Serial.print("Distancia:  ");
Serial.print(Distancia);
Serial.print("cm");
Serial.println();
delay(100);


 if(Distancia>=10 && Distancia <=300){

    SUMA++;

    } 
  else 
  {

    }



switch(SUMA){
  

          
          case(1):
  
LCD.begin(16,2);
LCD.print("No.1");
LCD.setCursor(0,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(0,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
  
            break;
  
          case(2):
LCD.begin(16,2);
LCD.print("No.2");
LCD.setCursor(1,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(1,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(3):
LCD.begin(16,2);
LCD.print("No.3");
LCD.setCursor(2,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(2,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(4):
LCD.begin(16,2);
LCD.print("No.4");
LCD.setCursor(3,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(3,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
         case(5):
LCD.begin(16,2);
LCD.print("No.5");
LCD.setCursor(4,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(4,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(6):
LCD.begin(16,2);
LCD.print("No.6");
LCD.setCursor(5,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(5,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(7):
LCD.begin(16,2);
LCD.print("No.7");
LCD.setCursor(6,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(6,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(8):
LCD.begin(16,2);
LCD.print("No.8");
LCD.setCursor(7,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(7,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(9):
LCD.begin(16,2);
LCD.print("No.9");
LCD.setCursor(8,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(8,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(10):
LCD.begin(16,2);
LCD.print("No.10");
LCD.setCursor(9,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(9,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(11):
LCD.begin(16,2);
LCD.print("No.11");
LCD.setCursor(10,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(10,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(12):
LCD.begin(16,2);
LCD.print("No.12");
LCD.setCursor(11,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(11,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(13):
LCD.begin(16,2);
LCD.print("No.13");
LCD.setCursor(12,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(12,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(14):
LCD.begin(16,2);
LCD.print("No.14");
LCD.setCursor(13,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(13,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(15):
LCD.begin(16,2);
LCD.print("No.15");
LCD.setCursor(14,1);
LCD.write(1);
  delay(150); 
LCD.setCursor(14,1);
LCD.write(2);
  delay(150);
  
LCD.setCursor(15,1);
LCD.write(4);
  delay(80);
LCD.setCursor(15,1);
LCD.write(5);
  delay(80);
            break;
  
          case(16):
LCD.begin(16,2);
LCD.print("No.16 *LLENO*");
LCD.setCursor(15,1);
LCD.write(6);
  tone(5, Note_C4);//DO
  delay(1000);
  noTone(5);
  delay(500);
            break;
}
}