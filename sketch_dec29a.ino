#include <Stepper.h>
 
const int steps = 1024;
Stepper myStepper(steps,11,9,10,8); 
 
void setup() 
{
  myStepper.setSpeed(30); 
  Serial.begin(9600);     
}

void loop() {
  if (analogRead(A0) >= 520)
  {
    Serial.println("left");
    myStepper.step(steps);
  }
  else if(analogRead(A0) <= 500)
  {
    Serial.println("right");
    myStepper.step(steps * -1);
  }  
}
