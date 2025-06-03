#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallationInfo.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallationInfo.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentInstallationInfo::ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, winrt::guid const& contentId, hstring const& packageFamilyName, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Xbox::Management::Deployment::ConsoleGeneration const& generation, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    ContentInstallationInfo::ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, winrt::guid const& contentId, hstring const& packageFamilyName, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContentInstallationInfo::Path()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::guid ContentInstallationInfo::ContentId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IContentMetadata ContentInstallationInfo::Metadata()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContentInstallationInfo::OneStoreProductId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContentInstallationInfo::PackageFamilyName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentInstallationInfo::InstallByDefault()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
