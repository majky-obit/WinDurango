#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::Find(winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByDeviceId(winrt::guid const& deviceId, winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByContentId(winrt::guid const& contentId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByProductId(winrt::guid const& productId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByTitleId(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByAllowedProductId(winrt::guid const& allowedProductId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindByPackageInstanceId(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindUniversalPackagesByFamilyName(hstring const& packageFamilyName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByAllowedPackageFamilyName(hstring const& allowedPackageFamilyName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindUnparented()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindByFullName(hstring const& fullName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByTitleSearchString(hstring const& searchString, uint32_t maxResults)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindGameHub(winrt::guid const& gameHubId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindPackagesForGameHub(winrt::guid const& gameHubId)
    {
        throw hresult_not_implemented();
    }
}
