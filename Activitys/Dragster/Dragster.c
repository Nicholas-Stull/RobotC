#pragma config(Sensor, dgtl1,  startButton,    sensorTouch)
#pragma config(Motor,  port3,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port2,           leftmotor,     tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	untilBump(startButton);         //Waits untill The button is pressed.
	startMotor(rightMotor,127);     //starts Right Motor
	startMotor(leftmotor,127);      //starts left Motor
	wait(10);                       //waits 10 seconds
	stopMotor(leftmotor);           //Stops left Motor
	stopMotor(rightMotor);          //stops right Motor
	}
