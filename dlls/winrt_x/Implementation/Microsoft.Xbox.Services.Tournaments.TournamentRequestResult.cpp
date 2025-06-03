#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequestResult.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequestResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::Tournament> TournamentRequestResult::Tournaments()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool TournamentRequestResult::HasNext()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TournamentRequestResult> TournamentRequestResult::GetNextAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
