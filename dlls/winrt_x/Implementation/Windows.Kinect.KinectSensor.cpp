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
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token KinectSensor::IsPausedChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::KinectSensor, winrt::Windows::Kinect::IsPausedChangedEventArgs> const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void KinectSensor::IsPausedChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
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
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameSource KinectSensor::DepthFrameSource()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameSource KinectSensor::BodyFrameSource()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource KinectSensor::BodyIndexFrameSource()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameSource KinectSensor::InfraredFrameSource()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioSource KinectSensor::AudioSource()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::MultiSourceFrameReader KinectSensor::OpenMultiSourceFrameReader(winrt::Windows::Kinect::FrameSourceTypes const& enabledFrameSourceTypes)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::CoordinateMapper KinectSensor::CoordinateMapper()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring KinectSensor::UniqueKinectId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
