/*
Centro educativo laboral Kinal
Perito en electronica
Quinto perito
Seccion A
Curso; Taller de electronica digital y reparacion de computadoras
Alumno; Jorge Diego Queme Andrino
Carne; 2021430
Proyecto; Teclado Matricial
*/ 
 
 #include <Keypad.h>    //Libreria que me permite usar el teclado matricial.

 void display(int a, int b, int c, int d, int e, int f, int g){
  digitalWrite(10,a);
  digitalWrite(11,b);
  digitalWrite(12,c);
  digitalWrite(13,d);
  digitalWrite(14,e);
  digitalWrite(15,f);
  digitalWrite(16,g);
}
//Librerias

//Macros o directivas de preprocesador
#define filas_teclado 4   //cantidad de filas que posee el teclado matricial.
#define columnas_teclado 4 //cantidad de columnas que posee el teclado matricial.
#define f1_teclado 2  //pin2 conectado a la fila 1
#define f2_teclado 3  //pin3 conectado a la fila 2
#define f3_teclado 4  //pin4 conectado a la fila 3
#define f4_teclado 5  //pin5 conectado a la fila 4
#define c1_teclado 6  //pin6 conectado a la columna 1
#define c2_teclado 7  //pin7 conectado a la columna 2
#define c3_teclado 8  //pin8 conectado a la columna 3
#define c4_teclado 9  //pin9 conectado a la columna 4


//Creo una matriz led con la disposicion fisica de las teclas
char keys[filas_teclado][columnas_teclado] = {
  {'1','4','7','*'},
  {'2','5','8','0'},
  {'3','6','9','#'},
  {'A','B','C','D'}
};

//Arreglos en los que defino los pines a utilizar, tanto para las columnas como para las filas
byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};


//Creo el constructor para poder usar el teclado matricial.
Keypad tecladoM = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);

void setup()
{
  Serial.begin(9600);    //Inicio la comunicacion serial.
  Serial.println("Prueba del teclado matricial");   //Envio de mensaje
  pinMode(10,OUTPUT);
  digitalWrite(10, HIGH);
  pinMode(11,OUTPUT);
  digitalWrite(11, HIGH);
  pinMode(12,OUTPUT);
  digitalWrite(12, HIGH);
  pinMode(13,OUTPUT);
  digitalWrite(13, HIGH);
  pinMode(14,OUTPUT);
  digitalWrite(14, HIGH);
  pinMode(15,OUTPUT);
  digitalWrite(15, HIGH);
    pinMode(16,OUTPUT);
  digitalWrite(16, LOW);


}

void loop()
{
 
  char tecla = tecladoM.getKey();  //Obtengo la tecla que presione


  //Si alguna tecla ha sido presionada
  if(tecla)
  {
    Serial.print("La tecla presionada es: ");   //Envio el mensaje
    Serial.println(tecla);    //Muestro por la terminal la tecla presionada
 
       
    if(tecla == '1'){
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
   delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);  
  }
   
    if(tecla == '2'){
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
   delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);  
  }
 
   
   
 
   if(tecla == '3'){
    digitalWrite(10,HIGH);//A
    digitalWrite(11,HIGH);//B
    digitalWrite(12,HIGH);//C
    digitalWrite(13,HIGH);//D
    digitalWrite(14,LOW);//E
    digitalWrite(15,LOW);//F
    digitalWrite(16,HIGH);
   delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);}//G
 
  if(tecla == '4'){
    digitalWrite(10,LOW);//A
    digitalWrite(11,HIGH);//B
    digitalWrite(12,HIGH);//C
    digitalWrite(13,LOW);//D
    digitalWrite(14,LOW);//E
    digitalWrite(15,HIGH);//F
    digitalWrite(16,HIGH);
  delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);}//G
 
  if(tecla == '5'){
    digitalWrite(10,HIGH);//A
    digitalWrite(11,LOW);//B
    digitalWrite(12,HIGH);//C
    digitalWrite(13,HIGH);//D
    digitalWrite(14,LOW);//E
    digitalWrite(15,HIGH);//F
    digitalWrite(16,HIGH);
  delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);}//G
 
 
 
  if(tecla == '6'){
    digitalWrite(10,HIGH);//A
    digitalWrite(11,LOW);//B
    digitalWrite(12,HIGH);//C
    digitalWrite(13,HIGH);//D
    digitalWrite(14,HIGH);//E
    digitalWrite(15,HIGH);//F
    digitalWrite(16,HIGH);
  delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);}//G
 
  if(tecla == '7'){
    digitalWrite(10,HIGH);//A
    digitalWrite(11,HIGH);//B
    digitalWrite(12,HIGH);//C
    digitalWrite(13,LOW);//D
    digitalWrite(14,LOW);//E
    digitalWrite(15,LOW);//F
    digitalWrite(16,LOW);
  delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);}//G
 
  if(tecla == '8'){
    digitalWrite(10,HIGH);//A
    digitalWrite(11,HIGH);//B
    digitalWrite(12,HIGH);//C
    digitalWrite(13,HIGH);//D
    digitalWrite(14,HIGH);//E
    digitalWrite(15,HIGH);//F
    digitalWrite(16,HIGH);
  delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);}//G

  if(tecla == '9'){
    digitalWrite(10,HIGH);//A
    digitalWrite(11,HIGH);//B
    digitalWrite(12,HIGH);//C
    digitalWrite(13,LOW);//D
    digitalWrite(14,LOW);//E
    digitalWrite(15,HIGH);//F
    digitalWrite(16,HIGH);
  delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);}//G
 
  if(tecla == '0'){
    digitalWrite(10,HIGH);//A
    digitalWrite(11,HIGH);//B
    digitalWrite(12,HIGH);//C
    digitalWrite(13,HIGH);//D
    digitalWrite(14,HIGH);//E
    digitalWrite(15,HIGH);//F
    digitalWrite(16,LOW);
  delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);}//G

  if(tecla == 'A'){
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);  
  }

  if(tecla == 'B'){
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);  
  }

  if(tecla == 'C'){
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
    delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);  
  }

  if(tecla == 'D'){
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
    delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);  
  }

  if(tecla == '*'){
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);  
  }

  if(tecla == '#'){
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    delay(200);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);  
  }
}
 }