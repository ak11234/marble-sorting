/*
@Author Adam Kalman

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
int classifyMarble(int senseVal){
	/*
	Function to figure out what marble you have over a light sensor.
	To use, pass it an integer of the light sensor value, and it will return a number 0-3.
	That 0,1,2,3 represents which marble you have.
	See code below to see which number corresponds to which marble.
	*/
		int marbleLightValues[3]; //You should test your own values. These numbers worked for OUR machine, but it might not for yours
		marbleLightValues[0]=38; //Clear marble
		marbleLightValues[1]=775; //Metal
		marbleLightValues[2]=978; //Black
		for (int k=0; k<=2; k++){
			if (senseVal>marbleLightValues[k]-100 && senseVal<marbleLightValues[k]+100){
				return k;
			}
	}

		return 3; //No match
}
