#include <Arduino.h>

const int redPin = 21;
const int greenPin = 15;
const int yellowPin = 16;
const int delayTime = 10000; // 10 detik untuk merah dan hijau
const int yellowTime = 5000; // 5 detik untuk kuning

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

void loop() {
  // Nyalakan lampu merah
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  delay(delayTime);
  
  // Nyalakan lampu kuning
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(yellowTime);
  
  // Nyalakan lampu hijau
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  delay(delayTime);
}

