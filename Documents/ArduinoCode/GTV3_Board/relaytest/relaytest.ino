int button = PD8;
int relay1 = PC7;
int relay2 = PC8;
int relay3 = PE10;
int relay4 = PA15;
int relay5 = PD2;



void setup () {
   Serial.begin(9600);
   pinMode(button , INPUT);
  
  pinMode(relay1 , OUTPUT);
  digitalWrite(relay1, LOW);
  pinMode(relay2 , OUTPUT);
  digitalWrite(relay2,LOW);
  pinMode(relay3 , OUTPUT);
  digitalWrite(relay3,LOW);
  pinMode(relay4 , OUTPUT);
  digitalWrite(relay4,LOW);
  pinMode(relay5 , OUTPUT);
  digitalWrite(relay5,LOW);
  
}

void loop () {

    while (digitalRead(button) == LOW)
   {
    Serial.println("low is Button");
    delay(1000);
    digitalWrite(relay1,HIGH);
    delay(1000);
    digitalWrite(relay2,HIGH);
    delay(1000);
    digitalWrite(relay3,HIGH);
    delay(1000);
    digitalWrite(relay4,HIGH);
    delay(1000);
    digitalWrite(relay5,HIGH);  
    delay(1000);  
      
   }
   
   Serial.println("high is Button");
   digitalWrite(relay1,LOW);
   digitalWrite(relay2,LOW);
   digitalWrite(relay3,LOW);
   digitalWrite(relay4,LOW);
   digitalWrite(relay5,LOW);
   
   }
