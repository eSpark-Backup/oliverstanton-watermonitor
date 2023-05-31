#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver(2000, -1, 14);

void setup()
{
 driver.init();
}

void loop()
{
    const char *msg = "hello";
    driver.send((uint8_t *)msg, strlen(msg));
    driver.waitPacketSent();
    delay(200);
}
