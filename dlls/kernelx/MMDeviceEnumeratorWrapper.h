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
#include <mmdeviceapi.h>


class MMDeviceEnumeratorWrapper : IMMDeviceEnumerator
{
public:
    MMDeviceEnumeratorWrapper(IMMDeviceEnumerator* realEnumerator);
    
    HRESULT STDMETHODCALLTYPE QueryInterface(
        /* [in] */ REFIID riid,
        /* [iid_is][out] */ _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject) override;

    ULONG STDMETHODCALLTYPE AddRef(void) override;
    ULONG STDMETHODCALLTYPE Release(void) override;

    /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumAudioEndpoints(
        /* [annotation][in] */
        _In_  EDataFlow dataFlow,
        /* [annotation][in] */
        _In_  DWORD dwStateMask,
        /* [annotation][out] */
        _Out_  IMMDeviceCollection** ppDevices) override;

    /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDefaultAudioEndpoint(
        /* [annotation][in] */
        _In_  EDataFlow dataFlow,
        /* [annotation][in] */
        _In_  ERole role,
        /* [annotation][out] */
        _Out_  IMMDevice** ppEndpoint) override;

    /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDevice(
        /* [annotation][in] */
        _In_  LPCWSTR pwstrId,
        /* [annotation][out] */
        _Out_  IMMDevice** ppDevice) override;


    /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterEndpointNotificationCallback(
        /* [annotation][in] */
        _In_  IMMNotificationClient* pClient) override;

    /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregisterEndpointNotificationCallback(

        /* [annotation][in] */
        _In_  IMMNotificationClient* pClient) override;

    private:
        LONG m_refCount = 1;
        IMMDeviceEnumerator* m_realEnumerator;
};
