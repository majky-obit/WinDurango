#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassSensors.h"
#include "Windows.Xbox.SmartGlass.SmartGlassSensors.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    winrt::Windows::Devices::Sensors::Accelerometer SmartGlassSensors::Accelerometer()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Compass SmartGlassSensors::Compass()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Gyrometer SmartGlassSensors::Gyrometer()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Inclinometer SmartGlassSensors::Inclinometer()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::OrientationSensor SmartGlassSensors::OrientationSensor()
    {
        throw hresult_not_implemented();
    }
}