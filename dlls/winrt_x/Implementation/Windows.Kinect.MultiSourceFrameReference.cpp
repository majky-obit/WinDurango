#include "pch.h"
#include "Windows.Kinect.MultiSourceFrameReference.h"
#include "Windows.Kinect.MultiSourceFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::MultiSourceFrame MultiSourceFrameReference::AcquireFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
