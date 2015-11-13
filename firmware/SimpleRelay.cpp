#include "RelayShield.h"

uint8_t relay1 = 3;


bool relay = false;

RelayShield::RelayShield(){

}

void RelayShield::init(){
  pinMode(relay1, OUTPUT);
}


void RelayShield::on(){

  digitalWrite(relay1, HIGH);
  relay = true;

}

void RelayShield::off(){

  digitalWrite(relay1, LOW);
  relay = false;

}


bool RelayShield::isOn(){
  return relay;
}
