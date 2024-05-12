#include <Servo.h>

const int ledPin = 13;         // LED connected to digital pin 13
const int switchPin = 2;       // Switch connected to digital pin 2
const int potentiometerPin = A0;  // Potentiometer connected to analog pin A0
const int servoPin = 9;        // Servo motor connected to digital pin 9

Servo servoMotor;              // Create a servo object

void setup() {
  pinMode(ledPin, OUTPUT);     // Set the LED pin as output
  pinMode(switchPin, INPUT);   // Set the switch pin as input
  servoMotor.attach(servoPin); // Attach the servo to its pin
}

void loop() {
  // Digital read/write example
  int switchState = digitalRead(switchPin); // Read the state of the switch
  digitalWrite(ledPin, switchState);        // Set the LED according to switch state

  // Analog read/write example
  int potValue = analogRead(potentiometerPin); // Read the potentiometer value
  int servoAngle = map(potValue, 0, 1023, 0, 180); // Map the potentiometer value to servo angle (0 to 180)
  servoMotor.write(servoAngle);                 // Set the servo angle

  // Add a small delay to prevent flickering
  delay(10);
}
