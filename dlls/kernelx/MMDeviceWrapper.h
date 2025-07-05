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


class MMDeviceWrapper : public IMMDevice
{
public:
    MMDeviceWrapper(IMMDevice* realDevice);

    // IUnknown
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef(void) override;
    ULONG STDMETHODCALLTYPE Release(void) override;

    // IMMDevice
    HRESULT STDMETHODCALLTYPE Activate(REFIID iid, DWORD dwClsCtx, PROPVARIANT* pActivationParams, void** ppInterface) override;
    HRESULT STDMETHODCALLTYPE OpenPropertyStore(DWORD stgmAccess, IPropertyStore** ppProperties) override;
    HRESULT STDMETHODCALLTYPE GetId(LPWSTR* ppstrId) override;
    HRESULT STDMETHODCALLTYPE GetState(DWORD* pdwState) override;


    private:
        LONG m_refCount = 1;  
        IMMDevice* m_realDevice;
};