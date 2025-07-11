#include "pch.h"
#include "MMXboxDeviceEnumeratorWrapper.h"

HRESULT __stdcall MMXboxDeviceEnumerator::QueryInterface(REFIID riid, void** ppvObject)
{
	printf("MMXboxDeviceEnumerator::QueryInterface\n");
	return m_realEnumerator->QueryInterface(riid, ppvObject);
}

ULONG __stdcall MMXboxDeviceEnumerator::AddRef(void)
{
	printf("MMXboxDeviceEnumerator::AddRef\n");
	return m_realEnumerator->AddRef();
}

ULONG __stdcall MMXboxDeviceEnumerator::Release(void)
{
	printf("MMXboxDeviceEnumerator::Release\n");
	return m_realEnumerator->Release();
}

HRESULT __stdcall MMXboxDeviceEnumerator::EnumAudioEndpoints(EDataFlow dataFlow, DWORD dwStateMask, IMMDeviceCollection** ppDevices)
{
	printf("MMXboxDeviceEnumerator::EnumAudioEndpoints\n");
	return m_realEnumerator->EnumAudioEndpoints(dataFlow, dwStateMask, ppDevices);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetDefaultAudioEndpoint(EDataFlow dataFlow, ERole role, IMMDevice** ppEndpoint)
{
	printf("MMXboxDeviceEnumerator::GetDefaultAudioEndpoint\n");
	return m_realEnumerator->GetDefaultAudioEndpoint(dataFlow, role, ppEndpoint);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetDevice(LPCWSTR pwstrId, IMMDevice** ppDevice)
{
	printf("MMXboxDeviceEnumerator::GetDevice\n");
	return m_realEnumerator->GetDevice(pwstrId, ppDevice);
}

HRESULT __stdcall MMXboxDeviceEnumerator::RegisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
	printf("MMXboxDeviceEnumerator::RegisterEndpointNotificationCallback\n");
	return m_realEnumerator->RegisterEndpointNotificationCallback(pClient);
}

HRESULT __stdcall MMXboxDeviceEnumerator::UnregisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
	printf("MMXboxDeviceEnumerator::UnregisterEndpointNotificationCallback\n");
	return m_realEnumerator->UnregisterEndpointNotificationCallback(pClient);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetHdAudioChannelCounts(unsigned int* pHdmiChannelCount, unsigned int* pSpdifChannelCount)
{
	printf("MMXboxDeviceEnumerator::GetHdAudioChannelCount\n");
	return E_NOTIMPL;
}

HRESULT __stdcall MMXboxDeviceEnumerator::RegisterChannelCountNotificationCallback(uint32_t* pClient)
{
	printf("MMXboxDeviceEnumerator::RegisterChannelCountNotificationCallback\n");
	return E_NOTIMPL;
}

HRESULT __stdcall MMXboxDeviceEnumerator::UnregisterChannelCountNotificationCallback(uint32_t* pClient)
{
	printf("MMXboxDeviceEnumerator::UnregisterChannelCountNotificationCallback\n");
	return E_NOTIMPL;
}