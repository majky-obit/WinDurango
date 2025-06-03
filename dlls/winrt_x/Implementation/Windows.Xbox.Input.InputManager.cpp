#include "pch.h"
#include "Windows.Xbox.Input.InputManager.h"
#include "Windows.Xbox.Input.InputManager.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    void InputManager::SetKinectOnePersonSystemEngagement()
    {
        throw hresult_not_implemented();
    }
    void InputManager::SetKinectTwoPersonSystemEngagement()
    {
        throw hresult_not_implemented();
    }
    void InputManager::SetKinectOnePersonManualEngagement(winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair)
    {
        throw hresult_not_implemented();
    }
    void InputManager::SetKinectTwoPersonManualEngagement(winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair1, winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair2)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::BodyHandPair> InputManager::KinectManualEngagedHands()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::KinectEngagementMode InputManager::KinectEngagementMode()
    {
        throw hresult_not_implemented();
    }
    uint32_t InputManager::MaximumKinectEngagedPersonCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::SystemCursorVisibility InputManager::SystemCursorVisibility()
    {
        throw hresult_not_implemented();
    }
    void InputManager::SystemCursorVisibility(winrt::Windows::Xbox::Input::SystemCursorVisibility const& visibility)
    {
        throw hresult_not_implemented();
    }
    void InputManager::DeferSystemGestures()
    {
        throw hresult_not_implemented();
    }
    void InputManager::OverrideKinectInteractionMode(winrt::Windows::Xbox::Input::KinectInteractionMode const& mode)
    {
        throw hresult_not_implemented();
    }
    bool InputManager::DoesGamepadDeferKinectInteractions()
    {
        throw hresult_not_implemented();
    }
    void InputManager::DoesGamepadDeferKinectInteractions(bool doesGamepadDeferKinectInteractions)
    {
        throw hresult_not_implemented();
    }
    bool InputManager::IsKinectPersonEngaged()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token InputManager::IsKinectPersonEngagedChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::IsKinectPersonEngagedChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void InputManager::IsKinectPersonEngagedChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::InputMode InputManager::SmartglassInputMode()
    {
        throw hresult_not_implemented();
    }
    void InputManager::SmartglassInputMode(winrt::Windows::Xbox::Input::InputMode const& mode)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::ManipulationMode InputManager::SmartglassManipulationModes()
    {
        throw hresult_not_implemented();
    }
    void InputManager::SmartglassManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::InputMode InputManager::GamepadInputMode()
    {
        throw hresult_not_implemented();
    }
    void InputManager::GamepadInputMode(winrt::Windows::Xbox::Input::InputMode const& mode)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::ManipulationMode InputManager::GamepadManipulationModes()
    {
        throw hresult_not_implemented();
    }
    void InputManager::GamepadManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode)
    {
        throw hresult_not_implemented();
    }
}
