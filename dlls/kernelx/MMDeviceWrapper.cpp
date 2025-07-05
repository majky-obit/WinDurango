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
#include "pch.h"
#include "MMDeviceWrapper.h"

MMDeviceWrapper::MMDeviceWrapper(IMMDevice* realDevice) : m_realDevice(realDevice)
{
    if (m_realDevice)
        m_realDevice->AddRef();
}

HRESULT __stdcall MMDeviceWrapper::QueryInterface(REFIID riid, void** ppvObject)
{
    LOG_INFO("[MMDeviceWrapper] QueryInterface called\n");
    LPOLESTR str = nullptr;
    StringFromIID(riid, &str);
    LOG_INFO_W(L"[QueryInterface] IID requested: %ls\n", str);
    CoTaskMemFree(str);

    return m_realDevice->QueryInterface(riid, ppvObject);
}

ULONG __stdcall MMDeviceWrapper::AddRef(void)
{
    LOG_INFO("[MMDeviceWrapper] AddRef called\n");
    return InterlockedIncrement(&m_refCount);
}

ULONG __stdcall MMDeviceWrapper::Release(void)
{
    LOG_INFO("[MMDeviceWrapper] Release called\n");
    ULONG count = InterlockedDecrement(&m_refCount);
    if (count == 0)
    {
        if (m_realDevice)
            m_realDevice->Release();
        delete this;
    }
    return count;
}

HRESULT __stdcall MMDeviceWrapper::Activate(REFIID iid, DWORD dwClsCtx, PROPVARIANT* pActivationParams, void** ppInterface)
{
    LOG_INFO("[MMDeviceWrapper] Activate called\n");
    return m_realDevice->Activate(iid, dwClsCtx, pActivationParams, ppInterface);

}


HRESULT __stdcall MMDeviceWrapper::OpenPropertyStore(DWORD stgmAccess, IPropertyStore** ppProperties)
{
    LOG_INFO("[MMDeviceWrapper] OpenPropertyStore called\n");
    return m_realDevice->OpenPropertyStore(stgmAccess, ppProperties);
}

HRESULT __stdcall MMDeviceWrapper::GetId(LPWSTR* ppstrId)
{
    LOG_INFO("[MMDeviceWrapper] GetId called\n");
    return m_realDevice->GetId(ppstrId);
}

HRESULT __stdcall MMDeviceWrapper::GetState(DWORD* pdwState)
{
    LOG_INFO("[MMDeviceWrapper] GetState called\n");
    return m_realDevice->GetState(pdwState);
}