#include "main.h"

bool doOnce = true;

void setup() {
    /*
    ################################
    ||                            ||
    ||    Your code goes here     ||
    ||                            ||
    ################################
    */
    auto result = SystemRSIM::print("SETUP: Hello, RSIM!");
}

void loop(double deltaTime) {
    /*
    ################################
    ||                            ||
    ||    Your code goes here     ||
    ||                            ||
    ################################
    */
    MotorDriver::setSpeedVal(0, 0.5);
    MotorDriver::setSpeedVal(1, 0.5);
}