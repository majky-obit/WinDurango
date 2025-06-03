#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyMemberDeviceGroup.h"
#include "Windows.Xbox.Multiplayer.PartyMemberDeviceGroup.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::PartyMember> PartyMemberDeviceGroup::Members()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
