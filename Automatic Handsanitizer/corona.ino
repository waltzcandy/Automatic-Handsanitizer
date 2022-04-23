#include <Servo.h>
int sensor=18;

Servo myservo;

void setup() {
  // put your setup code here, to run once:
 pinMode(sensor,INPUT);
 myservo.attach(7);
}

void loop() {
  while(!(digitalRead(sensor))){
    delay(200);
    myservo.write(110);
    delay(2000);
  }

  myservo.write(160);

}
