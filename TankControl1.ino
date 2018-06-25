#include <AFMotor.h>
 
AF_DCMotor motor(4); // create motor #1
AF_DCMotor motor2(3);
 
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  
  motor.setSpeed(255);     // set the speed to 200/255
  motor2.setSpeed(255);
}
 
void loop() {
/*
  motor.run(FORWARD);      // turn it on going forward
  delay(1000);
  motor.run(RELEASE);      // stopped
  delay(1000);
  motor.run(BACKWARD);     // the other way
  delay(1000);
  motor.run(RELEASE);      // stopped
  delay(1000);
*/
/*
  motor.run(FORWARD);
  motor2.run(FORWARD);
  delay(1500);
  motor.run(RELEASE);
  motor2.run(RELEASE);
  delay(250);

  motor.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(1500);
  motor.run(RELEASE);
  motor2.run(RELEASE);
  delay(250);
  */

  motor.run(FORWARD);
  motor2.run(FORWARD);
  delay(3000);
  motor.run(RELEASE);
  motor2.run(RELEASE);
  delay(250);

  motor.run(FORWARD);
  motor2.run(BACKWARD);
  delay(3750);
  motor.run(RELEASE);
  motor2.run(RELEASE);
  delay(250);

   motor.run(FORWARD);
  motor2.run(FORWARD);
  delay(3000);
  motor.run(RELEASE);
  motor2.run(RELEASE);
  delay(250);
}



