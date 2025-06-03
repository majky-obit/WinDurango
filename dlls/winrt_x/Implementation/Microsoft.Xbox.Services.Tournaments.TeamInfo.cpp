#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamInfo::Id()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamInfo::Name()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> TeamInfo::MemberXboxUserIds()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime TeamInfo::RegistrationDate()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamInfo::Standing()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamState TeamInfo::TeamState()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamCompletedReason TeamInfo::CompletedReason()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t TeamInfo::Ranking()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamInfo::ContinuationUri()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::CurrentMatchMetadata TeamInfo::CurrentMatchMetadata()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::PreviousMatchMetadata TeamInfo::PreviousMatchMetadata()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
