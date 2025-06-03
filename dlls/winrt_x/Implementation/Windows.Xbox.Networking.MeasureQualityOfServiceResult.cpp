#include "pch.h"
#include "Windows.Xbox.Networking.MeasureQualityOfServiceResult.h"
#include "Windows.Xbox.Networking.MeasureQualityOfServiceResult.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> MeasureQualityOfServiceResult::Measurements()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> MeasureQualityOfServiceResult::GetMeasurementsForDevice(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& address)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> MeasureQualityOfServiceResult::GetMeasurementsForMetric(winrt::Windows::Xbox::Networking::QualityOfServiceMetric const& metric)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement MeasureQualityOfServiceResult::GetMeasurement(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& address, winrt::Windows::Xbox::Networking::QualityOfServiceMetric const& metric)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
