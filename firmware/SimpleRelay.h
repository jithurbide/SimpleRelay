#ifndef SimpleRelay_h
#define SimpleRelay_h

#include "application.h"

typedef enum{
  CONNECT_TO_NO,
  CONNECT_TO_NC
}relayConnection;

class SimpleRelay {

 public:

  SimpleRelay();
  void  init(short relayPin);
  void  on();
  void  off();
  bool isOn();
private:
  relayConnection statRelay;
  int ON;
  int OFF;

};


#endif
