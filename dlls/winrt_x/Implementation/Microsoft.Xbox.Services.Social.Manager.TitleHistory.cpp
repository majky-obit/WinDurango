#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.TitleHistory.h"
#include "Microsoft.Xbox.Services.Social.Manager.TitleHistory.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    bool TitleHistory::HasUserPlayed()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime TitleHistory::LastTimeUserPlayed()
    {
        throw hresult_not_implemented();
    }
}
