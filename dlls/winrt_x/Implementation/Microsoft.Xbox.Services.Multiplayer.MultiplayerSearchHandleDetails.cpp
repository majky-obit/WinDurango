#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleDetails.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleDetails.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSearchHandleDetails::SessionReference()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSearchHandleDetails::HandleId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSearchHandleDetails::SessionOwnerXboxUserIds()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSearchHandleDetails::Tags()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, double> MultiplayerSearchHandleDetails::NumbersMetadata()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSearchHandleDetails::StringsMetadata()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> MultiplayerSearchHandleDetails::RoleTypes()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerSearchHandleDetails::Visibility()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction MultiplayerSearchHandleDetails::JoinRestriction()
    {
        throw hresult_not_implemented();
    }
    bool MultiplayerSearchHandleDetails::Closed()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerSearchHandleDetails::MaxMembersCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerSearchHandleDetails::MembersCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSearchHandleDetails::HandleCreationTime()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSearchHandleDetails::CustomSessionPropertiesJson()
    {
        throw hresult_not_implemented();
    }
}
