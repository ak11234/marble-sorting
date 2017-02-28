/*
Common functions to use in your program. To use, place this file into the same folder as your code
and include the entire following line just before your task main
#include "AdamCommonFunctions.c"
*/

void runMotor(tMotor myMotor, int speed, int time){
	/*
	Function to run a motor.
	Takes a motor, a integer of speed, and integer of time as parameters
	*/
	int currentSpeed=motor[myMotor];
	motor[myMotor]=speed;
	wait1Msec(time);
	motor[myMotor]=currentSpeed;

}
