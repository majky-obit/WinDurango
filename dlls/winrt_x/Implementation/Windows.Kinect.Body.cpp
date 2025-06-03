#include "pch.h"
#include "Windows.Kinect.Body.h"
#include "Windows.Kinect.Body.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    int32_t Body::JointCount()
    {
        throw hresult_not_implemented();
    }
    void Body::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::JointType, winrt::Windows::Kinect::Joint> Body::Joints()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::JointType, winrt::Windows::Kinect::JointOrientation> Body::JointOrientations()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DetectionResult Body::Engaged()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Expression, winrt::Windows::Kinect::DetectionResult> Body::Expressions()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Activity, winrt::Windows::Kinect::DetectionResult> Body::Activities()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Appearance, winrt::Windows::Kinect::DetectionResult> Body::Appearance()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::HandState Body::HandLeftState()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingConfidence Body::HandLeftConfidence()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::HandState Body::HandRightState()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingConfidence Body::HandRightConfidence()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameEdges Body::ClippedEdges()
    {
        throw hresult_not_implemented();
    }
    uint64_t Body::TrackingId()
    {
        throw hresult_not_implemented();
    }
    bool Body::IsTracked()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Point Body::Lean()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingState Body::LeanTrackingState()
    {
        throw hresult_not_implemented();
    }
}
