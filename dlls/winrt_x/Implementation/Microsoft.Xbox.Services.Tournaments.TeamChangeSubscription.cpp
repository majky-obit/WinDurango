#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState TeamChangeSubscription::State()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::OrganizerId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::TournamentId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::TeamId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
