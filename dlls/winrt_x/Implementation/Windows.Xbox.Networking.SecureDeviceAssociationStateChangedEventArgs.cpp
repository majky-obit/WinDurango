#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationStateChangedEventArgs.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationStateChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationState SecureDeviceAssociationStateChangedEventArgs::OldState()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationState SecureDeviceAssociationStateChangedEventArgs::NewState()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
