#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociation.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociation.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAssociation SecureDeviceAssociation::GetAssociationBySocketAddressBytes(array_view<uint8_t const> remoteSocketAddressBytes, array_view<uint8_t const> localSocketAddressBytes)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociation SecureDeviceAssociation::GetAssociationByHostNamesAndPorts(winrt::Windows::Networking::HostName const& remoteHostName, hstring const& remotePort, winrt::Windows::Networking::HostName const& localHostName, hstring const& localPort)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SecureDeviceAssociation::StateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAssociation, winrt::Windows::Xbox::Networking::SecureDeviceAssociationStateChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociation::StateChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SecureDeviceAssociation::DestroyAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociation::GetRemoteSocketAddressBytes(array_view<uint8_t> socketAddressBytes)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociation::GetLocalSocketAddressBytes(array_view<uint8_t> socketAddressBytes)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationState SecureDeviceAssociation::State()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate SecureDeviceAssociation::Template()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAssociation::RemoteSecureDeviceAddress()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Networking::HostName SecureDeviceAssociation::RemoteHostName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociation::RemotePort()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Networking::HostName SecureDeviceAssociation::LocalHostName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociation::LocalPort()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
