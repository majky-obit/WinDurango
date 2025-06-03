#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentLocation.h"
#include "Windows.Xbox.Management.Deployment.ContentLocation.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentLocation::ContentLocation(hstring const& path)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> ContentLocation::InstallationInfos()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IContentMetadata ContentLocation::BundleMetadata()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo ContentLocation::DefaultInstallationInfo()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::ContentLocationContentType ContentLocation::ContentType()
    {
        throw hresult_not_implemented();
    }
    uint32_t ContentLocation::DiscNumber()
    {
        throw hresult_not_implemented();
    }
    uint32_t ContentLocation::DiscCount()
    {
        throw hresult_not_implemented();
    }
    hstring ContentLocation::DiscSetId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ContentLocation::PackageTitles()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> ContentLocation::HiddenInstallationInfos()
    {
        throw hresult_not_implemented();
    }
}
