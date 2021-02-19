/*3D Design - Project 1 - Sprint Challenge 2 Code 
 * Motified by Cole Beattie
 * Motified from ServoMotors.pdf (inclass presentation)
 * This code rotates the motor between 0-180 degrees
 * Objects included cardboard, markers, paint brush, paint, paper plate and pompoms.
 */


#include <Servo.h>


Servo myservo;


void setup() {
/*this is the pin the yellow wire goes 
into to connect the UNO to the servo*/
myservo.attach(9); 
}


void loop(){
/*this is the degrees the servo arm is set at. 
Changes for each object use */
myservo.write(180); 
}
