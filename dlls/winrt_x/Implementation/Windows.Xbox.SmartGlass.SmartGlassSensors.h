#pragma once
#include "Windows.Xbox.SmartGlass.SmartGlassSensors.g.h"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    struct SmartGlassSensors : SmartGlassSensorsT<SmartGlassSensors>
    {
        SmartGlassSensors() = default;

        winrt::Windows::Devices::Sensors::Accelerometer Accelerometer();
        winrt::Windows::Devices::Sensors::Compass Compass();
        winrt::Windows::Devices::Sensors::Gyrometer Gyrometer();
        winrt::Windows::Devices::Sensors::Inclinometer Inclinometer();
        winrt::Windows::Devices::Sensors::OrientationSensor OrientationSensor();
    };
}