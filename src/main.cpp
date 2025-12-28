#include <Arduino.h>

const int buttonPin1 = 2;
const int buttonPin2 = 4;
const int ledPin1 = 7;
const int ledPin2 = 6;
const int ledPin3 = 8;
int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(buttonPin1, INPUT_PULLUP);
pinMode(buttonPin2, INPUT_PULLUP);
}

void loop() {
   buttonState1 = digitalRead(buttonPin1);
   buttonState2 = digitalRead(buttonPin2);

  // if (buttonState == HIGH) {
  //   // turn LED on:
  //   digitalWrite(ledPin, HIGH);
  // } else {
  //   // turn LED off:
  //   digitalWrite(ledPin, LOW);
  // }
   if (buttonState1 == HIGH && buttonState2 == HIGH) { 
    digitalWrite(ledPin3, HIGH);
  } else if (buttonState1 == HIGH) { 
     digitalWrite(ledPin1, HIGH);
  } else if (buttonState2 == HIGH) { 
    digitalWrite(ledPin2, HIGH);
   
  } else if (buttonState1 == LOW && buttonState2 == LOW) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  } 
}

