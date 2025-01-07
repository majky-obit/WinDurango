#include "pch.h"
#include "ID3DWrappers.h"


namespace d3d11x
{
    HRESULT ID3D11RenderTargetViewWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        if (riid == __uuidof(::ID3D11RenderTargetView))
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

        return m_realTarget->QueryInterface(riid, ppvObject);
    }

    ULONG ID3D11RenderTargetViewWrapper::AddRef( )
    {
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11RenderTargetViewWrapper::Release( )
    {
        ULONG refCount = InterlockedDecrement(&m_RefCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    void __stdcall ID3D11RenderTargetViewWrapper::GetDevice(ID3D11Device** ppDevice)
    {
        // Probably not necessary but just to be sure -AleBlbl
        ::ID3D11Device** device = nullptr;
        this->m_realTarget->GetDevice(device);
        ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
    }

    HRESULT __stdcall ID3D11RenderTargetViewWrapper::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
    {
        return m_realTarget->GetPrivateData(guid, pDataSize, pData);
    }

    HRESULT __stdcall ID3D11RenderTargetViewWrapper::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
    {
        return m_realTarget->SetPrivateData(guid, DataSize, pData);
    }

    HRESULT __stdcall ID3D11RenderTargetViewWrapper::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
    {
        return m_realTarget->SetPrivateDataInterface(guid, pData);
    }

    HRESULT __stdcall ID3D11RenderTargetViewWrapper::SetName(const wchar_t* name)
    {
        printf("[ID3D11RenderTargetViewWrapper]: SetName STUB\n");
        return S_OK;
    }

    void __stdcall ID3D11RenderTargetViewWrapper::GetResource(ID3D11Resource** ppResource)
    {
        ::ID3D11Texture2D* texture2d = nullptr;
        m_realTarget->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
        *reinterpret_cast<ID3D11Texture2D_X**>(ppResource) = new ID3D11Texture2DWrapper(texture2d);
    }

    void __stdcall ID3D11RenderTargetViewWrapper::GetDesc(D3D11_RENDER_TARGET_VIEW_DESC* pDesc)
    {
        m_realTarget->GetDesc(pDesc);
    }

}