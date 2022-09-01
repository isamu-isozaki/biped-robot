#include <Keyboard.h>

#include <Servo.h>

Servo servos[6];
void setup() {
  // put your setup code here, to run once:
  servos[0].attach(13);
  servos[1].attach(12);
  servos[2].attach(11);
  servos[3].attach(10);
  servos[4].attach(9);
  servos[5].attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:
  servos[0].write(90);
  servos[1].write(90);
  servos[2].write(90);
  servos[3].write(90);
  servos[4].write(90);
  servos[5].write(90);
  delay(0.5);
}
