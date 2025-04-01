#include <Servo.h>

Servo servo;//make 1 servo object to use

void setup() {

pinMode(D0,OUTPUT);
  servo.attach(D4);

}

void loop() {  
  servo.write(180); 
  delay(1000);
  
  servo.write(0);
  delay(1000);
}
