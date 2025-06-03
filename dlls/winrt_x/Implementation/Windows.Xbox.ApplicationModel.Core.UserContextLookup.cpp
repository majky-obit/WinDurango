#include "pch.h"
#include "Windows.Xbox.ApplicationModel.Core.UserContextLookup.h"
#include "Windows.Xbox.ApplicationModel.Core.UserContextLookup.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::Core::implementation
{
    void UserContextLookup::RefreshUserContext(hstring const& aumid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void UserContextLookup::GetCurrentUserContext(hstring const& aumid, winrt::Windows::Xbox::System::User& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void UserContextLookup::NotifyUserContextChanged(uint32_t userId, uint32_t userSequenceId)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
