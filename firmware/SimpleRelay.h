#include "application.h"

#ifndef RelayShield_h
#define RelayShield_h

class RelayShield {

 public:

  RelayShield();
  void  init(void);
  void  on();
  void  off();
  bool isOn();

};


#endif RelayShield_h
