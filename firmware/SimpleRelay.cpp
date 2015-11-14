#include "SimpleRelay.h"

uint8_t relay1;


bool relay = false;

SimpleRelay::SimpleRelay(){

  relay1=1;

}

void SimpleRelay::init(short relayPin, relayConnection conTo){
  relay1 = relayPin;
  pinMode(relay1, OUTPUT);

  // send low to be ON
  switch(conTo)
  {
    case CONNECT_TO_NO:
      //on when low
      OFF = HIGH;
      ON = LOW;
    break;
    case CONNECT_TO_NC:
    // on when HIGH
    ON = HIGH;
    OFF = LOW;
    break;
  }
  // Relay off
  digitalWrite(relay1, OFF);
  relay = false;
}


void SimpleRelay::on(){
digitalWrite(relay1, ON);

  relay = true;

}

void SimpleRelay::off(){

  digitalWrite(relay1, OFF);
  relay = false;

}


bool SimpleRelay::isOn(){
  return relay;
}
