#include "pch.h"
#include "Windows.Kinect.Body.h"
#include "Windows.Kinect.Body.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    int32_t Body::JointCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void Body::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::JointType, winrt::Windows::Kinect::Joint> Body::Joints()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::JointType, winrt::Windows::Kinect::JointOrientation> Body::JointOrientations()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DetectionResult Body::Engaged()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Expression, winrt::Windows::Kinect::DetectionResult> Body::Expressions()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Activity, winrt::Windows::Kinect::DetectionResult> Body::Activities()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Appearance, winrt::Windows::Kinect::DetectionResult> Body::Appearance()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::HandState Body::HandLeftState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingConfidence Body::HandLeftConfidence()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::HandState Body::HandRightState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingConfidence Body::HandRightConfidence()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameEdges Body::ClippedEdges()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t Body::TrackingId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool Body::IsTracked()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Point Body::Lean()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingState Body::LeanTrackingState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
