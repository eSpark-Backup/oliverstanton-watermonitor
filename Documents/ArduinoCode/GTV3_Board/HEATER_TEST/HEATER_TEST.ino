int heater = PC9;
int AUX_heater = PD9;




void setup () {

  pinMode(heater , OUTPUT);
  pinMode(AUX_heater , OUTPUT);
  
  
}

void loop () {
digitalWrite(heater, LOW);
digitalWrite(AUX_heater, LOW);


  delay (2000);

digitalWrite(heater, HIGH);
digitalWrite(AUX_heater, HIGH);

  delay (2000);
  
}
