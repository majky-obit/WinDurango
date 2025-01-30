#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyChatView.h"
#include "Windows.Xbox.Multiplayer.PartyChatView.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::PartyChatMember> PartyChatView::Members()
    {
        throw hresult_not_implemented();
    }
}
