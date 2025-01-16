int button = PB2;
int button1 = PB3;
int button2 = PB5;
int led1 = PC13;
int led2 = PA6;
int led3 = PE8;


void setup () {
   Serial.begin(9600);
   pinMode(button , INPUT);
  pinMode(button1 , INPUT);
  pinMode(button2 , INPUT);
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);
}

void loop () {
 
  int buttonState = digitalRead(button);
  int buttonState1 = digitalRead(button1);
  int buttonState2 = digitalRead(button2);
  
 if (buttonState == LOW) {
    digitalWrite(led1, LOW);
  }
   else {
    digitalWrite(led1, HIGH);
  }
   if (buttonState1 == LOW) {
    digitalWrite(led2, LOW);
  }
   else {
    digitalWrite(led2, HIGH);
  }
   if (buttonState2 == LOW) {
    digitalWrite(led3, LOW);
  }
   else {
    digitalWrite(led3, HIGH);
  }
      
  
      
   }
