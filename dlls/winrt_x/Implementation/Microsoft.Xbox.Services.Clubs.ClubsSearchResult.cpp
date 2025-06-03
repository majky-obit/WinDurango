#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsSearchResult.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsSearchResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club> ClubsSearchResult::Clubs()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubSearchFacetResult>> ClubsSearchResult::SearchFacetResults()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
