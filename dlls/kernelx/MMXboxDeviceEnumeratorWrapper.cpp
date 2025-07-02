#include "pch.h"
#include "MMXboxDeviceEnumeratorWrapper.h"

HRESULT __stdcall MMXboxDeviceEnumerator::QueryInterface(REFIID riid, void** ppvObject)
{
	LOG_INFO("MMXboxDeviceEnumerator::QueryInterface\n");
	return m_realEnumerator->QueryInterface(riid, ppvObject);
}

ULONG __stdcall MMXboxDeviceEnumerator::AddRef(void)
{
	LOG_INFO("MMXboxDeviceEnumerator::AddRef\n");
	return m_realEnumerator->AddRef();
}

ULONG __stdcall MMXboxDeviceEnumerator::Release(void)
{
	LOG_INFO("MMXboxDeviceEnumerator::Release\n");
	return m_realEnumerator->Release();
}

HRESULT __stdcall MMXboxDeviceEnumerator::EnumAudioEndpoints(EDataFlow dataFlow, DWORD dwStateMask, IMMDeviceCollection** ppDevices)
{
	LOG_INFO("MMXboxDeviceEnumerator::EnumAudioEndpoints\n");
	return m_realEnumerator->EnumAudioEndpoints(dataFlow, dwStateMask, ppDevices);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetDefaultAudioEndpoint(EDataFlow dataFlow, ERole role, IMMDevice** ppEndpoint)
{
	LOG_INFO("MMXboxDeviceEnumerator::GetDefaultAudioEndpoint\n");
	return m_realEnumerator->GetDefaultAudioEndpoint(dataFlow, role, ppEndpoint);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetDevice(LPCWSTR pwstrId, IMMDevice** ppDevice)
{
	LOG_INFO("MMXboxDeviceEnumerator::GetDevice\n");
	return m_realEnumerator->GetDevice(pwstrId, ppDevice);
}

HRESULT __stdcall MMXboxDeviceEnumerator::RegisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
	LOG_INFO("MMXboxDeviceEnumerator::RegisterEndpointNotificationCallback\n");
	return m_realEnumerator->RegisterEndpointNotificationCallback(pClient);
}

HRESULT __stdcall MMXboxDeviceEnumerator::UnregisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
	LOG_INFO("MMXboxDeviceEnumerator::UnregisterEndpointNotificationCallback\n");
	return m_realEnumerator->UnregisterEndpointNotificationCallback(pClient);
}

HRESULT __stdcall MMXboxDeviceEnumerator::GetHdAudioChannelCounts(unsigned int* pHdmiChannelCount, unsigned int* pSpdifChannelCount)
{
	LOG_INFO("MMXboxDeviceEnumerator::GetHdAudioChannelCount\n");
	return E_NOTIMPL;
}

HRESULT __stdcall MMXboxDeviceEnumerator::RegisterChannelCountNotificationCallback(uint32_t* pClient)
{
	LOG_INFO("MMXboxDeviceEnumerator::RegisterChannelCountNotificationCallback\n");
	return E_NOTIMPL;
}

HRESULT __stdcall MMXboxDeviceEnumerator::UnregisterChannelCountNotificationCallback(uint32_t* pClient)
{
	LOG_INFO("MMXboxDeviceEnumerator::UnregisterChannelCountNotificationCallback\n");
	return E_NOTIMPL;
}