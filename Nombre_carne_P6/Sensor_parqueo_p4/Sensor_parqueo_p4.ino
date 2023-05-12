#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int Trigger = 2;
int Echo = 3;
int pin;
long Sensorin;
long Distancia;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
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


  if (Distancia <=50 && Distancia >=29) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("    ***50***    ");
    lcd.setCursor(5, 1);
    lcd.print("Libre");
}

if (Distancia <=30 && Distancia >=11) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("  *****30*****  ");
    lcd.setCursor(3, 1);
    lcd.print("Cuidado");
}

if (Distancia <=10 && Distancia >=5) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("*******10*******");
    lcd.setCursor(6, 1);
    lcd.print("Alto");
}
}
