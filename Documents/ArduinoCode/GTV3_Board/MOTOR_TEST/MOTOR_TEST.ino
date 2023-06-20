int button = PB6;
int relay1 = PB8;
int relay2 = PB7;
int enab = PC12;
//int relay2 = PC8;
//int relay3 = PE10;
//int relay4 = PA15;
//int relay5 = PD2;



void setup () {
//   Serial.begin(9600);
//   pinMode(button , INPUT);
//   
   pinMode(enab ,  OUTPUT);
   digitalWrite(enab, HIGH);
   
  pinMode(relay1 , OUTPUT);
  pinMode(relay2 , OUTPUT);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  //pinMode(relay2 , OUTPUT);
  //digitalWrite(relay2,LOW);
  //pinMode(relay3 , OUTPUT);
  //digitalWrite(relay3,LOW);
 // pinMode(relay4 , OUTPUT);
  //digitalWrite(relay4,LOW);
  //pinMode(relay5 , OUTPUT);
  //digitalWrite(relay5,LOW);
  
}

void loop () {
digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);

  delay (5000);

  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);

  delay (5000);
  
}
