#include "pch.h"
#include "Windows.Kinect.PropertyChangedEventArgs.h"
#include "Windows.Kinect.PropertyChangedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    hstring PropertyChangedEventArgs::PropertyName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
