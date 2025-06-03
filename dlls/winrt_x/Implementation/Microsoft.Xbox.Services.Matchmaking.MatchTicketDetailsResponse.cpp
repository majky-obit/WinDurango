#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    winrt::Microsoft::Xbox::Services::Matchmaking::TicketStatus MatchTicketDetailsResponse::MatchStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MatchTicketDetailsResponse::EstimatedWaitTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Matchmaking::PreserveSessionMode MatchTicketDetailsResponse::PreserveSession()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MatchTicketDetailsResponse::TicketSession()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MatchTicketDetailsResponse::TargetSession()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MatchTicketDetailsResponse::TicketAttributes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
