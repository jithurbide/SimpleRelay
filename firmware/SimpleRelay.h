#include "application.h"

#ifndef SimpleRelay_h
#define SimpleRelay_h

class RelayShield {

 public:

  RelayShield();
  void  init(void);
  void  on();
  void  off();
  bool isOn();

};


#endif SimpleRelay_h
