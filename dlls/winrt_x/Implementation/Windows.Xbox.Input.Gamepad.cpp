#include "pch.h"
#include "Windows.h"
#include "Windows.Xbox.Input.GamepadReading.h"
#include "Windows.Xbox.Input.Gamepad.h"
#include "Windows.Xbox.Input.Gamepad.g.cpp"
#include <winrt/Windows.Foundation.Collections.h>
#include <Xinput.h>
#include "Windows.Xbox.System.User.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IGamepad> Gamepad::Gamepads()
    {
        IGamepad dummyGamepad = winrt::make<Gamepad>( );
        auto vector = winrt::single_threaded_vector<IGamepad>( );
        vector.Append(dummyGamepad);
        return vector.GetView( );
    }
    winrt::event_token Gamepad::GamepadAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs> const& handler)
    {
        return {};
    }
    void Gamepad::GamepadAdded(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Gamepad::GamepadRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs> const& handler)
    {
        return {};
    }
    void Gamepad::GamepadRemoved(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    uint64_t Gamepad::Id()
    {
        return 1;
    }
    hstring Gamepad::Type()
    {
        return L"Windows.Xbox.Input.Gamepad";
    }
    winrt::Windows::Xbox::System::User Gamepad::User()
    {
        return winrt::make<winrt::Windows::Xbox::System::implementation::User>( );
    }
    winrt::Windows::Xbox::Input::INavigationReading Gamepad::GetNavigationReading()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::RawNavigationReading Gamepad::GetRawNavigationReading()
    {
        RawNavigationReading dummyNavigationReading = RawNavigationReading( );
        dummyNavigationReading.Timestamp = GetTickCount64( );
		dummyNavigationReading.Buttons |= NavigationButtons::Up;
		return dummyNavigationReading;
    }
    winrt::event_token Gamepad::NavigationReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::NavigationController, winrt::Windows::Xbox::Input::INavigationReadingChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Gamepad::NavigationReadingChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    void Gamepad::SetVibration(winrt::Windows::Xbox::Input::GamepadVibration const& value)
    {
        XINPUT_VIBRATION vibration;
        ZeroMemory(&vibration, sizeof(XINPUT_VIBRATION));
        vibration.wLeftMotorSpeed = value.LeftMotorLevel * 65535;
        vibration.wRightMotorSpeed = value.RightMotorLevel * 65535;
        XInputSetState(0, &vibration);
    }
    winrt::Windows::Xbox::Input::IGamepadReading Gamepad::GetCurrentReading()
    {
        return winrt::make<implementation::GamepadReading>(GetRawCurrentReading());
    }
    winrt::Windows::Xbox::Input::RawGamepadReading Gamepad::GetRawCurrentReading()
    {
        XINPUT_STATE xiState;
		ZeroMemory(&xiState, sizeof(XINPUT_STATE));
        RawGamepadReading reading = {};

        static std::pair<WORD, GamepadButtons> const buttons[] =
        {
            { XINPUT_GAMEPAD_DPAD_UP, GamepadButtons::DPadUp },
            { XINPUT_GAMEPAD_DPAD_DOWN, GamepadButtons::DPadDown },
            { XINPUT_GAMEPAD_DPAD_LEFT, GamepadButtons::DPadLeft },
            { XINPUT_GAMEPAD_DPAD_RIGHT, GamepadButtons::DPadRight },
            { XINPUT_GAMEPAD_START, GamepadButtons::Menu },
            { XINPUT_GAMEPAD_BACK, GamepadButtons::View },
            { XINPUT_GAMEPAD_LEFT_THUMB, GamepadButtons::LeftThumbstick },
            { XINPUT_GAMEPAD_RIGHT_THUMB, GamepadButtons::RightThumbstick },
            { XINPUT_GAMEPAD_LEFT_SHOULDER, GamepadButtons::LeftShoulder },
            { XINPUT_GAMEPAD_RIGHT_SHOULDER, GamepadButtons::RightShoulder },
            { XINPUT_GAMEPAD_A, GamepadButtons::A },
            { XINPUT_GAMEPAD_B, GamepadButtons::B },
            { XINPUT_GAMEPAD_X, GamepadButtons::X },
            { XINPUT_GAMEPAD_Y, GamepadButtons::Y },
        };

        for (DWORD user = 0; user < XUSER_MAX_COUNT; user++) {
            if (XInputGetState(user, &xiState) == ERROR_SUCCESS)
            {
                for (int i = 0; i < ARRAYSIZE(buttons); i++)
                {
                    if (xiState.Gamepad.wButtons & buttons[ i ].first)
                    {
                        reading.Buttons |= buttons[ i ].second;
                    }
                }

                reading.LeftTrigger = xiState.Gamepad.bLeftTrigger / 255.f;
                reading.RightTrigger = xiState.Gamepad.bRightTrigger / 255.f;
                reading.LeftThumbstickX = xiState.Gamepad.sThumbLX / 32768.f;
                reading.LeftThumbstickY = xiState.Gamepad.sThumbLY / 32768.f;
                reading.RightThumbstickX = xiState.Gamepad.sThumbRX / 32768.f;
                reading.RightThumbstickY = xiState.Gamepad.sThumbRY / 32768.f;
            }
            else {
                printf("Controller input failure: %x\n", XInputGetState(0, &xiState));
            }
    }

        if (GetAsyncKeyState('A'))
            reading.Buttons |= GamepadButtons::A;
		if (GetAsyncKeyState('B'))
			reading.Buttons |= GamepadButtons::B;
		if (GetAsyncKeyState('X'))
			reading.Buttons |= GamepadButtons::X;
		if (GetAsyncKeyState('Y'))
			reading.Buttons |= GamepadButtons::Y;
		if (GetAsyncKeyState(VK_UP))
			reading.Buttons |= GamepadButtons::DPadUp;
		if (GetAsyncKeyState(VK_DOWN))
			reading.Buttons |= GamepadButtons::DPadDown;
		if (GetAsyncKeyState(VK_LEFT))
			reading.Buttons |= GamepadButtons::DPadLeft;    
		if (GetAsyncKeyState(VK_RIGHT))
			reading.Buttons |= GamepadButtons::DPadRight;
		if (GetAsyncKeyState(VK_RETURN))
			reading.Buttons |= GamepadButtons::Menu;
		if (GetAsyncKeyState(VK_ESCAPE))
			reading.Buttons |= GamepadButtons::View;
		if (GetAsyncKeyState(VK_LSHIFT))
			reading.Buttons |= GamepadButtons::LeftThumbstick;
		if (GetAsyncKeyState(VK_RSHIFT))
			reading.Buttons |= GamepadButtons::RightThumbstick;
		if (GetAsyncKeyState(VK_LCONTROL))
			reading.Buttons |= GamepadButtons::LeftShoulder;
		if (GetAsyncKeyState(VK_RCONTROL))
            reading.Buttons |= GamepadButtons::RightShoulder;

		printf("Reading: %d\n", reading.Buttons);
        return reading;
    }
    winrt::event_token Gamepad::ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::Gamepad, winrt::Windows::Xbox::Input::IGamepadReadingChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Gamepad::ReadingChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    bool Gamepad::IsTrusted()
    {
        return true;
    }
}
