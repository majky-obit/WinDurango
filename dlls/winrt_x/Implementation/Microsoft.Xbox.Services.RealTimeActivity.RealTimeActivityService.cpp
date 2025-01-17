#include "pch.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    void RealTimeActivityService::Activate()
    {
		printf("[RealTimeActivityService] Activate called\n");
    }
    void RealTimeActivityService::Deactivate()
    {
		printf("[RealTimeActivityService] Deactivate called\n");
    }
    winrt::event_token RealTimeActivityService::RealTimeActivityConnectionStateChange(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityConnectionState> const& __param0)
    {
		printf("[RealTimeActivityService] RealTimeActivityConnectionStateChange called\n");
		return {};
    }
    void RealTimeActivityService::RealTimeActivityConnectionStateChange(winrt::event_token const& __param0) noexcept
    {
		printf("[RealTimeActivityService] RealTimeActivityConnectionStateChange called\n");
    }
    winrt::event_token RealTimeActivityService::RealTimeActivitySubscriptionError(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionErrorEventArgs> const& __param0)
    {
		printf("[RealTimeActivityService] RealTimeActivitySubscriptionError called\n");
        return {};
    }
    void RealTimeActivityService::RealTimeActivitySubscriptionError(winrt::event_token const& __param0) noexcept
    {
		printf("[RealTimeActivityService] RealTimeActivitySubscriptionError called\n");
    }
    winrt::event_token RealTimeActivityService::RealTimeActivityResync(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityResyncEventArgs> const& __param0)
    {
		printf("[RealTimeActivityService] RealTimeActivityResync called\n");
        return {};
    }
    void RealTimeActivityService::RealTimeActivityResync(winrt::event_token const& __param0) noexcept
    {
		printf("[RealTimeActivityService] RealTimeActivityResync called\n");
    }
}
