#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeSubscription.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState TournamentChangeSubscription::State()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TournamentChangeSubscription::OrganizerId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TournamentChangeSubscription::TournamentId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
