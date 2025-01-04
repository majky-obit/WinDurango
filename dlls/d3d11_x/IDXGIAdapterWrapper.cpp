#include "pch.h"
#include "IDXGIWrappers.h"

namespace d3d11x
{




    HRESULT IDXGIAdapterWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        return E_NOTIMPL;
    }

    ULONG IDXGIAdapterWrapper::AddRef( )
    {
        return InterlockedIncrement(&m_refCount);
    }

    ULONG IDXGIAdapterWrapper::Release( )
    {
        ULONG refCount = InterlockedDecrement(&m_refCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    HRESULT __stdcall IDXGIAdapterWrapper::SetPrivateData(REFGUID Name, UINT DataSize, const void* pData)
    {
        return m_realAdapter->SetPrivateData(Name, DataSize, pData);
    }

    HRESULT __stdcall IDXGIAdapterWrapper::SetPrivateDataInterface(REFGUID Name, const IUnknown* pUnknown)
    {
        return m_realAdapter->SetPrivateDataInterface(Name, pUnknown);
    }

    HRESULT __stdcall IDXGIAdapterWrapper::GetPrivateData(REFGUID Name, UINT* pDataSize, void* pData)
    {
        return m_realAdapter->GetPrivateData(Name, pDataSize, pData);
    }

    HRESULT __stdcall IDXGIAdapterWrapper::GetParent(REFIID riid, void** ppParent)
    {
        HRESULT hr = m_realAdapter->GetParent(riid, ppParent);
        if (riid == __uuidof(IDXGIFactory) ||
           riid == __uuidof(IDXGIFactory1) ||
           riid == __uuidof(IDXGIFactory2))
        {
            *ppParent = new IDXGIFactoryWrapper(static_cast<IDXGIFactory2*>(*ppParent));
        }


        return hr;
    }

    HRESULT __stdcall IDXGIAdapterWrapper::EnumOutputs(UINT Output, IDXGIOutput** ppOutput)
    {
        return m_realAdapter->EnumOutputs(Output, ppOutput);
    }

    HRESULT __stdcall IDXGIAdapterWrapper::GetDesc(DXGI_ADAPTER_DESC* pDesc)
    {
        return m_realAdapter->GetDesc(pDesc);
    }

    HRESULT __stdcall IDXGIAdapterWrapper::CheckInterfaceSupport(REFGUID InterfaceName, LARGE_INTEGER* pUMDVersion)
    {
        return m_realAdapter->CheckInterfaceSupport(InterfaceName, pUMDVersion);
    }

}