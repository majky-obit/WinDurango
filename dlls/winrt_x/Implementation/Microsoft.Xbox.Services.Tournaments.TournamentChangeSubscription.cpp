#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeSubscription.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState TournamentChangeSubscription::State()
    {
        throw hresult_not_implemented();
    }
    hstring TournamentChangeSubscription::OrganizerId()
    {
        throw hresult_not_implemented();
    }
    hstring TournamentChangeSubscription::TournamentId()
    {
        throw hresult_not_implemented();
    }
}
