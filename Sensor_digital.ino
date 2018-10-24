/*
Este sketch enciende y apaga un led conectado al pin 13, 
al presionar un botón conectado al pin 2.
 */
 
// la constante "botón" guarda el número del pin al 
//que conectamos el botón:
const int boton = 2; 

// la constante "led" guarda el número del pin al 
//que conectamos el led:
const int led =  13; 

//se crea una variable de tipo booleano (verdadero o falso)
//para guardar el valor del sensor:
boolean boton_presionado;         

void setup() { // la secuencia se ejecuta una sola vez
  
  //establece el pin digital "led" como una salida:
  pinMode(led, OUTPUT); 
  
  //establece el pin digital "botón" como una entrada:
  pinMode(boton, INPUT); 
}

void loop() { // la secuencia se ejecuta una y otra vez por siempre

  //se guarda la lectura actual del sensor 
  //en la variable estado_del_boton:
  boton_presionado = digitalRead(boton);

  //si el botón está presionado...
  if (boton_presionado == true) {
    
    digitalWrite(led, HIGH); //enciende el pin digital 13
    
  //de lo contrario...  
  } else {

    digitalWrite(led, LOW); //apaga el pin digital 13
  }
}
