/*
Common functions to use in your program. To use, place this file into the same folder as your code
and include the entire following line just before your task main
#include "AdamCommonFunctions.c"
*/

void runMotor(tMotor myMotor, int speed, int time){
	/*
	Function to run a motor.
	Takes a motor, a integer of speed, and integer of time as parameters
	Runs that motor, at that speed, for that amount of time (in MS).
	Example: run motor LeftMotor at a speed of 63 for 10 seconds.
	runMotor(leftMotor, 63, 10000);
	*/
	int currentSpeed=motor[myMotor];
	motor[myMotor]=speed;
	wait1Msec(time);
	motor[myMotor]=currentSpeed;

}
