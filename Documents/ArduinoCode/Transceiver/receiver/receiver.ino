#include <RH_ASK.h>
#include <SPI.h>

const int push_switch = 3;
int state = 0;
RH_ASK driver(2000, PE14, PE13);

void setup()
{
  driver.init(); 
  pinMode(push_switch, INPUT);
}

void loop()
{
  if (digitalRead(push_switch) == HIGH && state == 1) {
    const char *msg = "hello";
    driver.send((uint8_t *)msg, strlen(msg));
    driver.waitPacketSent();
    delay(200);
    state = 0;
  }
  else if (digitalRead(push_switch) == LOW) {
    state = 1;
  }
}
