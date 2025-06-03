#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState TeamChangeSubscription::State()
    {
        throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::OrganizerId()
    {
        throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::TournamentId()
    {
        throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::TeamId()
    {
        throw hresult_not_implemented();
    }
}
