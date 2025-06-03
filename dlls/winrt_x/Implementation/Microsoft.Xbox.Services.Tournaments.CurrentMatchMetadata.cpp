#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.CurrentMatchMetadata.h"
#include "Microsoft.Xbox.Services.Tournaments.CurrentMatchMetadata.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference CurrentMatchMetadata::GameSessionReference()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::MatchMetadata CurrentMatchMetadata::MatchDetails()
    {
        throw hresult_not_implemented();
    }
}
