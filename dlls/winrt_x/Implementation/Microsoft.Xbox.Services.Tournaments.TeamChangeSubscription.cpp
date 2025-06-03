#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState TeamChangeSubscription::State()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::OrganizerId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::TournamentId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::TeamId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
