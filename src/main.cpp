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
    if (doOnce) {
        auto result = SystemRSIM::print("LOOP: Hello, RSIM!");
        doOnce = false;
    }
}