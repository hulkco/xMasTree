/**
 * @file SchedulerBlink.ino
 * @version 1.0
 *
 * @section License
 * Copyright (C) 2015-2016, Mikael Patel
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * @section Description
 * This Arduino sketch uses the Scheduler library to blink four
 * LEDs with different speed. Each LED is controlled by a separate
 * task.
 */

#include <Scheduler.h>

const int led = 10;

void setup()
{
  pinMode(led, OUTPUT);

  Scheduler.start(setup1, loop1);
  Scheduler.start(setup2, loop2);
  Scheduler.start(setup3, loop3);
  Scheduler.start(setup4, loop4);
  
}

void loop()
{
  blink(led, 1000);
}
// Setup 1 ********************************************
const int led1 = 11;

void setup1()
{
  pinMode(led1, OUTPUT);
}

void loop1()
{
  blink(led1, 250);
}

// Setup 2 ********************************************
const int led2 = 12;

void setup2()
{
  pinMode(led2, OUTPUT);
}

void loop2()
{
  blink(led2, 500);
}
// Setup 3 ********************************************

const int led3 = 9;
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup3()
{
  pinMode(led3, OUTPUT);
}

void loop3()
{

  fade();
  //delay(30);
  //toblinky();
  
}

// Setup 4 ********************************************

int tonePin = 8;
void setup4() {

}

void loop4() {
    // Play midi
    midi();
}


void blink(int pin, unsigned int ms)
{
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
  delay(ms);
}

void fade(){
  // set the brightness of pin 7:
  analogWrite(led3, brightness);
  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(25);
  //toblinky();    
}

void midi() {

    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 242.1875);
    delay(269.097222222);
    delay(147.569444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 679.6875);
    delay(755.208333333);
    delay(286.458333333);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 349, 492.1875);
    delay(546.875);
    delay(286.458333333);
    tone(tonePin, 293, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 349, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 293, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 349, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 492.1875);
    delay(546.875);
    delay(703.125);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 415, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 415, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 311, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 311, 679.6875);
    delay(755.208333333);
    delay(286.458333333);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 679.6875);
    delay(755.208333333);
    delay(286.458333333);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 349, 492.1875);
    delay(546.875);
    delay(286.458333333);
    tone(tonePin, 293, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 349, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 293, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 349, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 492.1875);
    delay(546.875);
    delay(703.125);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 1187.5);
    delay(1319.44444444);
    delay(138.888888889);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 187.5);
    delay(208.333333333);
    tone(tonePin, 587, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 437.5);
    delay(486.111111111);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 187.5);
    delay(208.333333333);
    tone(tonePin, 587, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 562.5);
    delay(625.0);
    delay(208.333333333);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 493, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 329, 1000.0);
    delay(1111.11111111);
    delay(138.888888889);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 187.5);
    delay(208.333333333);
    tone(tonePin, 587, 312.5);
    delay(347.222222222);
    delay(69.4444444444);
    tone(tonePin, 523, 437.5);
    delay(486.111111111);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 587, 375.0);
    delay(416.666666667);
    delay(208.333333333);
    tone(tonePin, 523, 679.6875);
    delay(755.208333333);
    delay(494.791666667);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 437.5);
    delay(486.111111111);
    delay(555.555555556);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 679.6875);
    delay(755.208333333);
    delay(286.458333333);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 992.1875);
    delay(1102.43055556);
    delay(564.236111111);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 587, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 587, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 415, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 415, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 587, 679.6875);
    delay(755.208333333);
    delay(703.125);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 1000.0);
    delay(1111.11111111);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 242.1875);
    delay(269.097222222);
    delay(147.569444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 679.6875);
    delay(755.208333333);
    delay(286.458333333);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 349, 492.1875);
    delay(546.875);
    delay(286.458333333);
    tone(tonePin, 293, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 349, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 293, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 349, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 492.1875);
    delay(546.875);
    delay(703.125);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 415, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 415, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 311, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 311, 679.6875);
    delay(755.208333333);
    delay(286.458333333);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 679.6875);
    delay(755.208333333);
    delay(286.458333333);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 349, 492.1875);
    delay(546.875);
    delay(286.458333333);
    tone(tonePin, 293, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 349, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 293, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 349, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 492.1875);
    delay(546.875);
    delay(703.125);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 1187.5);
    delay(1319.44444444);
    delay(138.888888889);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 187.5);
    delay(208.333333333);
    tone(tonePin, 587, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 437.5);
    delay(486.111111111);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 187.5);
    delay(208.333333333);
    tone(tonePin, 587, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 562.5);
    delay(625.0);
    delay(208.333333333);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 493, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 329, 1000.0);
    delay(1111.11111111);
    delay(138.888888889);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 187.5);
    delay(208.333333333);
    tone(tonePin, 587, 312.5);
    delay(347.222222222);
    delay(69.4444444444);
    tone(tonePin, 523, 437.5);
    delay(486.111111111);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 587, 375.0);
    delay(416.666666667);
    delay(208.333333333);
    tone(tonePin, 523, 679.6875);
    delay(755.208333333);
    delay(494.791666667);
    tone(tonePin, 391, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 437.5);
    delay(486.111111111);
    delay(555.555555556);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 329, 679.6875);
    delay(755.208333333);
    delay(286.458333333);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 329, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 440, 992.1875);
    delay(1102.43055556);
    delay(564.236111111);
    tone(tonePin, 440, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 587, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 587, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 415, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 415, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 587, 679.6875);
    delay(755.208333333);
    delay(703.125);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(555.555555556);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 391, 250.0);
    delay(277.777777778);
    delay(555.555555556);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 440, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 493, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 523, 125.0);
    delay(138.888888889);
    delay(69.4444444444);
    tone(tonePin, 587, 250.0);
    delay(277.777777778);
    delay(138.888888889);
    tone(tonePin, 523, 2500.0);
    delay(2777.77777778);

}
