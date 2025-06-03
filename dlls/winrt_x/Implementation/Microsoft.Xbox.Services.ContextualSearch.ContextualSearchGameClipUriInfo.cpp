#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipUriInfo.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipUriInfo.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    winrt::Windows::Foundation::Uri ContextualSearchGameClipUriInfo::Url()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t ContextualSearchGameClipUriInfo::FileSize()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipUriType ContextualSearchGameClipUriInfo::UriType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime ContextualSearchGameClipUriInfo::Expiration()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
