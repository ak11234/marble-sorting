#pragma config(Motor,  port3,           dispenseGate,  tmotorServoStandard, openLoop)
#pragma config(Motor,  port2,           lightGate,     tmotorServoStandard, openLoop)
task main()
{

	while (true){
		motor[lightGate]=0;
		wait1Msec(250);
		motor[dispenseGate]=80;
		wait1Msec(500);
		motor[dispenseGate]=0;
		wait1Msec(250);
		motor[lightGate]=127;
		wait1Msec(750);
	}
}
