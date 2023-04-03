#include <Arduino.h>
#include "test2.h"


test2::test2(int led_light13) {
  led_no=led_light13;
}
void test2::PinSetup() {
  pinMode(led_no,OUTPUT);
  
}

void test2::Blinker(){

  digitalWrite(led_no, HIGH);  
  delay(100);         
  digitalWrite(led_no, LOW);  
  delay(100);                
 
}  
void test2::print(){

  Serial.println("work it");



 
}