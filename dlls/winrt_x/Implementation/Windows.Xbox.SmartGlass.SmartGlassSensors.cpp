#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassSensors.h"
#include "Windows.Xbox.SmartGlass.SmartGlassSensors.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    winrt::Windows::Devices::Sensors::Accelerometer SmartGlassSensors::Accelerometer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Compass SmartGlassSensors::Compass()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Gyrometer SmartGlassSensors::Gyrometer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Inclinometer SmartGlassSensors::Inclinometer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::OrientationSensor SmartGlassSensors::OrientationSensor()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}