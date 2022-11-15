#include <Arduino.h>
#define in1 5   
#define in2 6
#define in3 7
#define in4 8
#define in5 9
#define in6 10
#define in7 11
#define in8 12

#define OUT1 A0
#define OUT2 A1
#define OUT3 A2
#define OUT4 A3
#define OUT5 A4
#define OUT6 A5
#define OUT7 3
#define OUT8 4



void setup() {
  // put your setup code here, to run once:
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(in4, INPUT);
  pinMode(in5, INPUT);
  pinMode(in6, INPUT);
  pinMode(in7, INPUT);
  pinMode(in8, INPUT);

  pinMode(OUT1, OUTPUT);
  pinMode(OUT2, OUTPUT);
  pinMode(OUT3, OUTPUT);
  pinMode(OUT4, OUTPUT);
  pinMode(OUT5, OUTPUT);
  pinMode(OUT6, OUTPUT);
  pinMode(OUT7, OUTPUT);
  pinMode(OUT8, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(OUT1, digitalRead(in1));
  digitalWrite(OUT2, digitalRead(in2));
  digitalWrite(OUT3, digitalRead(in3));
  digitalWrite(OUT4, digitalRead(in4));
  digitalWrite(OUT5, digitalRead(in5));
  digitalWrite(OUT6, digitalRead(in6));
  digitalWrite(OUT7, digitalRead(in7));
  digitalWrite(OUT8, digitalRead(in8));
  delay(20);
}