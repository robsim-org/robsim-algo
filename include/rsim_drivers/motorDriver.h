#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

#include "returnOption.h"

namespace MotorDriver {
/**
 * Receives the motor index and the desired RPM and sets the motor to that RPM
 *
 * @param motorIndex The index of the motor to set the RPM
 * @param rpm The desired RPM
 *
 * @return ReturnOption with success or error message
 */
ReturnOption setRPM(int motorIndex, int rpm);

/**
 * Receives the motor index and sets the motor to spin clockwise
 *
 * @param motorIndex The index of the motor to set the direction
 *
 * @return ReturnOption with success or error message
 */
ReturnOption setDirectionClockWise(int motorIndex);

/**
 * Receives the motor index and sets the motor to spin counter clockwise
 *
 * @param motorIndex The index of the motor to set the direction
 *
 * @return ReturnOption with success or error message
 */
ReturnOption setDirectionCounterClockWise(int motorIndex);

/**
 * Receives the motor index and the target speed, a float between 0 and 1, and sets the motor to that speed
 *
 * @param motorIndex The index of the motor to stop
 * @param speedVal The target speed, a float between 0 and 1
 *
 * @return ReturnOption with success or error message
 */
ReturnOption setSpeedVal(int motorIndex, float speedVal);

/**
 * Receives the motor index and enables the motor
 *
 * @param motorIndex The index of the motor
 *
 * @return ReturnOption with success or error message
 */
ReturnOption enableMotor(int motorIndex);

/**
 * Receives the motor index and disables the motor
 *
 * @param motorIndex The index of the motor
 *
 * @return ReturnOption with success or error message
 */
ReturnOption disableMotor(int motorIndex);

}  // namespace MotorDriver

#endif