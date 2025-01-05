#include "pch.h"
#include "ID3DWrappers.h"

namespace d3d11x
{
    HRESULT ID3D11Texture2DWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        if (riid == __uuidof(::ID3D11Texture2D))
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

        return m_realTexture->QueryInterface(riid, ppvObject);
    }

    ULONG ID3D11Texture2DWrapper::AddRef( )
    {
        return InterlockedIncrement(&m_refCount);
    }

    ULONG ID3D11Texture2DWrapper::Release( )
    {
        ULONG refCount = InterlockedDecrement(&m_refCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

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

}