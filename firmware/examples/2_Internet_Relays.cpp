// This #include statement was automatically added by the Particle IDE.
#include "application.h"
#include "SimpleRelay/SimpleRelay.h"

// Create an instance of the RelayShield library, so we have something to talk to
SimpleRelay myRelay;

// Create prototypes of the Spark.functions we'll declare in setup()
int relayOn(String command);
int relayOff(String command);

void setup() {
    //.begin() sets up a couple of things and is necessary to use the rest of the functions
    myRelay.init(D7,CONNECT_TO_NC);

    // Use myRelays.begin(2); if you have the square, white RelayShield (from the Core)
    // to use, just add a '2' between the parentheses in the code above.

    // Register Spark.functions and assign them names
    Particle.function("relayOn", relayOn);
    Particle.function("relayOff", relayOff);
}

void loop() {
    // Nothing needed here, functions will just run when called
}

int relayOn(String command){
    // Ritual incantation to convert String into Int
//char inputStr[64];
  //  command.toCharArray(inputStr,64);
  //  int i = atoi(inputStr);

    // Turn the desired relay on
    myRelay.on();

    // Respond
    return 1;
}

int relayOff(String command){
    // Ritual incantation to convert String into Int
  //  char inputStr[64];
  //  command.toCharArray(inputStr,64);
  //  int i = atoi(inputStr);

    // Turn the desired relay off
    myRelay.off();

    // Respond
    return 1;
}
