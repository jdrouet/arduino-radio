#include "RH_ASK.h"
#include <SPI.h>

#define RF_MESSAGE_SIZE 80
#define RF_SPEED 2000
#define RF_RX_PIN 11
#define RF_TX_PIN 12
#define RF_REPEAT 5
#define SERIAL_SPEED 4800
#define SLEEP_DELAY 2000

RH_ASK driver(RF_SPEED, RF_RX_PIN, RF_TX_PIN, 0);

void setup() {
  Serial.begin(SERIAL_SPEED);
  if (!driver.init()) {
    Serial.println("init failed");
  }
}

void loop()
{
  uint8_t buf[RF_MESSAGE_SIZE];
  uint8_t buflen = sizeof(buf);
  if (driver.recv(buf, &buflen)) {
    int i;
    Serial.print("Message: ");
    Serial.println((char*)buf);
  }
}