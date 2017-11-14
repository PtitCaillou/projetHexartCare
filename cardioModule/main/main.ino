#include "cardio.h"

int dly;

void setup() {
  int led_0;
  int led_1;
  int led_2;
  int led_3;
  int led_4;
  int led_5;
  int led_6;
  int led_7;
  int led_8;
  int led_9;

  pinMode(led_0, OUTPUT);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
  pinMode(led_9, OUTPUT);
}

void loop() {
  gather();
}
