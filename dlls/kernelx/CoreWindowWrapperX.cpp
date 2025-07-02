#include "pch.h"
#include "CoreWindowWrapperX.h"
using namespace ABI::Windows::ApplicationModel::Core;

HRESULT CoreWindowWrapperX::GetIids(ULONG* iidCount, IID** iids)
{
	LOG_INFO("[CoreWindowWrapperX] --> GetIids\n");
	return m_realWindow->GetIids(iidCount, iids);
}

HRESULT CoreWindowWrapperX::GetRuntimeClassName(HSTRING* className)
{
	LOG_INFO("[CoreWindowWrapperX] --> GetRuntimeClassName\n");
	return m_realWindow->GetRuntimeClassName(className);
}

HRESULT CoreWindowWrapperX::GetTrustLevel(TrustLevel* trustLevel)
{
	LOG_INFO("[CoreWindowWrapperX] --> GetTrustLevel\n");
	return m_realWindow->GetTrustLevel(trustLevel);
}

INT32 CoreWindowWrapperX::_abi_get_Bounds(Rect* rect)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_get_Bounds\n");
	return m_realWindow->get_Bounds(rect);
}

INT32 CoreWindowWrapperX::_abi_get_Dispatcher(ICoreDispatcher** dispatcher)
{
	//LOG_INFO("[CoreWindowWrapperX] --> _abi_get_Dispatcher\n");
	return m_realWindow->get_Dispatcher(dispatcher);
}

INT32 CoreWindowWrapperX::_abi_get_IsInputEnabled(boolean* value)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_get_IsInputEnabled\n");
	return m_realWindow->get_IsInputEnabled(value);
}

INT32 CoreWindowWrapperX::_abi_set_IsInputEnabled(boolean value)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_set_IsInputEnabled\n");
	return m_realWindow->put_IsInputEnabled(value);
}

INT32 CoreWindowWrapperX::_abi_get_Visible(boolean* value)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_get_Visible\n");
	return m_realWindow->get_Visible(value);
}

INT32 CoreWindowWrapperX::_abi_Activate()
{
	auto view = winrt::Windows::UI::ViewManagement::ApplicationView::GetForCurrentView();
	//view.TryEnterFullScreenMode();
	view.PreferredLaunchWindowingMode(winrt::Windows::UI::ViewManagement::ApplicationViewWindowingMode::PreferredLaunchViewSize);

	LOG_INFO("[CoreWindowWrapperX] --> _abi_Activate\n");
	return m_realWindow->Activate();
}

INT32 CoreWindowWrapperX::_abi_Close()
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_Close\n");
	return m_realWindow->Close();
}

INT32 CoreWindowWrapperX::_abi_get_AsyncKeyState(VirtualKey key, CoreVirtualKeyStates* value)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_get_AsyncKeyState\n");
	return m_realWindow->GetAsyncKeyState(key, value);
}

INT32 CoreWindowWrapperX::_abi_get_KeyState(VirtualKey key, CoreVirtualKeyStates* value)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_get_KeyState\n");
	return m_realWindow->GetKeyState(key, value);
}

