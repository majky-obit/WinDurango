#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipUriInfo.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipUriInfo.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    winrt::Windows::Foundation::Uri ContextualSearchGameClipUriInfo::Url()
    {
        throw hresult_not_implemented();
    }
    uint64_t ContextualSearchGameClipUriInfo::FileSize()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipUriType ContextualSearchGameClipUriInfo::UriType()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime ContextualSearchGameClipUriInfo::Expiration()
    {
        throw hresult_not_implemented();
    }
}
