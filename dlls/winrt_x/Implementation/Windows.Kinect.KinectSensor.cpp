#include "pch.h"
#include "Windows.Kinect.KinectSensor.h"
#include "Windows.Kinect.KinectSensor.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::KinectSensor KinectSensor::GetDefault()
    {
        return winrt::make<KinectSensor>( );
    }
    winrt::Windows::Foundation::Collections::IObservableMap<hstring, winrt::Windows::Kinect::KinectSensor> KinectSensor::Sensors()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token KinectSensor::IsPausedChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::KinectSensor, winrt::Windows::Kinect::IsPausedChangedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void KinectSensor::IsPausedChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    void KinectSensor::Open()
    {
        printf("[KinectSensor] Open\n");
    }
    void KinectSensor::Close()
    {
        printf("[KinectSensor] Close\n");
    }
    bool KinectSensor::IsOpen()
    {
        printf("[KinectSensor] IsOpen\n");
        return false;
    }
    bool KinectSensor::IsPaused()
    {
        printf("[KinectSensor] IsPaused\n");
        return false;
    }
    winrt::Windows::Kinect::ColorFrameSource KinectSensor::ColorFrameSource()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameSource KinectSensor::DepthFrameSource()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameSource KinectSensor::BodyFrameSource()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource KinectSensor::BodyIndexFrameSource()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameSource KinectSensor::InfraredFrameSource()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioSource KinectSensor::AudioSource()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::MultiSourceFrameReader KinectSensor::OpenMultiSourceFrameReader(winrt::Windows::Kinect::FrameSourceTypes const& enabledFrameSourceTypes)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::CoordinateMapper KinectSensor::CoordinateMapper()
    {
        throw hresult_not_implemented();
    }
    hstring KinectSensor::UniqueKinectId()
    {
        throw hresult_not_implemented();
    }
}
