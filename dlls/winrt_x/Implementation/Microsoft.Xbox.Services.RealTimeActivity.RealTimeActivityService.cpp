#include "pch.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    void RealTimeActivityService::Activate()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void RealTimeActivityService::Deactivate()
    {
        Logger::Warning("[RealTimeActivityService] Deactivate (function is stubbed)\n");
    }
    winrt::event_token RealTimeActivityService::RealTimeActivityConnectionStateChange(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityConnectionState> const& __param0)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void RealTimeActivityService::RealTimeActivityConnectionStateChange(winrt::event_token const& __param0) noexcept
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token RealTimeActivityService::RealTimeActivitySubscriptionError(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionErrorEventArgs> const& __param0)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void RealTimeActivityService::RealTimeActivitySubscriptionError(winrt::event_token const& __param0) noexcept
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token RealTimeActivityService::RealTimeActivityResync(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityResyncEventArgs> const& __param0)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void RealTimeActivityService::RealTimeActivityResync(winrt::event_token const& __param0) noexcept
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
