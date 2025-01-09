#include "pch.h"
#include "ID3DWrappers.h"

namespace d3d11x
{

    HRESULT ID3D11Texture1DWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        // DEBUG
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
        printf("[ID3D11Texture1DWrapper] QueryInterface: %s\n", iidstr);
        
        if (riid == __uuidof(::ID3D11Texture1D))
        {
            *ppvObject = this;
            AddRef( );
            return S_OK;
        }

        *ppvObject = nullptr;
        return E_NOINTERFACE;
    }

    ULONG ID3D11Texture1DWrapper::AddRef( )
    {
        printf("[ID3D11Texture1DWrapper] --> AddRef\n");
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11Texture1DWrapper::Release( )
    {
        printf("[ID3D11Texture1DWrapper] --> AddRef\n");
        ULONG refCount = InterlockedDecrement(&m_RefCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    // @Patoke todo: unwrap?
    void __stdcall ID3D11Texture1DWrapper::GetDevice(ID3D11Device** ppDevice)
    {
        // Probably not necessary but just to be sure -AleBlbl
        ::ID3D11Device** device = nullptr;
        this->m_realTexture->GetDevice(device);
        ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
    }

    HRESULT __stdcall ID3D11Texture1DWrapper::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
    {
        return m_realTexture->GetPrivateData(guid, pDataSize, pData);
    }

    HRESULT __stdcall ID3D11Texture1DWrapper::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
    {
        return m_realTexture->SetPrivateData(guid, DataSize, pData);
    }

    HRESULT __stdcall ID3D11Texture1DWrapper::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
    {
        return m_realTexture->SetPrivateDataInterface(guid, pData);
    }

    HRESULT __stdcall ID3D11Texture1DWrapper::SetName(const wchar_t* name)
    {
        printf("[ID3D11Texture1DWrapper]: SetName STUB\n");
        return S_OK;
    }

    void __stdcall ID3D11Texture1DWrapper::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
    {
        return m_realTexture->GetType(pResourceDimension);
    }

    void __stdcall ID3D11Texture1DWrapper::SetEvictionPriority(UINT EvictionPriority)
    {
        return m_realTexture->SetEvictionPriority(EvictionPriority);
    }

    UINT __stdcall ID3D11Texture1DWrapper::GetEvictionPriority(void)
    {
        return m_realTexture->GetEvictionPriority( );
    }

    void __stdcall ID3D11Texture1DWrapper::GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor)
    {
        printf("[ID3D11Texture1DWrapper]: GetDescriptor STUB\n");
    }

    void __stdcall ID3D11Texture1DWrapper::GetDesc(D3D11_TEXTURE1D_DESC* pDesc)
    {
        return m_realTexture->GetDesc(pDesc);
    }

    HRESULT ID3D11Texture2DWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        // DEBUG
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
        printf("[ID3D11Texture2DWrapper] QueryInterface: %s\n", iidstr); 
        
        if (riid == __uuidof(::ID3D11Texture2D))
        {
            *ppvObject = this;
            AddRef( );
            return S_OK;
        }

        *ppvObject = nullptr;
        return E_NOINTERFACE;
    }

    ULONG ID3D11Texture2DWrapper::AddRef( )
    {
        printf("[ID3D11Texture2DWrapper] --> AddRef\n");
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11Texture2DWrapper::Release( )
    {
        printf("[ID3D11Texture2DWrapper] --> AddRef\n");
        ULONG refCount = InterlockedDecrement(&m_RefCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    // @Patoke todo: unwrap?
    void __stdcall ID3D11Texture2DWrapper::GetDevice(ID3D11Device** ppDevice)
    {
        // Probably not necessary but just to be sure -AleBlbl
        ::ID3D11Device** device = nullptr;
        this->m_realTexture->GetDevice(device);
        ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
    }

    HRESULT __stdcall ID3D11Texture2DWrapper::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
    {
        return m_realTexture->GetPrivateData(guid, pDataSize, pData);
    }

    HRESULT __stdcall ID3D11Texture2DWrapper::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
    {
        return m_realTexture->SetPrivateData(guid, DataSize, pData);
    }

    HRESULT __stdcall ID3D11Texture2DWrapper::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
    {
        return m_realTexture->SetPrivateDataInterface(guid, pData);
    }

    HRESULT __stdcall ID3D11Texture2DWrapper::SetName(const wchar_t* name)
    {
        printf("[ID3D11Texture2DWrapper]: SetName STUB\n");
        return S_OK;
    }

    void __stdcall ID3D11Texture2DWrapper::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
    {
        return m_realTexture->GetType(pResourceDimension);
    }

    void __stdcall ID3D11Texture2DWrapper::SetEvictionPriority(UINT EvictionPriority)
    {
        return m_realTexture->SetEvictionPriority(EvictionPriority);
    }

    UINT __stdcall ID3D11Texture2DWrapper::GetEvictionPriority(void)
    {
        return m_realTexture->GetEvictionPriority();
    }

    void __stdcall ID3D11Texture2DWrapper::GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor)
    {
        printf("[ID3D11Texture2DWrapper]: GetDescriptor STUB\n");
    }

    void __stdcall ID3D11Texture2DWrapper::GetDesc(D3D11_TEXTURE2D_DESC* pDesc)
    {
        return m_realTexture->GetDesc(pDesc);
    }

    HRESULT ID3D11Texture3DWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        // DEBUG
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
        printf("[ID3D11Texture3DWrapper] QueryInterface: %s\n", iidstr);
        
        if (riid == __uuidof(::ID3D11Texture3D))
        {
            *ppvObject = this;
            AddRef( );
            return S_OK;
        }

        *ppvObject = nullptr;
        return E_NOINTERFACE;
    }

    ULONG ID3D11Texture3DWrapper::AddRef( )
    {
        printf("[ID3D11Texture3DWrapper] --> AddRef\n");
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11Texture3DWrapper::Release( )
    {
        printf("[ID3D11Texture3DWrapper] --> AddRef\n");
        ULONG refCount = InterlockedDecrement(&m_RefCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    // @Patoke todo: unwrap?
    void __stdcall ID3D11Texture3DWrapper::GetDevice(ID3D11Device** ppDevice)
    {
        // Probably not necessary but just to be sure -AleBlbl
        ::ID3D11Device** device = nullptr;
        this->m_realTexture->GetDevice(device);
        ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
    }

    HRESULT __stdcall ID3D11Texture3DWrapper::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
    {
        return m_realTexture->GetPrivateData(guid, pDataSize, pData);
    }

    HRESULT __stdcall ID3D11Texture3DWrapper::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
    {
        return m_realTexture->SetPrivateData(guid, DataSize, pData);
    }

    HRESULT __stdcall ID3D11Texture3DWrapper::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
    {
        return m_realTexture->SetPrivateDataInterface(guid, pData);
    }

    HRESULT __stdcall ID3D11Texture3DWrapper::SetName(const wchar_t* name)
    {
        printf("[ID3D11Texture3DWrapper]: SetName STUB\n");
        return S_OK;
    }

    void __stdcall ID3D11Texture3DWrapper::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
    {
        return m_realTexture->GetType(pResourceDimension);
    }

    void __stdcall ID3D11Texture3DWrapper::SetEvictionPriority(UINT EvictionPriority)
    {
        return m_realTexture->SetEvictionPriority(EvictionPriority);
    }

    UINT __stdcall ID3D11Texture3DWrapper::GetEvictionPriority(void)
    {
        return m_realTexture->GetEvictionPriority( );
    }

    void __stdcall ID3D11Texture3DWrapper::GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor)
    {
        printf("[ID3D11Texture3DWrapper]: GetDescriptor STUB\n");
    }

    void __stdcall ID3D11Texture3DWrapper::GetDesc(D3D11_TEXTURE3D_DESC* pDesc)
    {
        return m_realTexture->GetDesc(pDesc);
    }

}