#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.MatchMetadata.h"
#include "Microsoft.Xbox.Services.Tournaments.MatchMetadata.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring MatchMetadata::Description()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MatchMetadata::StartTIme()
    {
        throw hresult_not_implemented();
    }
    bool MatchMetadata::IsBye()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MatchMetadata::OpposingTeamIds()
    {
        throw hresult_not_implemented();
    }
}