INT32 CoreWindowWrapperX::_abi_add_Activated(ITypedEventHandler<CoreWindow*, WindowActivatedEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_Activated\n");
	return m_realWindow->add_Activated(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_Activated(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_Activated\n");
	return m_realWindow->remove_Activated(token);
}

INT32 CoreWindowWrapperX::_abi_add_CharacterReceived(ITypedEventHandler<CoreWindow*, CharacterReceivedEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_CharacterReceived\n");

	// STUB
	*token = EventRegistrationToken();
	return S_OK;

	//return m_realWindow->add_CharacterReceived(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_CharacterReceived(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_CharacterReceived\n");
	return m_realWindow->remove_CharacterReceived(token);
}

INT32 CoreWindowWrapperX::_abi_add_Closed(ITypedEventHandler<CoreWindow*, CoreWindowEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_Closed\n");

	// STUB
	*token = EventRegistrationToken();
	return S_OK;

	//return m_realWindow->add_Closed(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_Closed(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_Closed\n");
	return m_realWindow->remove_Closed(token);
}

INT32 CoreWindowWrapperX::_abi_add_InputEnabled(ITypedEventHandler<CoreWindow*, InputEnabledEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_InputEnabled\n");
	return m_realWindow->add_InputEnabled(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_InputEnabled(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_InputEnabled\n");
	return m_realWindow->remove_InputEnabled(token);
}

INT32 CoreWindowWrapperX::_abi_add_KeyDown(ITypedEventHandler<CoreWindow*, KeyEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_KeyDown\n");

	// STUB
	*token = EventRegistrationToken();
	return S_OK;

	//return m_realWindow->add_KeyDown(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_KeyDown(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_KeyDown\n");
	return m_realWindow->remove_KeyDown(token);
}

INT32 CoreWindowWrapperX::_abi_add_KeyUp(ITypedEventHandler<CoreWindow*, KeyEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_KeyUp\n");

	// STUB
	*token = EventRegistrationToken();
	return S_OK;

	//return m_realWindow->add_KeyUp(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_KeyUp(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_KeyUp\n");
	return m_realWindow->remove_KeyUp(token);
}

INT32 CoreWindowWrapperX::_abi_add_PointerMoved(ITypedEventHandler<CoreWindow*, PointerEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_PointerMoved\n");
	return m_realWindow->add_PointerMoved(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_PointerMoved(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_PointerMoved\n");
	return m_realWindow->remove_PointerMoved(token);
}

INT32 CoreWindowWrapperX::_abi_add_PointerEntered(ITypedEventHandler<CoreWindow*, PointerEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_PointerEntered\n");
	return m_realWindow->add_PointerEntered(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_PointerEntered(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_PointerEntered\n");
	return m_realWindow->remove_PointerEntered(token);
}

INT32 CoreWindowWrapperX::_abi_add_PointerExited(ITypedEventHandler<CoreWindow*, PointerEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_PointerExited\n");
	return m_realWindow->add_PointerExited(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_PointerExited(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_PointerExited\n");
	return m_realWindow->remove_PointerExited(token);
}

INT32 CoreWindowWrapperX::_abi_add_SizeChanged(ITypedEventHandler<CoreWindow*, WindowSizeChangedEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_SizeChanged\n");
	return m_realWindow->add_SizeChanged(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_SizeChanged(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_SizeChanged\n");
	return m_realWindow->remove_SizeChanged(token);
}

INT32 CoreWindowWrapperX::_abi_add_VisibilityChanged(ITypedEventHandler<CoreWindow*, VisibilityChangedEventArgs*>* handler,
	EventRegistrationToken* token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_add_VisibilityChanged\n");
	return m_realWindow->add_VisibilityChanged(handler, token);
}

INT32 CoreWindowWrapperX::_abi_remove_VisibilityChanged(EventRegistrationToken token)
{
	LOG_INFO("[CoreWindowWrapperX] --> _abi_remove_VisibilityChanged\n");
	return m_realWindow->remove_VisibilityChanged(token);
}

HRESULT CoreWindowWrapperX::QueryInterface(const IID& riid, void** ppvObject)
{
	LOG_INFO("[CoreWindowWrapperX] --> QueryInterface\n");
	if (riid == __uuidof(IUnknown) || 
		riid == __uuidof(ICoreApplicationExit) ||
		riid == __uuidof(IInspectable) || 
		riid == __uuidof(ICoreWindow) || 
		riid == __uuidof(IAgileObject))
	{
		*ppvObject = this;
		AddRef();
		return S_OK;
	}
	
	*ppvObject = nullptr;

	//return E_NOINTERFACE;
	return m_realWindow->QueryInterface(riid, ppvObject);
}

ULONG CoreWindowWrapperX::AddRef()
{
	//LOG_INFO("[CoreWindowWrapperX] --> AddRef\n");
	return InterlockedIncrement(&m_RefCount);
}

ULONG CoreWindowWrapperX::Release()
{
	//LOG_INFO("[CoreWindowWrapperX] --> Release\n");
	ULONG refCount = InterlockedDecrement(&m_RefCount);
	if (refCount == 0) delete this;
	return refCount;
}
