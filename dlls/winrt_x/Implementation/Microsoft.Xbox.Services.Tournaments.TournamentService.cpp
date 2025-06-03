#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentService.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TournamentRequestResult> TournamentService::GetTournamentsAsync(winrt::Microsoft::Xbox::Services::Tournaments::TournamentRequest request)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::Tournament> TournamentService::GetTournamentDetailsAsync(hstring organizerId, hstring tournamentId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TeamRequestResult> TournamentService::GetTeamsAsync(winrt::Microsoft::Xbox::Services::Tournaments::TeamRequest request)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TeamInfo> TournamentService::GetTeamDetailsAsync(hstring organizerId, hstring tournamentId, hstring teamId)
    {
        throw hresult_not_implemented();
    }
    winrt::event_token TournamentService::TeamChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Tournaments::TeamChangeEventArgs> const& __param0)
    {
        throw hresult_not_implemented();
    }
    void TournamentService::TeamChanged(winrt::event_token const& __param0) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamChangeSubscription TournamentService::SubscribeToTeamChange(hstring const& organizerId, hstring const& tournamentId, hstring const& teamId)
    {
        throw hresult_not_implemented();
    }
    void TournamentService::UnsubscribeFromTeamChange(winrt::Microsoft::Xbox::Services::Tournaments::TeamChangeSubscription const& subscription)
    {
        throw hresult_not_implemented();
    }
}
