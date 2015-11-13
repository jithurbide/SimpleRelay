#include "SimpleRelay.h"

uint8_t relay1;


bool relay = false;

SimpleRelay::SimpleRelay(){

  relay1=1;

}

void SimpleRelay::init(short relayPin){
  relay1 = relayPin;
  pinMode(relay1, OUTPUT);
  // Relay off
  digitalWrite(relay1, HIGH);
  relay = false;
}


void SimpleRelay::on(){

  digitalWrite(relay1, LOW);
  relay = true;

}

void SimpleRelay::off(){

  digitalWrite(relay1, HIGH);
  relay = false;

}


bool SimpleRelay::isOn(){
  return relay;
}
