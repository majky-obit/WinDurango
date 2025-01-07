#include "pch.h"
#include "ID3DWrappers.h"

HRESULT d3d11x::ID3D11BufferWrapper::QueryInterface(REFIID riid, void** ppvObject)
{
    if (riid == __uuidof(::ID3D11Buffer))
    {
        *ppvObject = this;
        AddRef( );
        return S_OK;
    }
    else
    {
        // DEBUG
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
        printf("[IDXGIDeviceWrapper] QueryInterface: %s\n", iidstr);
    }

    return m_realBuffer->QueryInterface(riid, ppvObject);
}

ULONG d3d11x::ID3D11BufferWrapper::AddRef( )
{
    return InterlockedIncrement(&m_RefCount);
}

ULONG d3d11x::ID3D11BufferWrapper::Release( )
{
    ULONG refCount = InterlockedDecrement(&m_RefCount);
    if (refCount == 0)
        delete this;
    return refCount;
}


void __stdcall d3d11x::ID3D11BufferWrapper::GetDevice(ID3D11Device** ppDevice)
{
    // Probably not necessary but just to be sure -AleBlbl
    ::ID3D11Device** device = nullptr;
    this->m_realBuffer->GetDevice(device);
    ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
}

HRESULT __stdcall d3d11x::ID3D11BufferWrapper::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return m_realBuffer->GetPrivateData(guid, pDataSize, pData);
}

HRESULT __stdcall d3d11x::ID3D11BufferWrapper::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
{
    return m_realBuffer->SetPrivateData(guid, DataSize, pData);
}

HRESULT __stdcall d3d11x::ID3D11BufferWrapper::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
{
    return m_realBuffer->SetPrivateDataInterface(guid, pData);
}

HRESULT __stdcall d3d11x::ID3D11BufferWrapper::SetName(const wchar_t* name)
{
    printf("[ID3D11RenderTargetViewWrapper]: SetName STUB\n");
    return S_OK;
}

void __stdcall d3d11x::ID3D11BufferWrapper::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
{
    return m_realBuffer->GetType(pResourceDimension);
}

void __stdcall d3d11x::ID3D11BufferWrapper::SetEvictionPriority(UINT EvictionPriority)
{
    return m_realBuffer->SetEvictionPriority(EvictionPriority);
}

UINT __stdcall d3d11x::ID3D11BufferWrapper::GetEvictionPriority(void)
{
    return m_realBuffer->GetEvictionPriority( );
}

void __stdcall d3d11x::ID3D11BufferWrapper::GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor)
{
    printf("[ID3D11Texture2DWrapper]: GetDescriptor STUB\n");
}

void __stdcall d3d11x::ID3D11BufferWrapper::GetDesc(D3D11_BUFFER_DESC* pDesc)
{
    return m_realBuffer->GetDesc(pDesc);
}

