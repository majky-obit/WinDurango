#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentCompatibility.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentCompatibility.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::hresult ContentCompatibility::IsContentCompatible(winrt::guid const& contentId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::hresult ContentCompatibility::IsContentCompatible(hstring const& productId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t ContentCompatibility::GetQuickResumeFlags(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentCompatibility::IsQuickResumeAllowedForEra(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentCompatibility::IsQuickResumeBlockedForGameCore(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::hresult ContentCompatibility::IsXbox360ContentCompatible(winrt::guid const& legacyProductId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContentCompatibility::GetXbox360StoreIdFromContentId(winrt::guid const& contentId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentCompatibility::IsQuickResumeBlockedForServer(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t ContentCompatibility::GetMacIdBehaviorForTitleOnServer(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
