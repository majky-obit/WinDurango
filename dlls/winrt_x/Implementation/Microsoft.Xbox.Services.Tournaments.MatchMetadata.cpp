#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.MatchMetadata.h"
#include "Microsoft.Xbox.Services.Tournaments.MatchMetadata.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring MatchMetadata::Description()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MatchMetadata::StartTIme()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MatchMetadata::IsBye()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MatchMetadata::OpposingTeamIds()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
