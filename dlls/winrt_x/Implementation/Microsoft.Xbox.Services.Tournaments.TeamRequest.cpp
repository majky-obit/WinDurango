#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    TeamRequest::TeamRequest(hstring const& organizerId, hstring const& tournamentId, bool filterResultsForUser)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t TeamRequest::MaxItems()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TeamRequest::MaxItems(uint32_t value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamState> TeamRequest::StateFilter()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TeamRequest::StateFilter(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamState> const& states)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamOrderBy TeamRequest::OrderBy()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TeamRequest::OrderBy(winrt::Microsoft::Xbox::Services::Tournaments::TeamOrderBy const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
