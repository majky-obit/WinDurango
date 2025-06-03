#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleDetails.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleDetails.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSearchHandleDetails::SessionReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSearchHandleDetails::HandleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSearchHandleDetails::SessionOwnerXboxUserIds()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSearchHandleDetails::Tags()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, double> MultiplayerSearchHandleDetails::NumbersMetadata()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSearchHandleDetails::StringsMetadata()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> MultiplayerSearchHandleDetails::RoleTypes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerSearchHandleDetails::Visibility()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction MultiplayerSearchHandleDetails::JoinRestriction()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MultiplayerSearchHandleDetails::Closed()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSearchHandleDetails::MaxMembersCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSearchHandleDetails::MembersCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSearchHandleDetails::HandleCreationTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSearchHandleDetails::CustomSessionPropertiesJson()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
