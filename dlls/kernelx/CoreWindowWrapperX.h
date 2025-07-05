/*
================================================================================
DISCLAIMER AND LICENSE REQUIREMENT

This code is provided with the condition that if you use, modify, or distribute
this code in your project, you are required to make your project open source
under a license compatible with the GNU General Public License (GPL) or a
similarly strong copyleft license.

By using this code, you agree to:
1. Disclose your complete source code of any project incorporating this code.
2. Include this disclaimer in any copies or substantial portions of this file.
3. Provide clear attribution to the original author.

If you do not agree to these terms, you do not have permission to use this code.

================================================================================
*/
#pragma once
#include <cstdio>
#include "ICoreWindowX.h"
#include <winrt/Windows.UI.ViewManagement.h>


class CoreWindowWrapperX : public ICoreWindowX
{
public:

	long m_RefCount = 1;
	ICoreWindow* m_realWindow;

	CoreWindowWrapperX(CoreWindow* realWind)
	{
		m_realWindow = reinterpret_cast<ICoreWindow*>(realWind);
	}


public:

	INT32 _abi_get_Bounds(Rect* rect) override;
	INT32 _abi_get_Dispatcher(ICoreDispatcher** dispatcher) override;
	INT32 _abi_get_IsInputEnabled(boolean* value) override;
	INT32 _abi_set_IsInputEnabled(boolean value) override;
	INT32 _abi_get_Visible(boolean* value) override;
	INT32 _abi_Activate() override;
	INT32 _abi_Close() override;
	INT32 _abi_get_AsyncKeyState(VirtualKey key, CoreVirtualKeyStates* value) override;
	INT32 _abi_get_KeyState(VirtualKey key, CoreVirtualKeyStates* value) override;
	INT32 _abi_add_Activated(ITypedEventHandler<CoreWindow*, WindowActivatedEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_Activated(EventRegistrationToken token) override;
	INT32 _abi_add_CharacterReceived(ITypedEventHandler<CoreWindow*, CharacterReceivedEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_CharacterReceived(EventRegistrationToken token) override;
	INT32 _abi_add_Closed(ITypedEventHandler<CoreWindow*, CoreWindowEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_Closed(EventRegistrationToken token) override;
	INT32 _abi_add_InputEnabled(ITypedEventHandler<CoreWindow*, InputEnabledEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_InputEnabled(EventRegistrationToken token) override;
	INT32 _abi_add_KeyDown(ITypedEventHandler<CoreWindow*, KeyEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_KeyDown(EventRegistrationToken token) override;
	INT32 _abi_add_KeyUp(ITypedEventHandler<CoreWindow*, KeyEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_KeyUp(EventRegistrationToken token) override;
	INT32 _abi_add_PointerMoved(ITypedEventHandler<CoreWindow*, PointerEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_PointerMoved(EventRegistrationToken token) override;
	INT32 _abi_add_PointerEntered(ITypedEventHandler<CoreWindow*, PointerEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_PointerEntered(EventRegistrationToken token) override;
	INT32 _abi_add_PointerExited(ITypedEventHandler<CoreWindow*, PointerEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_PointerExited(EventRegistrationToken token) override;
	INT32 _abi_add_SizeChanged(ITypedEventHandler<CoreWindow*, WindowSizeChangedEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_SizeChanged(EventRegistrationToken token) override;
	INT32 _abi_add_VisibilityChanged(ITypedEventHandler<CoreWindow*, VisibilityChangedEventArgs*>* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_VisibilityChanged(EventRegistrationToken token) override;


	// IInspectable + IUnknown
	HRESULT QueryInterface(const IID& riid, void** ppvObject) override;
	ULONG AddRef() override;
	ULONG Release() override;

	HRESULT GetIids(ULONG* iidCount, IID** iids) override;
	HRESULT GetRuntimeClassName(HSTRING* className) override;
	HRESULT GetTrustLevel(TrustLevel* trustLevel) override;

private:

};