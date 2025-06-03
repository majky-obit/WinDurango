#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.CreateMatchTicketResponse.h"
#include "Microsoft.Xbox.Services.Matchmaking.CreateMatchTicketResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    hstring CreateMatchTicketResponse::MatchTicketId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan CreateMatchTicketResponse::EstimatedWaitTime()
    {
        throw hresult_not_implemented();
    }
}
