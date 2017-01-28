/*
 * Anoise Simple
 * Prints the gross and smoothed value read from a potentiometer.
 *
 * The circuit:
 * * Potentiometer (generic) attached to Arduino pins as follows:
 * ---------------------------
 * | Potentiometer | Arduino |
 * ---------------------------
 * |      Vcc      |   5V    |
 * |     input     |   A0    |
 * |      Gnd      |   GND   |
 * ---------------------------
 * Note: It is not mandatory to use analog pins A0 of the Arduino
 * 
 * created 26 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * This example code is released into the MIT License.
 */

#include <anoise.h>

#define POTENTIOMETER A0

int val;

void setup() {
  Serial.begin(9600);
  Serial.println("Potentiometer");

  pinMode(POTENTIOMETER, INPUT);
  setRangeSize(5);
}

void loop() {
  val = analogRead(POTENTIOMETER);
  
  Serial.print(val);
  Serial.print(" | ");
  Serial.println(Smooth(val));
  
  delay(100);
}
