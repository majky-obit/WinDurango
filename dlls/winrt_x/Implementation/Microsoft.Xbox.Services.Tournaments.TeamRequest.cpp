#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    TeamRequest::TeamRequest(hstring const& organizerId, hstring const& tournamentId, bool filterResultsForUser)
    {
        throw hresult_not_implemented();
    }
    uint32_t TeamRequest::MaxItems()
    {
        throw hresult_not_implemented();
    }
    void TeamRequest::MaxItems(uint32_t value)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamState> TeamRequest::StateFilter()
    {
        throw hresult_not_implemented();
    }
    void TeamRequest::StateFilter(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamState> const& states)
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamOrderBy TeamRequest::OrderBy()
    {
        throw hresult_not_implemented();
    }
    void TeamRequest::OrderBy(winrt::Microsoft::Xbox::Services::Tournaments::TeamOrderBy const& value)
    {
        throw hresult_not_implemented();
    }
}
