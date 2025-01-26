#pragma once
#include "graphics_unknown.h"

namespace wdi
{
	D3DINTERFACE(IDXGIObject, aec22fb8, 76f3, 4639, 9b, e0, 28, eb, 43, a6, 7a, 2e) : public wd::graphics_unknown {
		public: void* m_pPrivateData;

		virtual HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID Name, UINT DataSize, const void* pData) = 0;
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID Name, const IUnknown* pUnknown) = 0;
		virtual HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID Name, UINT* pDataSize, void* pData) = 0;
		virtual HRESULT STDMETHODCALLTYPE GetParent(REFIID riid, void** ppParent) = 0;
	};
}

namespace wd {
	class dxgi_object : public wdi::IDXGIObject
	{
	public:
		HRESULT SetPrivateData(const GUID& Name, UINT DataSize, const void* pData) override {
			TRACE_NOT_IMPLEMENTED("dxgi_object");
			return E_NOTIMPL;
		}

		HRESULT SetPrivateDataInterface(const GUID& Name, const IUnknown* pUnknown) override {
			TRACE_NOT_IMPLEMENTED("dxgi_object");
			return E_NOTIMPL;
		}

		HRESULT GetPrivateData(const GUID& Name, UINT* pDataSize, void* pData) override {
			TRACE_NOT_IMPLEMENTED("dxgi_object");
			return E_NOTIMPL;
		}
	};
}