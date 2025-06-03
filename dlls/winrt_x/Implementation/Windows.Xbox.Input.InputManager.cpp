#include "pch.h"
#include "Windows.Xbox.Input.InputManager.h"
#include "Windows.Xbox.Input.InputManager.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    void InputManager::SetKinectOnePersonSystemEngagement()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::SetKinectTwoPersonSystemEngagement()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::SetKinectOnePersonManualEngagement(winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::SetKinectTwoPersonManualEngagement(winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair1, winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair2)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::BodyHandPair> InputManager::KinectManualEngagedHands()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::KinectEngagementMode InputManager::KinectEngagementMode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t InputManager::MaximumKinectEngagedPersonCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::SystemCursorVisibility InputManager::SystemCursorVisibility()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::SystemCursorVisibility(winrt::Windows::Xbox::Input::SystemCursorVisibility const& visibility)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::DeferSystemGestures()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::OverrideKinectInteractionMode(winrt::Windows::Xbox::Input::KinectInteractionMode const& mode)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool InputManager::DoesGamepadDeferKinectInteractions()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::DoesGamepadDeferKinectInteractions(bool doesGamepadDeferKinectInteractions)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool InputManager::IsKinectPersonEngaged()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token InputManager::IsKinectPersonEngagedChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::IsKinectPersonEngagedChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::IsKinectPersonEngagedChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::InputMode InputManager::SmartglassInputMode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::SmartglassInputMode(winrt::Windows::Xbox::Input::InputMode const& mode)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::ManipulationMode InputManager::SmartglassManipulationModes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::SmartglassManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::InputMode InputManager::GamepadInputMode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::GamepadInputMode(winrt::Windows::Xbox::Input::InputMode const& mode)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::ManipulationMode InputManager::GamepadManipulationModes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InputManager::GamepadManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
