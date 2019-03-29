/*
*How to operate DC motor using Arduino uno
*
*This is a very basic example which will help you to understand how a DC motor can be turn on and off using Arduino Uno.
*
*for more detail about this project please visit:https://arduinounomagic.blogspot.com/2019/03/how-to-operate-dc-motor-using-arduino.html#more
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/
const int motor=6;

void setup()
{
  pinMode(motor, OUTPUT);
  }

void loop()
{
  digitalWrite(motor, HIGH);
 delay(1000);
  digitalWrite(motor, LOW);
  delay(1000);
}
