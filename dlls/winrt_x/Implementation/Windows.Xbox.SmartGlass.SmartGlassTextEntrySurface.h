#pragma once
#include "Windows.Xbox.SmartGlass.SmartGlassTextEntrySurface.g.h"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    struct SmartGlassTextEntrySurface : SmartGlassTextEntrySurfaceT<SmartGlassTextEntrySurface>
    {
        SmartGlassTextEntrySurface() = default;

        hstring Id();
        bool Visible();
        hstring Text();
        void Text(hstring const& value);
        hstring Prompt();
        void Prompt(hstring const& value);
        hstring InputScope();
        void InputScope(hstring const& value);
        winrt::Windows::Xbox::SmartGlass::TextEntryOptions Options();
        void Options(winrt::Windows::Xbox::SmartGlass::TextEntryOptions const& value);
        hstring FlowDirection();
        void FlowDirection(hstring const& value);
        hstring Language();
        void Language(hstring const& value);
        uint32_t MaxLength();
        void MaxLength(uint32_t value);
        winrt::Windows::Xbox::SmartGlass::TextEntryResult Result();
        winrt::event_token TextChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassTextEntrySurface, winrt::Windows::Xbox::SmartGlass::SmartGlassTextEntryEventArgs> const& handler);
        void TextChanged(winrt::event_token const& token) noexcept;
        winrt::event_token TextEntryFinished(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassTextEntrySurface, winrt::Windows::Xbox::SmartGlass::SmartGlassTextEntryEventArgs> const& handler);
        void TextEntryFinished(winrt::event_token const& token) noexcept;
        void SetSelection(uint32_t start, uint32_t length);
    };
}