#include "SimpleRelay.h"

uint8_t relay1 = 3;


bool relay = false;

SimpleRelay::SimpleRelay(){

}

void SimpleRelay::init(){
  pinMode(relay1, OUTPUT);
}


void SimpleRelay::on(){

  digitalWrite(relay1, HIGH);
  relay = true;

}

void SimpleRelay::off(){

  digitalWrite(relay1, LOW);
  relay = false;

}


bool SimpleRelay::isOn(){
  return relay;
}
