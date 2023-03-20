#include <Servo.h>

const int PWM_WAITING_TIME = 1000; // in MICROsecunds
const int MAX_DEFLECTION = 60

//input pins
int throttlePin = 7;
int pitchPin = 8;
int rollPin = 9;
int yawPin = 10;
// What is it pitch, roll and yaw? Look at this: https://pl.wikipedia.org/wiki/K%C4%85ty_RPY

//output pins
int rightAileronPin = 1;
int leftAilintPin = 2;
int rightStabilizerPin = 3;
int leftStabilizerPin = 4;
int rudderPin = 5;
int engineThrustPin= 6;

//values
int throttleValue;
int pitchValue;
int rollValue;
int throttleValue;
int yawValue;

Servo engineThrust
Servo rightAileron
Servo leftAileron
Servo rightStabilizer
Servo leftStabilizer
Servo rudder

void setup() {
  init();
  flyControl();
}

void loop() {
  //zebrac inputy
  //obrobic inputy
  //
  //sterowanie 

}

void collectInputs(){
  int fillTime = pulseIn(throttlePin, HIGH, PWMwaitingTime); 
  int PWMValue = map(fillTime, 0, PWMwaitingTime, 0, 255);
  //do przerobienia na funkcje per input
}

void initServo(){
  rightAileron.attach(rightAileronPin);
  leftAileron.attach(leftAileronPin);
  rightStabilizer.attach(rightStabilizerPni);
  leftStabilizer.attach(leftStabilintPin);
  rudder.attach(rudderPin);
  engineThrust.attach(engineThrust);
}

void init(){
  initServo();
}

void flyControl(){
  rightAileron.write(MAX_DEFLECTION);
  leftAileron.write(MAX_DEFLECTION);
  rightStabilizer.write(MAX_DEFLECTION);
  leftStabilizer.write(MAX_DEFLECTION);
  rudder.write(MAX_DEFLECTION);
  engineThrust.write(MAX_DEFLECTION);

  delay(2000);

  rightAileron.write(-MAX_DEFLECTION);
  leftAileron.write(-MAX_DEFLECTION);
  rightStabilizer.write(-MAX_DEFLECTION);
  leftStabilizer.write(-MAX_DEFLECTION);
  rudder.write(-MAX_DEFLECTION);
  engineThrust.write(-MAX_DEFLECTION);
}
