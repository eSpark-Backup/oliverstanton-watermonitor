/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  digitalWrite(5, LOW);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  
  int sensorValue0 = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  
  // print out the value you read:

  Serial.println("ANI0 = ");
  Serial.println(sensorValue0);
  
  Serial.println("ANI1 = ");
  Serial.println(sensorValue1);
  
  Serial.println("TDS1 = ");
  Serial.println(sensorValue2);

  Serial.println("  ");
  
  delay(1000);        // delay in between reads for stability
}
