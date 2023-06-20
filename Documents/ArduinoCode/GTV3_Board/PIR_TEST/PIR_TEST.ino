int button = PB9;



void setup () {
   Serial.begin(9600);
   pinMode(button , INPUT);
  
  
}

void loop ()
{
int j = digitalRead(button);
   
   
    Serial.println(j);
  
      
      
 
   }
