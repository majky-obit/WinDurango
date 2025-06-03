#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamChangeEventArgs::OrganizerId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TeamChangeEventArgs::TournamentId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TeamChangeEventArgs::TeamId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
