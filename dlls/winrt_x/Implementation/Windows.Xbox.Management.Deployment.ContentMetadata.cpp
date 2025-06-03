#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadata.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadata.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames, winrt::guid const& gameHubId, bool isGameHub)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContentMetadata::Name()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::ProductId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::LogoUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::SmallLogoUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::WideLogoUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContentMetadata::DownloadUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::CatalogType ContentMetadata::CatalogType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t ContentMetadata::Size()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::MetadataSource ContentMetadata::MetadataSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t ContentMetadata::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> ContentMetadata::RelatedMedia()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::GameAttributes ContentMetadata::Attributes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ContentMetadata::RelatedMediaFamilyNames()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContentMetadata::Ratings()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::SiblingId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::VariantId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::GameHubId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ContentMetadata::IsGameHub()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
