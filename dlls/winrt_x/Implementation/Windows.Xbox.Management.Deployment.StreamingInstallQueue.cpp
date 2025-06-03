#include "pch.h"
#include "Windows.Xbox.Management.Deployment.StreamingInstallQueue.h"
#include "Windows.Xbox.Management.Deployment.StreamingInstallQueue.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> StreamingInstallQueue::GetOrderedPackageInstanceIds()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IStreamingPackage StreamingInstallQueue::GetStreamingPackage(hstring const& packageInstanceId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token StreamingInstallQueue::QueueChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::IStreamingQueueChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void StreamingInstallQueue::QueueChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token StreamingInstallQueue::StreamingPackageStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::IStreamingPackageStateChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void StreamingInstallQueue::StreamingPackageStateChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
