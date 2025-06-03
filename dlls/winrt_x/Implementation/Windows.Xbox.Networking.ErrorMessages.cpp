#include "pch.h"
#include "Windows.Xbox.Networking.ErrorMessages.h"
#include "Windows.Xbox.Networking.ErrorMessages.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    hstring ErrorMessages::GetMessageForError(uint32_t errorCode)
    {
        throw hresult_not_implemented();
    }
}
