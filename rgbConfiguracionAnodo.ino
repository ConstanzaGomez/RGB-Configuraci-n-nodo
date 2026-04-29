const int pinRojo = 9;
const int pinVerde = 10;
const int pinAzul = 11;
String msg1 = "Porfavor ingrese un color: ";
String ledColor;

void setup() {
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println();
  Serial.println(msg1);
  while (Serial.available()== 0) {
  
  }
  ledColor=Serial.readString();
  ledColor.trim();

  if (ledColor == "magenta"){
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAzul, LOW);
  }

  if (ledColor == "blanco"){
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAzul, LOW);
  }

  if (ledColor == "negro"){
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAzul, HIGH);
  }

  if (ledColor == "azul"){
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAzul, LOW);
  }

  if (ledColor == "rojo"){
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAzul, HIGH);
  }

  if (ledColor == "verde"){
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAzul, HIGH);
  }

  if (ledColor == "cian"){
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAzul, LOW);
  }

  if (ledColor == "amarrillo"){
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAzul, HIGH);
  }
}