#define LEER(pin) digitalRead(pin)
#define ENTRADA(pin) pinMode(pin, INPUT)
#define But0 2
#define But1 3
int i = 0;
struct productos
{
  String Nombre;
  int Almacen;
  int Precio;
}Producto1 = {"Oreo", 25 , 2}, Producto2 = {"Tortrix", 32 , 1}, Producto3 = {"Arcoiris", 15 , 5}, Producto4 = {"BigCola", 20 , 4};
void setup() {
  ENTRADA(But0);

}

void loop() {
  Serial.begin(9600);
  bool VERIFY_FORWARD = LEER(But0);
  bool VERIFY_REVERSE = LEER(But1);

  if ((VERIFY_FORWARD == HIGH) & (VERIFY_REVERSE == LOW))
  {
   delay(2000);
   i++ ;
    if(i == 1)
    {
      Serial.println("Nombre          Cantidad       Precio");
      Serial.print(Producto1.Nombre);
      Serial.print("            ");
      Serial.println(Producto1.Precio);
      Serial.println(Producto1.Precio);
      i++;
      delay(1000);
    }

    if(i == 3){
      Serial.print(Producto2.Nombre);
      Serial.print("          ");
      Serial.println(Producto2.Almacen);
      Serial.println(Producto2.Precio);
      i++;
      delay(1000);
    }

    if(i == 5){
      Serial.print(Producto3.Nombre);
      Serial.print("            ");
      Serial.println(Producto3.Almacen);
      Serial.println(Producto3.Precio);
      i++;
      delay(1000);
    }

    if(i == 7){
      Serial.print(Producto4.Nombre);
      Serial.print("        ");
      Serial.println(Producto4.Almacen);
      Serial.println(Producto4.Precio);
      i++;
      delay(1000);
    }
   
  }
  if((VERIFY_REVERSE == HIGH) & (VERIFY_FORWARD == LOW))
  {
    delay(2000);
    i--;
      if(i == 1){
        Serial.print(Producto4.Nombre);
        Serial.print("        ");
        Serial.println(Producto4.Almacen);
        Serial.println(Producto4.Precio);
        delay(100);
        i=8;
      }

      if(i == 3){
        Serial.print(Producto1.Nombre);
        Serial.print("            ");
        Serial.println(Producto1.Almacen);
        Serial.println(Producto1.Precio);
        delay(1000);
        i--;
      }

      if(i == 5){
        Serial.print(Producto2.Nombre);
        Serial.print("          ");
        Serial.println(Producto2.Almacen);
        Serial.println(Producto2.Precio);
        delay(1000);
        i--;    
      }

      if(i==7){
        Serial.print(Producto3.Nombre);
        Serial.print("            ");
        Serial.println(Producto3.Almacen);
        Serial.println(Producto3.Precio);
        delay(1000);
        i--;
      }

      if(i<0){
        i = 9;
      }
     
  }
}
