#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipsResult.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipsResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipsResult> ContextualSearchGameClipsResult::GetNextAsync(uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClip> ContextualSearchGameClipsResult::Items()
    {
        throw hresult_not_implemented();
    }
}
