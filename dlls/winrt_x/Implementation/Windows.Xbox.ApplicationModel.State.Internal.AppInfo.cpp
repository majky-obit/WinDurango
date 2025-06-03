#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.AppInfo.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.AppInfo.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo AppInfo::FindByAumid(hstring const& aumid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo> AppInfo::FindByTitleId(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
