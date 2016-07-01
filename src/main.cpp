#include <Arduino.h>
#include <motr.h>

int MotorPin1 = 5;
int MotorPin2 = 6;

Amotor Motor(MotorPin1, MotorPin2); // Create motor object and connect to pins

void setup() { Motor.begin(); }

void loop() { Motor.Go(BACKWARDS, 100); }
