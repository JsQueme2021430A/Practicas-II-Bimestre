
/*
Centro educativo laboral Kinal
Perito en electronica
Quinto perito
Seccion A
Curso; Taller de electronica digital y reparacion de computadoras 
Alumno; Jorge Diego Queme Andrino
Carne; 2021430
Proyecto; Tienda de caracteres 
*/


#define ButUP 2 //Pin 2 conecto el boton de subida
#define ButDOWN 3 //Pin 3 conecto el boton de bajada
int i=0;
bool producto_impreso = false;
//Estructura del inventario
struct tienda{
  char Nombre[25];
  int Cantidad;
  float Precio_U;
  float Precio_lote;
  int Stock;
};

tienda Producto1={"Galleta Chip",6,3.00,50.00,2};
tienda Producto2={"Tortrix",3,1.50,1.80,5};
tienda Producto3={"jugo",9,2.00,7.00,3};
tienda Producto4={"pan bimbo",1,8.00,3.00,9};

void setup() {
  pinMode (ButUP,INPUT);  
  pinMode (ButDOWN,INPUT);
  Serial.begin(9600);
 
 
}

void loop() {
  bool estado_boton1 = digitalRead (ButUP);
  bool estado_boton2 = digitalRead (ButDOWN);

  if(estado_boton1 == HIGH){
    delay(100);
    i++;
    producto_impreso = false;
  }
 
  if(estado_boton2 == HIGH){
    delay(100);
   
    i--;
    producto_impreso = false;
  }
 
  if(i > 7) {
    i = 1;
  } else if(i < 1) {
    i = 7;
   
  }

  if (i==1 && !producto_impreso){
    Serial.println (Producto1.Nombre);
    Serial.println (Producto1.Cantidad);
    Serial.println (Producto1.Precio_U);
    Serial.println (Producto1.Precio_lote);
    Serial.println (Producto1.Stock);
    producto_impreso = true;
  } else if(i==3 && !producto_impreso){
    Serial.println (Producto2.Nombre);
    Serial.println (Producto2.Cantidad);
    Serial.println (Producto2.Precio_U);
    Serial.println (Producto2.Precio_lote);
    Serial.println (Producto2.Stock);
    producto_impreso = true;
  } else if(i==5 && !producto_impreso){
    Serial.println (Producto3.Nombre);
    Serial.println (Producto3.Cantidad);
    Serial.println (Producto3.Precio_U);
    Serial.println (Producto3.Precio_lote);
    Serial.println (Producto3.Stock);
    producto_impreso = true;
  } else if(i==7 && !producto_impreso){
    Serial.println (Producto4.Nombre);
    Serial.println (Producto4.Cantidad);
    Serial.println (Producto4.Precio_U);
    Serial.println (Producto4.Precio_lote);
    Serial.println (Producto4.Stock);
    producto_impreso = true;
  }
}
