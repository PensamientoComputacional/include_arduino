/*Este Sketch envía cada medio segundo el valor 
de un sensor analógico a través del puerto serial
*/

//la constante "sensor_analógico" guarda el número del pin al
//que conectamos el sensor:
const int sensor_analogico = A0; 

//crea una variable de tipo entero para guardar el valor 
//del sensor:
int valor_del_sensor;  

void setup() { // la secuencia se ejecuta una sola vez

  //inicia la comunicación a través del puerto 
  //serial a 9600 baudios de velocidad:
  Serial.begin(9600); 
}

void loop() { // la secuencia se ejecuta una y otra vez por siempre

  //se guarda la lectura actual del sensor 
  //en la variable valor_del_sensor:
  valor_del_sensor = analogRead(sensor_analogico);

  // se imprime la variable valor_del_sensor en 
  // una nueva línea a través  del puerto serial:
  Serial.println(valor_del_sensor); 
  
  delay(500); // espera medio segundo
 
}
