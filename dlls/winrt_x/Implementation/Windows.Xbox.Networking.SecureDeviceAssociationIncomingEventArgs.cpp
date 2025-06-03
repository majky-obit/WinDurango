#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationIncomingEventArgs.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationIncomingEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAssociation SecureDeviceAssociationIncomingEventArgs::Association()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
