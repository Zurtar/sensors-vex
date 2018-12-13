#include "main.h"
#include "arm.h"
void lift(char motor, char bGroup){
  if(joystickGetDigital(joystick, bGroup, JOY_UP)==1){motorSet(motor, 127);}
  else if(joystickGetDigital(joystick, bGroup, JOY_DOWN)==1){motorSet(motor, -127);} 
  else {motorSet(liftMotor, 0);}
}
