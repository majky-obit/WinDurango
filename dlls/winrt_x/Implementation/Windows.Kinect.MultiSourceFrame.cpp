#include "pch.h"
#include "Windows.Kinect.MultiSourceFrame.h"
#include "Windows.Kinect.MultiSourceFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void MultiSourceFrame::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameReference MultiSourceFrame::ColorFrameReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameReference MultiSourceFrame::DepthFrameReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameReference MultiSourceFrame::BodyFrameReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameReference MultiSourceFrame::BodyIndexFrameReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameReference MultiSourceFrame::InfraredFrameReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
