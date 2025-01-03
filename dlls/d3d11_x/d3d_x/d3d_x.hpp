#pragma once
#include <cstdio>

// thanks to Zombie for the idea

#define DX_MAJOR 2
#define DX_MINOR 12

#define MAKEINTVERSION(major, minor) (((0LL + (major)) << 48) | ((0LL + (minor)) << 32))
#define DX_VERSION (((0LL + (DX_MAJOR)) << 48) | ((0LL + (DX_MINOR)) << 32))

#define D3DDECL_UUID(Uuid) __declspec(uuid(#Uuid))
#define D3DINTERFACE(Name, Guid0, Guid1, Guid2, Guid3, Guid4, \
            Guid5, Guid6, Guid7, Guid8, Guid9, Guid10) \
            class D3DDECL_UUID(Guid0-Guid1-Guid2-Guid3##Guid4-Guid5##Guid6##Guid7##Guid8##Guid9##Guid10) Name

D3DINTERFACE(IGraphicsUnknown, aceeea63, e0a9, 4a1c, bb, ec, 71, b2, f4, 85, f7, 58) {
public:

#if !defined(DX_VERSION) || DX_VERSION >= MAKEINTVERSION(2, 18)
    ULONG m_DeviceIndex : 3;
    ULONG m_PrivateDataPresent : 1;
    ULONG m_Reserved : 28;
#endif

#if !defined(DX_VERSION) || DX_VERSION >= MAKEINTVERSION(1, 1)
    ULONG m_RefCount;
#endif

    virtual HRESULT QueryInterface(REFIID riid, void** ppvObject) = 0;
    virtual ULONG AddRef() = 0;
    virtual ULONG Release() = 0;
};

class GraphicsUnknown : public IGraphicsUnknown
{
public:
	explicit GraphicsUnknown(IUnknown* pUnknown)
	{
		m_pUnknown = pUnknown;
	}
    
	HRESULT QueryInterface(REFIID riid, void** ppvObject) override
    {
		// note from unixian: for debugging purposes
        char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
        OLECHAR iidwstr[ sizeof(iidstr) ];
        StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
        WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
		printf("[GraphicsUnknown] QueryInterface: %s\n", iidstr);

		return m_pUnknown->QueryInterface(riid, ppvObject);
    }

	ULONG AddRef() override
    {
        InterlockedIncrement(&m_RefCount);
        return m_pUnknown->AddRef();
    }

	ULONG Release() override
    {
        ULONG refCount = InterlockedDecrement(&m_RefCount);
		m_pUnknown->Release( );
        if (refCount == 0)
        {
            delete this;
        }
        return refCount;
    }

private:
    IUnknown* m_pUnknown;
};