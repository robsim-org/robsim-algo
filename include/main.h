#ifndef MAIN_H
#define MAIN_H

#include "rsim_drivers/distanceSensorDriver.h"
#include "rsim_drivers/gyroDriver.h"
#include "rsim_drivers/motorDriver.h"
#include "rsim_drivers/returnOption.h"
#include "rsim_drivers/systemRSIM.h"

/**
 * This function is called once at the beginning of the simulation
 *
 */
void setup();

/**
 * This function is called repeatedly every tick of the simulation
 *
 * @param deltaTime The time in seconds since the last call
 */
void loop(double deltaTime);

extern "C" {
__declspec(dllexport) void rsimSetup() {
    setup();
}

__declspec(dllexport) void rsimLoop(double deltaTime) {
    loop(deltaTime);
}
}

#endif