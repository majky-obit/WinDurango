#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamInfo::Id()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TeamInfo::Name()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> TeamInfo::MemberXboxUserIds()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime TeamInfo::RegistrationDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TeamInfo::Standing()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamState TeamInfo::TeamState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamCompletedReason TeamInfo::CompletedReason()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t TeamInfo::Ranking()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TeamInfo::ContinuationUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::CurrentMatchMetadata TeamInfo::CurrentMatchMetadata()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::PreviousMatchMetadata TeamInfo::PreviousMatchMetadata()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
