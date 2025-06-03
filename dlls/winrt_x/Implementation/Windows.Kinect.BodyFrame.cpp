#include "pch.h"
#include "Windows.Kinect.BodyFrame.h"
#include "Windows.Kinect.BodyFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyFrame::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyFrame::GetAndRefreshBodyData(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Kinect::Body> const& bodies)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    int32_t BodyFrame::BodyCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::Vector4 BodyFrame::FloorClipPlane()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan BodyFrame::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameSource BodyFrame::BodyFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
