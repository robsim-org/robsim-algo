#ifndef DISTANCE_SENSOR_DRIVER_H
#define DISTANCE_SENSOR_DRIVER_H

#include "returnOption.h"

namespace DistanceSensorDriver {
/**
 * Receives the sensor index and returns the distance in mm
 *
 * @param sensorIndex The index of the sensor to get the distance
 *
 * @return ReturnOptionT with success or error message and the distance in mm
 */
ReturnOptionT<float> getDistance(int sensorIndex);

}  // namespace DistanceSensorDriver

#endif