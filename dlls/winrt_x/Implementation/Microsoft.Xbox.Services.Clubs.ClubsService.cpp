#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsService.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::Club> ClubsService::GetClubAsync(hstring clubId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> ClubsService::GetClubsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> clubIds)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubsOwnedResult> ClubsService::GetClubsOwnedAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::Club> ClubsService::CreateClubAsync(hstring name, winrt::Microsoft::Xbox::Services::Clubs::ClubType type, hstring titleFamilyId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ClubsService::DeleteClubAsync(hstring clubId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> ClubsService::GetClubAssociationsAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> ClubsService::GetClubAssociationsAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRecommendation>> ClubsService::GetClubRecommendationsAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubsSearchResult> ClubsService::SearchClubsAsync(hstring queryString, winrt::Windows::Foundation::Collections::IVectorView<hstring> titleIds, winrt::Windows::Foundation::Collections::IVectorView<hstring> tags)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubSearchAutoComplete>> ClubsService::SuggestClubsAsync(hstring queryString, winrt::Windows::Foundation::Collections::IVectorView<hstring> titleIds, winrt::Windows::Foundation::Collections::IVectorView<hstring> tags)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
