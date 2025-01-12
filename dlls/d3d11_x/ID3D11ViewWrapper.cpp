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

        // DEBUG
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
        printf("[IDXGIDeviceWrapper] QueryInterface: %s\n", iidstr);
        

        *ppvObject = nullptr;
        return E_NOINTERFACE;
    }

    ULONG ID3D11RenderTargetViewWrapper::AddRef( )
    {
        printf("[ID3D11RenderTargetViewWrapper] --> AddRef\n");
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11RenderTargetViewWrapper::Release( )
    {
        printf("[ID3D11RenderTargetViewWrapper] --> Release\n");
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
        D3D11_RENDER_TARGET_VIEW_DESC desc;
		m_realTarget->GetDesc(&desc);

        printf("RenderTargetView GetResource Dimension: %i\n", desc.ViewDimension);

        ::ID3D11Texture2D* texture2d = nullptr;
        m_realTarget->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
        *reinterpret_cast<ID3D11Texture2D_X**>(ppResource) = new ID3D11Texture2DWrapper(texture2d);
    }

    void __stdcall ID3D11RenderTargetViewWrapper::GetDesc(D3D11_RENDER_TARGET_VIEW_DESC* pDesc)
    {
        m_realTarget->GetDesc(pDesc);
    }

    HRESULT ID3D11DepthStencilViewWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        if (riid == __uuidof(::ID3D11DepthStencilView))
        {
            *ppvObject = this;
            AddRef( );
            return S_OK;
        }

        // DEBUG
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
        printf("[IDXGIDeviceWrapper] QueryInterface: %s\n", iidstr);

        *ppvObject = nullptr;
        return E_NOINTERFACE;
    }

    ULONG ID3D11DepthStencilViewWrapper::AddRef( )
    {
        printf("[ID3D11DepthStencilViewWrapper] --> AddRef\n");
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11DepthStencilViewWrapper::Release( )
    {
        printf("[ID3D11DepthStencilViewWrapper] --> Release\n");
        ULONG refCount = InterlockedDecrement(&m_RefCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    void __stdcall ID3D11DepthStencilViewWrapper::GetDevice(ID3D11Device** ppDevice)
    {
        // Probably not necessary but just to be sure -AleBlbl
        ::ID3D11Device** device = nullptr;
        this->m_realTarget->GetDevice(device);
        ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
    }

    HRESULT __stdcall ID3D11DepthStencilViewWrapper::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
    {
        return m_realTarget->GetPrivateData(guid, pDataSize, pData);
    }

    HRESULT __stdcall ID3D11DepthStencilViewWrapper::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
    {
        return m_realTarget->SetPrivateData(guid, DataSize, pData);
    }

    HRESULT __stdcall ID3D11DepthStencilViewWrapper::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
    {
        return m_realTarget->SetPrivateDataInterface(guid, pData);
    }

    HRESULT __stdcall ID3D11DepthStencilViewWrapper::SetName(const wchar_t* name)
    {
        printf("[ID3D11DepthStencilViewWrapper]: SetName STUB\n");
        return S_OK;
    }

    void __stdcall ID3D11DepthStencilViewWrapper::GetResource(ID3D11Resource** ppResource)
    {
        D3D11_DEPTH_STENCIL_VIEW_DESC desc;
        m_realTarget->GetDesc(&desc);
        printf("DepthStencilView GetResource Dimension: %i\n", desc.ViewDimension);

        ::ID3D11Texture2D* texture2d = nullptr;
        m_realTarget->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
        *reinterpret_cast<ID3D11Texture2D_X**>(ppResource) = new ID3D11Texture2DWrapper(texture2d);
    }

    void __stdcall ID3D11DepthStencilViewWrapper::GetDesc(D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc)
    {
        m_realTarget->GetDesc(pDesc);
    }

    HRESULT ID3D11ShaderResourceViewWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        if (riid == __uuidof(::ID3D11ShaderResourceView))
        {
            *ppvObject = this;
            AddRef( );
            return S_OK;
        }
        
         // DEBUG
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
        printf("[IDXGIDeviceWrapper] QueryInterface: %s\n", iidstr);

        *ppvObject = nullptr;
        return E_NOINTERFACE;
    }

    ULONG ID3D11ShaderResourceViewWrapper::AddRef( )
    {
        printf("[ID3D11ShaderResourceViewWrapper] --> AddRef\n");
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11ShaderResourceViewWrapper::Release( )
    {
        printf("[ID3D11ShaderResourceViewWrapper] --> Release\n");
        ULONG refCount = InterlockedDecrement(&m_RefCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    void __stdcall ID3D11ShaderResourceViewWrapper::GetDevice(ID3D11Device** ppDevice)
    {
        // Probably not necessary but just to be sure -AleBlbl
        ::ID3D11Device** device = nullptr;
        this->m_realTarget->GetDevice(device);
        ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
    }

    HRESULT __stdcall ID3D11ShaderResourceViewWrapper::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
    {
        return m_realTarget->GetPrivateData(guid, pDataSize, pData);
    }

    HRESULT __stdcall ID3D11ShaderResourceViewWrapper::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
    {
        return m_realTarget->SetPrivateData(guid, DataSize, pData);
    }

    HRESULT __stdcall ID3D11ShaderResourceViewWrapper::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
    {
        return m_realTarget->SetPrivateDataInterface(guid, pData);
    }

    HRESULT __stdcall ID3D11ShaderResourceViewWrapper::SetName(const wchar_t* name)
    {
        printf("[ID3D11ShaderResourceViewWrapper]: SetName STUB\n");
        return S_OK;
    }

    void __stdcall ID3D11ShaderResourceViewWrapper::GetResource(ID3D11Resource** ppResource)
    {
        D3D11_SHADER_RESOURCE_VIEW_DESC desc;
        m_realTarget->GetDesc(&desc);
        printf("ShaderResourceView GetResource Dimension: %i\n", desc.ViewDimension);

        ::ID3D11Texture2D* texture2d = nullptr;
        m_realTarget->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
        *reinterpret_cast<ID3D11Texture2D_X**>(ppResource) = new ID3D11Texture2DWrapper(texture2d);
    }

    void __stdcall ID3D11ShaderResourceViewWrapper::GetDesc(D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc)
    {
        m_realTarget->GetDesc(pDesc);
    }

    HRESULT ID3D11UnorderedAccessViewWrapper::QueryInterface(REFIID riid, void** ppvObject)
    {
        if (riid == __uuidof(::ID3D11UnorderedAccessView))
        {
            *ppvObject = this;
            AddRef( );
            return S_OK;
        }

        // DEBUG
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
        printf("[IDXGIDeviceWrapper] QueryInterface: %s\n", iidstr);

        *ppvObject = nullptr;
        return E_NOINTERFACE;
    }

    ULONG ID3D11UnorderedAccessViewWrapper::AddRef( )
    {
        printf("[ID3D11UnorderedAccessViewWrapper] --> AddRef\n");
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11UnorderedAccessViewWrapper::Release( )
    {
        printf("[ID3D11UnorderedAccessViewWrapper] --> Release\n");
        ULONG refCount = InterlockedDecrement(&m_RefCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    void __stdcall ID3D11UnorderedAccessViewWrapper::GetDevice(ID3D11Device** ppDevice)
    {
        // Probably not necessary but just to be sure -AleBlbl
        ::ID3D11Device** device = nullptr;
        this->m_realTarget->GetDevice(device);
        ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
    }

    HRESULT __stdcall ID3D11UnorderedAccessViewWrapper::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
    {
        return m_realTarget->GetPrivateData(guid, pDataSize, pData);
    }

    HRESULT __stdcall ID3D11UnorderedAccessViewWrapper::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
    {
        return m_realTarget->SetPrivateData(guid, DataSize, pData);
    }

    HRESULT __stdcall ID3D11UnorderedAccessViewWrapper::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
    {
        return m_realTarget->SetPrivateDataInterface(guid, pData);
    }

    HRESULT __stdcall ID3D11UnorderedAccessViewWrapper::SetName(const wchar_t* name)
    {
        printf("[ID3D11UnorderedAccessViewWrapper]: SetName STUB\n");
        return S_OK;
    }

    void __stdcall ID3D11UnorderedAccessViewWrapper::GetResource(ID3D11Resource** ppResource)
    {
        D3D11_UNORDERED_ACCESS_VIEW_DESC desc;
        m_realTarget->GetDesc(&desc);
        printf("UnorderedAccessView GetResource Dimension: %i\n", desc.ViewDimension);

        ::ID3D11Texture2D* texture2d = nullptr;
        m_realTarget->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
        *reinterpret_cast<ID3D11Texture2D_X**>(ppResource) = new ID3D11Texture2DWrapper(texture2d);
    }

    void __stdcall ID3D11UnorderedAccessViewWrapper::GetDesc(D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc)
    {
        m_realTarget->GetDesc(pDesc);
    }

}