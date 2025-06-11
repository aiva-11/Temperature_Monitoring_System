const int sensorPin = A0;
float voltage, temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  voltage = reading * 5.0 / 1024.0;
  temperature = (voltage - 0.5) * 100.0;  // TMP36 formula

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}
