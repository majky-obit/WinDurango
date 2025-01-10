#pragma once
#include "Windows.Xbox.Input.GamepadReading.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct GamepadReading : GamepadReadingT<GamepadReading>
    {
        RawGamepadReading m_Reading;
        GamepadReading(RawGamepadReading reading) : m_Reading(reading) {}
        GamepadReading() = default;

        winrt::Windows::Foundation::DateTime Timestamp();
        winrt::Windows::Xbox::Input::GamepadButtons Buttons();
        bool IsDPadUpPressed();
        bool IsDPadDownPressed();
        bool IsDPadLeftPressed();
        bool IsDPadRightPressed();
        bool IsMenuPressed();
        bool IsViewPressed();
        bool IsLeftThumbstickPressed();
        bool IsRightThumbstickPressed();
        bool IsLeftShoulderPressed();
        bool IsRightShoulderPressed();
        bool IsAPressed();
        bool IsBPressed();
        bool IsXPressed();
        bool IsYPressed();
        float LeftTrigger();
        float RightTrigger();
        float LeftThumbstickX();
        float LeftThumbstickY();
        float RightThumbstickX();
        float RightThumbstickY();
        bool IsPaddle1Pressed();
        bool IsPaddle2Pressed();
        bool IsPaddle3Pressed();
        bool IsPaddle4Pressed();
    };
}
