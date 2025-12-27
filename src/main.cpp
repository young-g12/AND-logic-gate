#include <Arduino.h>

const int buttonPin1 = 2;
const int buttonPin2 = 4;
int buttonState = 0;

void setup() {
pinMode(7 , OUTPUT);
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
}

void loop() {
   buttonState = digitalRead(buttonPin1);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(7, HIGH);
  } else {
    // turn LED off:
    digitalWrite(7, LOW);
}
}

