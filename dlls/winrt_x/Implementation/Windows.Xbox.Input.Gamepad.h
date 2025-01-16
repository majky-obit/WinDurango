#pragma once
#include "Windows.Xbox.Input.Gamepad.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct Gamepad : GamepadT<Gamepad>
    {
        Gamepad() = default;
        Gamepad(uint64_t id) : m_id(id) {}

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IGamepad> Gamepads();
        static winrt::event_token GamepadAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs> const& handler);
        static void GamepadAdded(winrt::event_token const& token) noexcept;
        static winrt::event_token GamepadRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs> const& handler);
        static void GamepadRemoved(winrt::event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        winrt::Windows::Xbox::System::User User();
        winrt::Windows::Xbox::Input::INavigationReading GetNavigationReading();
        winrt::Windows::Xbox::Input::RawNavigationReading GetRawNavigationReading();
        winrt::event_token NavigationReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::NavigationController, winrt::Windows::Xbox::Input::INavigationReadingChangedEventArgs> const& handler);
        void NavigationReadingChanged(winrt::event_token const& token) noexcept;
        void SetVibration(winrt::Windows::Xbox::Input::GamepadVibration const& value);
        winrt::Windows::Xbox::Input::IGamepadReading GetCurrentReading();
        winrt::Windows::Xbox::Input::RawGamepadReading GetRawCurrentReading();
        winrt::event_token ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::Gamepad, winrt::Windows::Xbox::Input::IGamepadReadingChangedEventArgs> const& handler);
        void ReadingChanged(winrt::event_token const& token) noexcept;
        bool IsTrusted();
        inline static winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Input::IGamepad> staticGamepads = { nullptr };
        uint64_t m_id{ 0 };
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct Gamepad : GamepadT<Gamepad, implementation::Gamepad>
    {
    };
}
