# RobSIM algo

RobSIM algo is a collection of drivers to interact with the RobSIM simulator.

You can use this drivers and add your own algorithms to control the robot in the simulator.

## How to use

Your custom code should start on the `main.cpp` file. You can add your own code to control the robot in the simulator.

To interact with the simulation you can use the drivers located under `rsim_drivers`. For example to drive the robot forward you can use the following code:

in `main.cpp`:

```cpp
#include "main.h"

void setup() {
    MotorDriver::setDirectionClockWise(0); // Set the direction of the motor 0 to clockwise
    MotorDriver::setDirectionClockWise(1);  // Set the direction of the motor 1 to clockwise
}

void loop() {
    MotorDriver::setRPM(0, 100); // Set the RPM of the motor 0 to 100
    MotorDriver::setRPM(1, 100); // Set the RPM of the motor 1 to 100
}
```

## Requirements

To build the DLL you need to have the following installed:

- [make](https://www.gnu.org/software/make/)
- [gcc](https://gcc.gnu.org/)

## Build

To build the DLL you can run the following command, it will compile and generate the DLL in the `bin` folder, `bin/robsim_algo.dll`.

```bash
make
```

## Third-party libraries
