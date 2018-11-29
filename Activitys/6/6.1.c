#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    pot,            sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  LimitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashLight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           centerMotor,   tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
task main()
{
	untilPotentiometerGreaterThan(200,pot); //Waits Untill Potentiometer Named pot is greater than 200
	startMotor(leftMotor, 127);							//Start  Left Motor Full Power
	wait(5);																//Waits 5 seconds
	stopMotor(leftMotor);                   //Stops Left Motor
	untilDark(700,lightSensor);							//waits Until lightSensor is Covered
	startMotor(leftMotor,-127);							//Starts Left Motor In Reverse
	wait(5);																//Waits 5 Seconds
	stopMotor(leftMotor);										//Stop Left Motor
}
