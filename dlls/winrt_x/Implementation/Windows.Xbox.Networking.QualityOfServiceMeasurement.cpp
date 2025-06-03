#include "pch.h"
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.h"
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::QualityOfServiceMeasurementStatus QualityOfServiceMeasurement::Status()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::QualityOfServiceMetric QualityOfServiceMeasurement::Metric()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IPropertyValue QualityOfServiceMeasurement::MetricValue()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress QualityOfServiceMeasurement::SecureDeviceAddress()
    {
        throw hresult_not_implemented();
    }
}
