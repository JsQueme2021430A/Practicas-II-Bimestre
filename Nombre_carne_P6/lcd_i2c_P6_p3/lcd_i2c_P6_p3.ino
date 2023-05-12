#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int Trigger = 2;
int Echo = 3;
int pin;
long Sensorin;
long Distancia;
const int Buzzer = 5;
#define Note_C4 262
#define Note_D4 294
#define Note_E4 330
#define led0 6
#define led1 7
#define led2 8
#define led3 9
#define led4 10
#define led5 11
#define led6 12
#define led7 13
#define led8 A1
#define led9 A2


void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
}

void loop() {


  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  Sensorin = pulseIn(3, HIGH);

  Distancia = Sensorin / 59;
  Serial.begin(9600);
  Serial.print("Distancia:  ");
  Serial.print(Distancia);
  Serial.print("cm");
  Serial.println();
  delay(100);


  lcd.clear();

  if (Distancia > 45) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Fuera de rango");
    lcd.setCursor(0, 1);
    tone(5, Note_C4);//DO
    delay(500);
    noTone(5);
    delay(500);
    digitalWrite(led0, HIGH);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
  }

  if (Distancia < 44 && Distancia >= 30) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Acercandose");
    lcd.setCursor(0, 1);
    tone(5, Note_E4);//DO
    delay(100);
    noTone(5);
    delay(100);
    digitalWrite(led0, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
  }

  if (Distancia <= 30 && Distancia >= 15) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Acercandose");
    lcd.setCursor(0, 1);
    tone(5, Note_E4);//DO
    delay(100);
    noTone(5);
    delay(100);
    digitalWrite(led0, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
  }



    if (Distancia <= 29 && Distancia >= 5
       ) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Lugar privado");
      tone(5, Note_D4);//DO
      lcd.setCursor(0, 1);
      delay(50);
      noTone(5);
      delay(50);
      digitalWrite(led0, HIGH);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
    }
  }
