const int analogInPin = PB1;  // Analog input pin for sensor
const float Vref = 5.0;     // Reference voltage (in volts)
const float ACSoffset = 5; // ACS723 offset voltage (in volts)
const float sensitivity = 0.6; // Sensitivity of ACS723 (in volts per amp)
void setup() {
  Serial.begin(9600);
}
void loop() {
  int rawValue = analogRead(analogInPin); // Read analog value from sensor
  float voltage = (rawValue * Vref) / 1023.0; // Convert raw value to voltage
  float current = (voltage - ACSoffset) / sensitivity; // Calculate current
  Serial.print("Raw Value: ");
  Serial.print(rawValue);
  Serial.print(" - Voltage: ");
  Serial.print(voltage, 2);
  Serial.print(" V");
  Serial.print(" - Current: ");
  Serial.print(current, 2);
  Serial.println(" A");
  delay(1000); // Delay for 1 second
}
