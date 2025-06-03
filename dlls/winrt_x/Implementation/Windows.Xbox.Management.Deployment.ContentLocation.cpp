#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentLocation.h"
#include "Windows.Xbox.Management.Deployment.ContentLocation.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentLocation::ContentLocation(hstring const& path)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> ContentLocation::InstallationInfos()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IContentMetadata ContentLocation::BundleMetadata()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo ContentLocation::DefaultInstallationInfo()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::ContentLocationContentType ContentLocation::ContentType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t ContentLocation::DiscNumber()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t ContentLocation::DiscCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContentLocation::DiscSetId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ContentLocation::PackageTitles()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> ContentLocation::HiddenInstallationInfos()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
