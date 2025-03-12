#include "pch.h"
#include "MMXboxDeviceEnumeratorWrapper.h"
#include "MMDeviceEnumeratorWrapper.h"


HRESULT __stdcall MMDeviceEnumeratorWrapper::QueryInterface(REFIID riid, void** ppvObject)
{
	if (riid == __uuidof(IMMXboxDeviceEnumerator))
	{
		*ppvObject = new MMXboxDeviceEnumerator(this);
		this->AddRef();
		return S_OK;
	}

	return m_realEnumerator->QueryInterface(riid, ppvObject);
}

ULONG __stdcall MMDeviceEnumeratorWrapper::AddRef(void)
{
	return m_realEnumerator->AddRef();
}

ULONG __stdcall MMDeviceEnumeratorWrapper::Release(void)
{
	return m_realEnumerator->Release();
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::EnumAudioEndpoints(EDataFlow dataFlow, DWORD dwStateMask, IMMDeviceCollection** ppDevices)
{
	return m_realEnumerator->EnumAudioEndpoints(dataFlow, dwStateMask, ppDevices);
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::GetDefaultAudioEndpoint(EDataFlow dataFlow, ERole role, IMMDevice** ppEndpoint)
{
	return m_realEnumerator->GetDefaultAudioEndpoint(dataFlow, role, ppEndpoint);
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::GetDevice(LPCWSTR pwstrId, IMMDevice** ppDevice)
{
	return m_realEnumerator->GetDevice(pwstrId, ppDevice);
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::RegisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
	return m_realEnumerator->RegisterEndpointNotificationCallback(pClient);
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::UnregisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
	return m_realEnumerator->UnregisterEndpointNotificationCallback(pClient);
}