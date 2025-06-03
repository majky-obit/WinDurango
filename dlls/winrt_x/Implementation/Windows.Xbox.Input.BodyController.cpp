#include "pch.h"
#include "Windows.Xbox.Input.BodyController.h"
#include "Windows.Xbox.Input.BodyController.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IBodyController> BodyController::BodyControllers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BodyControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerAddedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyController::BodyControllerAdded(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BodyControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerRemovedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyController::BodyControllerRemoved(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t BodyController::Id()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring BodyController::Type()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::User BodyController::User()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t BodyController::BiometricUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BiometricUserChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBiometricUserChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyController::BiometricUserChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::IBodyControllerReading BodyController::GetCurrentReading()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBodyControllerReadingChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyController::ReadingChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint64_t> BodyController::AssociatedControllerIds()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::AssociatedControllerAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerAddedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyController::AssociatedControllerAdded(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::AssociatedControllerRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerRemovedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyController::AssociatedControllerRemoved(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
