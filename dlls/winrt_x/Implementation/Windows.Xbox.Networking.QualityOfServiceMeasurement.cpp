#include "pch.h"
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.h"
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::QualityOfServiceMeasurementStatus QualityOfServiceMeasurement::Status()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::QualityOfServiceMetric QualityOfServiceMeasurement::Metric()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IPropertyValue QualityOfServiceMeasurement::MetricValue()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress QualityOfServiceMeasurement::SecureDeviceAddress()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
