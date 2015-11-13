// This #include statement was automatically added by the Particle IDE.
#include "application.h"
#include "SimpleRelay/SimpleRelay.h"

// Create an instance of the RelayShield library, so we have something to talk to
SimpleRelay myRelay;

void setup() {
    // .begin() sets up a couple of things and is necessary to use the rest of the functions
    myRelay.init();

    // Use myRelays.begin(2); if you have the square, white RelayShield (from the Core)
    // to use, just add a '2' between the parentheses in the code above.
}

void loop() {
    // If relay1 is on, then turn it off


    if(myRelay.isOn()){    // myRelays.isOn(1) will return TRUE if relay 1 on and FALSE if it's off
        myRelay.off();     // myRelays.off(#) will switch relay # off
    }

    // If it wasn't already on, then turn it on
    else{
        myRelay.on();      // myRelays.on(#) will switch relay # on
    }

    // Change it once a second
    delay(1000);
}
