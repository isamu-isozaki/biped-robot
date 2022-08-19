#include <Keyboard.h>

#include <Servo.h>

Servo servos[1];
void setup() {
  // put your setup code here, to run once:
  servos[0].attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  servos[0].write(90);
  delay(0.5);
}
