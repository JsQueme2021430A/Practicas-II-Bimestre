#define Note_C4 262
#define Note_D4 294
#define Note_E4 330
#define Note_F4 349
#define Note_G4 392
#define Note_A4 440
#define Note_B4 494
#define Note_C5 523
int Trigger = 2;
int Echo = 3;
long Sensorin;
long Distancia;



const int Buzzer = 9;
void setup(){
pinMode(Trigger, OUTPUT);
pinMode(Echo, INPUT);
digitalWrite(Trigger, LOW);
}

void loop(){
  
  digitalWrite(2, HIGH);
delayMicroseconds(10);
digitalWrite(2, LOW);
Sensorin = pulseIn(3, HIGH);

Distancia = Sensorin/59;
  
  if(Distancia >= 3 && Distancia <=6){   
  tone(9, Note_C4);//DO
  delay(1000);
  
  noTone(9);
  delay(500);
  }
  
  if(Distancia >= 6 && Distancia <=9){   
  tone(9, Note_D4);//RE
  delay(1000);
  
  noTone(9);
  delay(500);
  }
  
  if(Distancia >= 9 && Distancia <=12){   
  tone(9, Note_E4);//MI
  delay(1000);
  
  noTone(9);
  delay(500);
  }
  
  if(Distancia >= 12 && Distancia <=15){   
  tone(9, Note_F4);//FA
  delay(1000);
  
  noTone(9);
  delay(500);
  }
  
  if(Distancia >= 15 && Distancia <=18){   
  tone(9, Note_G4);//SOL
  delay(1000);
  
  noTone(9);
  delay(500);
  }
  
  if(Distancia >= 18 && Distancia <=21){   
  tone(9, Note_A4);//LA
  delay(1000);
  
  noTone(9);
  delay(500);
  }
  
  if(Distancia >= 21 && Distancia <=24){   
  tone(9, Note_B4);//SI
  delay(1000);
  
  noTone(9);
  delay(500);
  }
  
  if(Distancia >= 24 && Distancia <=27){   
  tone(9, Note_C5);//DO8
  delay(1000);
  
  noTone(9);
  delay(500);
  }


}  
