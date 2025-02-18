#include "pch.h"
#include "MMXboxDeviceEnumerator.h"

HRESULT __stdcall MMXboxDeviceEnumerator::QueryInterface(REFIID riid, void** ppvObject)
{
	return m_realEnumerator->QueryInterface(riid, ppvObject);
}

ULONG __stdcall MMXboxDeviceEnumerator::AddRef(void)
{
	return m_realEnumerator->AddRef();
}

ULONG __stdcall MMXboxDeviceEnumerator::Release(void)
{
	return m_realEnumerator->Release();
}

HRESULT __stdcall MMXboxDeviceEnumerator::EnumAudioEndpoints(EDataFlow dataFlow, DWORD dwStateMask, IMMDeviceCollection** ppDevices)
{
	return m_realEnumerator->EnumAudioEndpoints(dataFlow, dwStateMask, ppDevices);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetDefaultAudioEndpoint(EDataFlow dataFlow, ERole role, IMMDevice** ppEndpoint)
{
	return m_realEnumerator->GetDefaultAudioEndpoint(dataFlow, role, ppEndpoint);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetDevice(LPCWSTR pwstrId, IMMDevice** ppDevice)
{
	return m_realEnumerator->GetDevice(pwstrId, ppDevice);
}

HRESULT __stdcall MMXboxDeviceEnumerator::RegisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
	return m_realEnumerator->RegisterEndpointNotificationCallback(pClient);
}

HRESULT __stdcall MMXboxDeviceEnumerator::UnregisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
	return m_realEnumerator->UnregisterEndpointNotificationCallback(pClient);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetHdAudioChannelCounts(unsigned int* pHdmiChannelCount, unsigned int* pSpdifChannelCount)
{
	return E_NOTIMPL;
}

HRESULT __stdcall MMXboxDeviceEnumerator::RegisterChannelCountNotificationCallback(uint32_t* pClient)
{
	return E_NOTIMPL;
}

HRESULT __stdcall MMXboxDeviceEnumerator::UnregisterChannelCountNotificationCallback(uint32_t* pClient)
{
	return E_NOTIMPL;
}
