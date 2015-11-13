#ifndef SimpleRelay_h
#define SimpleRelay_h

#include "application.h"

class SimpleRelay {

 public:

  SimpleRelay();
  void  init(short relayPin);
  void  on();
  void  off();
  bool isOn();

};


#endif
