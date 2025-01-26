#pragma once
#include "dxgi_object.hpp"

namespace wdi
{
	D3DINTERFACE(IDXGIAdapter, 2411e7e1, 12ac, 4ccf, bd, 14, 97, 98, e8, 53, 4d, c0) : public wd::dxgi_object {
	public:
		virtual HRESULT STDMETHODCALLTYPE EnumOutputs(UINT Output, IDXGIOutput** ppOutput) PURE;
		virtual HRESULT STDMETHODCALLTYPE GetDesc(DXGI_ADAPTER_DESC* pDesc) PURE;
		virtual HRESULT STDMETHODCALLTYPE CheckInterfaceSupport(REFGUID InterfaceName, LARGE_INTEGER* pUMDVersion) PURE;
	};
}

namespace wd
{
	class dxgi_adapter : public wdi::IDXGIAdapter
	{
	public:
		dxgi_adapter(::IDXGIAdapter* adapter) : wrapped_interface(adapter) { wrapped_interface->AddRef( ); }

		IGU_DEFINE_REF

		HRESULT GetParent(const IID& riid, void** ppParent) override;
		HRESULT EnumOutputs(UINT Output, IDXGIOutput** ppOutput) override;
		HRESULT GetDesc(DXGI_ADAPTER_DESC* pDesc) override;
		HRESULT CheckInterfaceSupport(const GUID& InterfaceName, LARGE_INTEGER* pUMDVersion) override;
		::IDXGIAdapter* wrapped_interface;
	};
}
