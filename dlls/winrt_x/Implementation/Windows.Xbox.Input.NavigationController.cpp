#include "pch.h"
#include "Windows.Xbox.Input.NavigationController.h"
#include "Windows.Xbox.Input.NavigationController.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::INavigationController> NavigationController::NavigationControllers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token NavigationController::NavigationControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::NavigationControllerAddedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void NavigationController::NavigationControllerAdded(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token NavigationController::NavigationControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::NavigationControllerRemovedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void NavigationController::NavigationControllerRemoved(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t NavigationController::Id()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring NavigationController::Type()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::User NavigationController::User()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::INavigationReading NavigationController::GetNavigationReading()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::RawNavigationReading NavigationController::GetRawNavigationReading()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token NavigationController::NavigationReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::NavigationController, winrt::Windows::Xbox::Input::INavigationReadingChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void NavigationController::NavigationReadingChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
