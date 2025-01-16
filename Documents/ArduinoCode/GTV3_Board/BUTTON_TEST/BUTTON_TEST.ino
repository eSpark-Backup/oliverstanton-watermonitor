int button = PB2;
int button1 = PB3;
int button2 = PB4;
int button3 = PB5;
int button4 = PB6;
int button5 = PD8;


void setup () {
   Serial.begin(9600);
   pinMode(button , INPUT);
  pinMode(button1 , INPUT);
  pinMode(button2 , INPUT);
  pinMode(button3 , INPUT);
  pinMode(button4 , INPUT);
  pinMode(button5 , INPUT);
}

void loop () {
 
  int buttonState = digitalRead(button);
  int buttonState1 = digitalRead(button1);
  int buttonState2 = digitalRead(button2);
  int buttonState3 = digitalRead(button3);
  int buttonState4 = digitalRead(button4);
  int buttonState5 = digitalRead(button5);
  
  Serial.println("sw2=");
  Serial.println(buttonState);
   Serial.println("sw3=");
  Serial.println(buttonState1);
   Serial.println("sw4=");
  Serial.println(buttonState2);
   Serial.println("sw5=");
  Serial.println(buttonState3);
   Serial.println("sw6=");
  Serial.println(buttonState4);
   Serial.println("sw7=");
  Serial.println(buttonState5);
  
      
      delay(1000);
      
   }
