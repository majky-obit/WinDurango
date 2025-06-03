#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.PreviousMatchMetadata.h"
#include "Microsoft.Xbox.Services.Tournaments.PreviousMatchMetadata.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult PreviousMatchMetadata::Result()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime PreviousMatchMetadata::EndTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::MatchMetadata PreviousMatchMetadata::MatchDetails()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
