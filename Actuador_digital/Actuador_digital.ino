/*
Este sketch enciende y apaga una y otra vez 
un pin digital de la placa (en este caso, el pin 13).
*/

//la constante "led" guarda el número del pin al 
//que está conectado el led:
const int led = 13;

void setup() { // la secuencia se ejecuta una sola vez
  pinMode(led, OUTPUT); //establece el pin digital "led" como una salida
}

void loop() { // la secuencia se ejecuta una y otra vez por siempre
  digitalWrite(led, HIGH); // enciende el pin digital 13
  delay(1000); // espera durante un segundo              
  digitalWrite(led, LOW); // apaga el pin digital 13
  delay(1000); // espera durante un segundo           
}
