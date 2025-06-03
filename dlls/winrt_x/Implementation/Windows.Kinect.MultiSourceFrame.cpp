#include "pch.h"
#include "Windows.Kinect.MultiSourceFrame.h"
#include "Windows.Kinect.MultiSourceFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void MultiSourceFrame::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameReference MultiSourceFrame::ColorFrameReference()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameReference MultiSourceFrame::DepthFrameReference()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameReference MultiSourceFrame::BodyFrameReference()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameReference MultiSourceFrame::BodyIndexFrameReference()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameReference MultiSourceFrame::InfraredFrameReference()
    {
        throw hresult_not_implemented();
    }
}
