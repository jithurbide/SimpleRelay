#ifndef SimpleRelay_h
#define SimpleRelay_h

#include "application.h"

class RelayShield {

 public:

  RelayShield();
  void  init(void);
  void  on();
  void  off();
  bool isOn();

};


#endif
