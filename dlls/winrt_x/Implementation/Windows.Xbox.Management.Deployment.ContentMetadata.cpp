#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadata.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadata.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData)
    {
        throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames)
    {
        throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames)
    {
        throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames, winrt::guid const& gameHubId, bool isGameHub)
    {
        throw hresult_not_implemented();
    }
    hstring ContentMetadata::Name()
    {
        throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::ProductId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::LogoUri()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::SmallLogoUri()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::WideLogoUri()
    {
        throw hresult_not_implemented();
    }
    hstring ContentMetadata::DownloadUri()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::CatalogType ContentMetadata::CatalogType()
    {
        throw hresult_not_implemented();
    }
    uint64_t ContentMetadata::Size()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::MetadataSource ContentMetadata::MetadataSource()
    {
        throw hresult_not_implemented();
    }
    uint32_t ContentMetadata::TitleId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> ContentMetadata::RelatedMedia()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::GameAttributes ContentMetadata::Attributes()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ContentMetadata::RelatedMediaFamilyNames()
    {
        throw hresult_not_implemented();
    }
    hstring ContentMetadata::Ratings()
    {
        throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::SiblingId()
    {
        throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::VariantId()
    {
        throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::GameHubId()
    {
        throw hresult_not_implemented();
    }
    bool ContentMetadata::IsGameHub()
    {
        throw hresult_not_implemented();
    }
}
