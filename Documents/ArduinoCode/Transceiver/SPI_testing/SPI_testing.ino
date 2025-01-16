#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver(2000, PE14, PE13);

void setup()
{
  Serial.begin(9600);
  driver.init();
}

void loop()
{
  uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];
  uint8_t buflen = sizeof(buf);

  if (driver.recv(buf, &buflen))
  {
    for (int i = 0; i < buflen; i++) {
      Serial.write(buf[i]);
    }
    Serial.write('\n');
  }
}
