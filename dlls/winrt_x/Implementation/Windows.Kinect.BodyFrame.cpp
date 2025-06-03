#include "pch.h"
#include "Windows.Kinect.BodyFrame.h"
#include "Windows.Kinect.BodyFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyFrame::Close()
    {
        throw hresult_not_implemented();
    }
    void BodyFrame::GetAndRefreshBodyData(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Kinect::Body> const& bodies)
    {
        throw hresult_not_implemented();
    }
    int32_t BodyFrame::BodyCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::Vector4 BodyFrame::FloorClipPlane()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan BodyFrame::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameSource BodyFrame::BodyFrameSource()
    {
        throw hresult_not_implemented();
    }
}
