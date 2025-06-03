#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequestResult.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequestResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamInfo> TeamRequestResult::Teams()
    {
        throw hresult_not_implemented();
    }
    bool TeamRequestResult::HasNext()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TeamRequestResult> TeamRequestResult::GetNextAsync()
    {
        throw hresult_not_implemented();
    }
}
