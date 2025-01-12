#include "pch.h"
#include "ID3DWrappers.h"

namespace d3d11x {
    HRESULT ID3D11ResourceWrapperX::QueryInterface(REFIID riid, void** ppvObject)
	{
		// DEBUG
		char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
		OLECHAR iidwstr[ sizeof(iidstr) ];
		StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
		WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
		printf("[ID3D11ResourceWrapperX] QueryInterface: %s\n", iidstr);

        *ppvObject = nullptr;
        return E_NOINTERFACE;
    }

    ULONG ID3D11ResourceWrapperX::AddRef( )
    {
        printf("[ID3D11ResourceWrapperX] --> AddRef\n");
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG ID3D11ResourceWrapperX::Release( )
    {
        printf("[ID3D11ResourceWrapperX] --> Release\n");
        ULONG refCount = InterlockedDecrement(&m_RefCount);
        if (refCount == 0)
            delete this;
        return refCount;
    }

    // @Patoke todo: unwrap?
    void __stdcall ID3D11ResourceWrapperX::GetDevice(ID3D11Device** ppDevice)
    {
        // Probably not necessary but just to be sure -AleBlbl
        ::ID3D11Device** device = nullptr;
        this->m_realResource->GetDevice(device);
        ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
    }

    HRESULT __stdcall ID3D11ResourceWrapperX::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
    {
        return m_realResource->GetPrivateData(guid, pDataSize, pData);
    }

    HRESULT __stdcall ID3D11ResourceWrapperX::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
    {
        return m_realResource->SetPrivateData(guid, DataSize, pData);
    }

    HRESULT __stdcall ID3D11ResourceWrapperX::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
    {
        return m_realResource->SetPrivateDataInterface(guid, pData);
    }

    HRESULT __stdcall ID3D11ResourceWrapperX::SetName(const wchar_t* name)
    {
        printf("[ID3D11ResourceWrapperX]: SetName STUB\n");
        return S_OK;
    }

    void __stdcall ID3D11ResourceWrapperX::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
    {
        return m_realResource->GetType(pResourceDimension);
    }

    void __stdcall ID3D11ResourceWrapperX::SetEvictionPriority(UINT EvictionPriority)
    {
        return m_realResource->SetEvictionPriority(EvictionPriority);
    }

    UINT __stdcall ID3D11ResourceWrapperX::GetEvictionPriority(void)
    {
        return m_realResource->GetEvictionPriority( );
    }

    void __stdcall ID3D11ResourceWrapperX::GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor)
    {
        printf("[ID3D11ResourceWrapperX]: GetDescriptor STUB\n");
    }
}