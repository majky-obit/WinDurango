#include "pch.h"
#include "Windows.Kinect.MultiSourceFrame.h"
#include "Windows.Kinect.MultiSourceFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void MultiSourceFrame::Close()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameReference MultiSourceFrame::ColorFrameReference()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameReference MultiSourceFrame::DepthFrameReference()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameReference MultiSourceFrame::BodyFrameReference()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameReference MultiSourceFrame::BodyIndexFrameReference()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameReference MultiSourceFrame::InfraredFrameReference()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
