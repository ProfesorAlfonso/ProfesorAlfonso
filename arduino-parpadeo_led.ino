// Configuración inicial
void setup() {
  // Configura el pin 13 como salida
  pinMode(13, OUTPUT);
}

// Bucle principal
void loop() {
  // Enciende el LED
  digitalWrite(13, HIGH);
  // Espera 1 segundo
  delay(1000);
  // Apaga el LED
  digitalWrite(13, LOW);
  // Espera 1 segundo
  delay(1000);
}
