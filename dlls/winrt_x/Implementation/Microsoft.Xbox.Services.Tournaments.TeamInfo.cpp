#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamInfo::Id()
    {
        throw hresult_not_implemented();
    }
    hstring TeamInfo::Name()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> TeamInfo::MemberXboxUserIds()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime TeamInfo::RegistrationDate()
    {
        throw hresult_not_implemented();
    }
    hstring TeamInfo::Standing()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamState TeamInfo::TeamState()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamCompletedReason TeamInfo::CompletedReason()
    {
        throw hresult_not_implemented();
    }
    uint64_t TeamInfo::Ranking()
    {
        throw hresult_not_implemented();
    }
    hstring TeamInfo::ContinuationUri()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::CurrentMatchMetadata TeamInfo::CurrentMatchMetadata()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::PreviousMatchMetadata TeamInfo::PreviousMatchMetadata()
    {
        throw hresult_not_implemented();
    }
}
