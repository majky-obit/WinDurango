#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageFullNameQuery.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageFullNameQuery.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    bool PackageFullNameQuery::IsInbox(hstring const& packageFullName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool PackageFullNameQuery::IsEra(hstring const& packageFullName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::PackageContentType PackageFullNameQuery::GetContentType(hstring const& packageFullName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool PackageFullNameQuery::IsGameCore(hstring const& packageFullName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
