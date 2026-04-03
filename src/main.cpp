#include <Arduino.h>
#include "server.hpp"

void setup() {
  Serial.begin(115200);

  Serial.println("connecting");
  Serial.println(connectToWiFi());
}

void loop() {
  
}