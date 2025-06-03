#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentEnhancements.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentEnhancements.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    uint64_t ContentEnhancements::GetEnhancementSettings(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::EnhancementFeatureState ContentEnhancements::GetAutoHDREnabledGlobally()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetAutoHDRAllowedForGame(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetAutoHDREnabledForGame(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ContentEnhancements::SetAutoHDREnabledForGame(uint32_t titleId, bool isFeatureEnabled)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetPerformanceModeAllowedForGame(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetPerformanceModeEnabledForGame(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ContentEnhancements::SetPerformanceModeEnabledForGame(uint32_t titleId, bool isFeatureEnabled)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetPerformanceModeForGameRequires120Hz(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::PerformanceModeDetails ContentEnhancements::GetPerformanceModeDetailsForGame(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetAutoHDRAllowedForGameFromManifest(hstring const& aumid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetAutoHDREnabledForGameFromManifest(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentEnhancements::IsGen9AwareGame(winrt::guid const& legacyProductId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
