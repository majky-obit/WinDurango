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
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token KinectSensor::IsPausedChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::KinectSensor, winrt::Windows::Kinect::IsPausedChangedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void KinectSensor::IsPausedChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void KinectSensor::Open()
    {
        Logger::Warning("[KinectSensor] Open\n");
    }
    void KinectSensor::Close()
    {
        Logger::Warning("[KinectSensor] Close\n");
    }
    bool KinectSensor::IsOpen()
    {
        Logger::Warning("[KinectSensor] IsOpen\n");
        return false;
    }
    bool KinectSensor::IsPaused()
    {
        Logger::Warning("[KinectSensor] IsPaused\n");
        return false;
    }
    winrt::Windows::Kinect::ColorFrameSource KinectSensor::ColorFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameSource KinectSensor::DepthFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameSource KinectSensor::BodyFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource KinectSensor::BodyIndexFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameSource KinectSensor::InfraredFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioSource KinectSensor::AudioSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::MultiSourceFrameReader KinectSensor::OpenMultiSourceFrameReader(winrt::Windows::Kinect::FrameSourceTypes const& enabledFrameSourceTypes)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::CoordinateMapper KinectSensor::CoordinateMapper()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring KinectSensor::UniqueKinectId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
