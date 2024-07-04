#ifndef GYRO_DRIVER_H
#define GYRO_DRIVER_H

#include "returnOption.h"

namespace GyroDriver {
/**
 * Receives the gyro index and returns the angle in degrees (0 to 360)
 *
 * @param gyroIndex The index of the gyro to get the angle
 *
 * @return ReturnOptionT with success or error message and the angle in degrees
 */
ReturnOptionT<float> getRotation(int gyroIndex);

}  // namespace GyroDriver

#endif