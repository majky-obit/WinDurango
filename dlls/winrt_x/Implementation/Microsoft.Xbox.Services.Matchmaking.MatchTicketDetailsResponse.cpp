#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    winrt::Microsoft::Xbox::Services::Matchmaking::TicketStatus MatchTicketDetailsResponse::MatchStatus()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MatchTicketDetailsResponse::EstimatedWaitTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Matchmaking::PreserveSessionMode MatchTicketDetailsResponse::PreserveSession()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MatchTicketDetailsResponse::TicketSession()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MatchTicketDetailsResponse::TargetSession()
    {
        throw hresult_not_implemented();
    }
    hstring MatchTicketDetailsResponse::TicketAttributes()
    {
        throw hresult_not_implemented();
    }
}
