#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassAuxiliaryStream.h"
#include "Windows.Xbox.SmartGlass.SmartGlassAuxiliaryStream.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    void SmartGlassAuxiliaryStream::Open()
    {
        throw hresult_not_implemented();
    }

    void SmartGlassAuxiliaryStream::Close()
    {
        throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassAuxiliaryStream::OnConnect(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream, winrt::Windows::Foundation::IInspectable> const& handler)
    {
        throw hresult_not_implemented();
    }

    void SmartGlassAuxiliaryStream::OnConnect(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassAuxiliaryStream::OnReceive(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream, winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStreamReadStats> const& handler)
    {
        throw hresult_not_implemented();
    }

    void SmartGlassAuxiliaryStream::OnReceive(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassAuxiliaryStream::OnSend(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream, winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStreamWriteStats> const& handler)
    {
        throw hresult_not_implemented();
    }

    void SmartGlassAuxiliaryStream::OnSend(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassAuxiliaryStream::OnError(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream, int32_t> const& handler)
    {
        throw hresult_not_implemented();
    }

    void SmartGlassAuxiliaryStream::OnError(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
}