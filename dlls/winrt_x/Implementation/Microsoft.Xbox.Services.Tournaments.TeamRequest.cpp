#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    TeamRequest::TeamRequest(hstring const& organizerId, hstring const& tournamentId, bool filterResultsForUser)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t TeamRequest::MaxItems()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void TeamRequest::MaxItems(uint32_t value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamState> TeamRequest::StateFilter()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void TeamRequest::StateFilter(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamState> const& states)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamOrderBy TeamRequest::OrderBy()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void TeamRequest::OrderBy(winrt::Microsoft::Xbox::Services::Tournaments::TeamOrderBy const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
