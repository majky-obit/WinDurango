#pragma once
#include <inspectable.h>
#include <windows.foundation.h>
#include <windows.system.h>
#include <Windows.ApplicationModel.Core.h>
#include <EventToken.h>

class ICoreApplication : public IInspectable {
	virtual ABI::Windows::ApplicationModel::Core::CoreApplicationView* GetCurrentView();
	virtual void Run(ABI::Windows::ApplicationModel::Core::IFrameworkViewSource*);
	virtual INT32 __abi_get_Id(HSTRING**);
	virtual INT32 __abi_add_Suspending(ABI::Windows::ApplicationModel::Core::CoreApplicationView::IEventHandler<ABI::Windows::ApplicationModel::SuspendingEventArgs^>*, Windows::Foundation::EventRegistrationToken*);
	virtual INT32 __abi_remove_Suspending(EventRegistrationToken);
	virtual INT32 __abi_add_Resuming(ABI::Windows::Foundation::EventHandler<Platform::Object^>*, Windows::Foundation::EventRegistrationToken*);
	virtual INT32 __abi_remove_Resuming(EventRegistrationToken);
	virtual INT32 __abi_get_Properties(ABI::Windows::Foundation::Collections::IPropertySet**);
	virtual INT32 __abi_GetCurrentView(ABI::Windows::ApplicationModel::Core::CoreApplicationView**);
	virtual INT32 __abi_Run(ABI::Windows::ApplicationModel::Core::IFrameworkViewSource*);
};