#pragma once
#include "Windows.Xbox.SmartGlass.SmartGlassAuxiliaryStream.g.h"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    struct SmartGlassAuxiliaryStream : SmartGlassAuxiliaryStreamT<SmartGlassAuxiliaryStream>
    {
        SmartGlassAuxiliaryStream() = default;

        void Open();
        void Close();
        winrt::event_token OnConnect(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream, winrt::Windows::Foundation::IInspectable> const& handler);
        void OnConnect(winrt::event_token const& token) noexcept;
        winrt::event_token OnReceive(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream, winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStreamReadStats> const& handler);
        void OnReceive(winrt::event_token const& token) noexcept;
        winrt::event_token OnSend(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream, winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStreamWriteStats> const& handler);
        void OnSend(winrt::event_token const& token) noexcept;
        winrt::event_token OnError(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream, int32_t> const& handler);
        void OnError(winrt::event_token const& token) noexcept;
    };
}