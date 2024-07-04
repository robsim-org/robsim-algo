#ifndef SYSTEM_RSIM_H
#define SYSTEM_RSIM_H

#include <string>

#include "returnOption.h"

namespace SystemRSIM {

typedef void (*CallbackType)(const char*);
CallbackType printCallback = nullptr;

// Function to register the callback
extern "C" __declspec(dllexport) void RegisterPrintCallback(CallbackType cb) {
    printCallback = cb;
}

/**
 * Receives the message and prints it
 *
 * @param message The message to print
 *
 * @return ReturnOption with success or error message
 *
 */
ReturnOption print(std::string message) {
    if (printCallback != nullptr) {
        printCallback(message.c_str());
        return ReturnOption(true);
    } else {
        return ReturnOption(false, "Callback not registered");
    }
}

// This is just a function to debug the communication between the simulation and the plugin
extern "C" {
__declspec(dllexport) int returnNumberTimesTwo(int value) {
    return value * 2;
}
}

}  // namespace SystemRSIM

#endif