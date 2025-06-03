#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequest.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequest.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    TournamentRequest::TournamentRequest(bool filterResultsForUser)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t TournamentRequest::MaxItems()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TournamentRequest::MaxItems(uint32_t value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TournamentState> TournamentRequest::StateFilter()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TournamentRequest::StateFilter(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TournamentState> const& states)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentOrderBy TournamentRequest::OrderBy()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TournamentRequest::OrderBy(winrt::Microsoft::Xbox::Services::Tournaments::TournamentOrderBy const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentSortOrder TournamentRequest::SortOrder()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TournamentRequest::SortOrder(winrt::Microsoft::Xbox::Services::Tournaments::TournamentSortOrder const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TournamentRequest::OrganizerId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TournamentRequest::OrganizerId(hstring const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
