const int pinRojo = 9;
const int pinVerde = 10;
const int pinAzul = 11;
String msg1 = "Ingrese color: ";
String ledColor;

void setup() {
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
  Serial.begin(9600);
  apagarTodo();
}

void loop() {
  if (Serial.available() > 0) {
    ledColor = Serial.readString();
    ledColor.trim();
    apagarTodo();

    if (ledColor == "rojo") {
      analogWrite(pinRojo, 0);
    } 
    else if (ledColor == "verde") {
      analogWrite(pinVerde, 0);
    } 
    else if (ledColor == "azul") {
      analogWrite(pinAzul, 0);
    } 
    else if (ledColor == "magenta") {
      // Magenta: Rojo y Azul al máximo
      analogWrite(pinRojo, 0);
      analogWrite(pinAzul, 0);
    } 
    else if (ledColor == "naranja") {
      // Naranja: Rojo máximo, Verde un poco (prueba con 150 si 200 no se ve)
      analogWrite(pinRojo, 0);
      analogWrite(pinVerde, 150); 
    } 
    else if (ledColor == "amarillo") {
      analogWrite(pinRojo, 0);
      analogWrite(pinVerde, 0);
    }
    else if (ledColor == "blanco") {
      analogWrite(pinRojo, 0);
      analogWrite(pinVerde, 0);
      analogWrite(pinAzul, 0);
    }
    else if (ledColor == "cian") {
      // Cian: Verde y Azul encendidos, Rojo apagado
      analogWrite(pinVerde, 0);   // Máximo Verde
      analogWrite(pinAzul, 0);    // Máximo Azul
    }
    
    Serial.print("Color actual: ");
    Serial.println(ledColor);
  }
}

void apagarTodo() {
  analogWrite(pinRojo, 255);
  analogWrite(pinVerde, 255);
  analogWrite(pinAzul, 255);
}

