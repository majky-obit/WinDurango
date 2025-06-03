#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamChangeEventArgs::OrganizerId()
    {
        throw hresult_not_implemented();
    }
    hstring TeamChangeEventArgs::TournamentId()
    {
        throw hresult_not_implemented();
    }
    hstring TeamChangeEventArgs::TeamId()
    {
        throw hresult_not_implemented();
    }
}
