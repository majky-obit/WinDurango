#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::Find(winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByDeviceId(winrt::guid const& deviceId, winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByContentId(winrt::guid const& contentId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByProductId(winrt::guid const& productId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByTitleId(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByAllowedProductId(winrt::guid const& allowedProductId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindByPackageInstanceId(hstring const& packageInstanceId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindUniversalPackagesByFamilyName(hstring const& packageFamilyName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByAllowedPackageFamilyName(hstring const& allowedPackageFamilyName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindUnparented()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindByFullName(hstring const& fullName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByTitleSearchString(hstring const& searchString, uint32_t maxResults)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindGameHub(winrt::guid const& gameHubId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindPackagesForGameHub(winrt::guid const& gameHubId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
