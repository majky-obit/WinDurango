#pragma once
#include "dxgi_object.hpp"

namespace wdi
{
	D3DINTERFACE(IDXGIDevice, 54ec77fa, 1377, 44e6, 8c, 32, 88, fd, 5f, 44, c8, 4c) : public wd::dxgi_object {
	public:
		virtual HRESULT STDMETHODCALLTYPE GetAdapter(IDXGIAdapter** pAdapter) PURE;
        virtual HRESULT STDMETHODCALLTYPE CreateSurface(const DXGI_SURFACE_DESC* pDesc, UINT NumSurfaces, DXGI_USAGE Usage,
            const DXGI_SHARED_RESOURCE* pSharedResource,
            _Out_writes_(NumSurfaces)  IDXGISurface** ppSurface) PURE;
        virtual HRESULT STDMETHODCALLTYPE QueryResourceResidency(
            _In_reads_(NumResources)  IGraphicsUnknown** ppResources,
            _Out_writes_(NumResources)  DXGI_RESIDENCY* pResidencyStatus,
            /* [in] */ UINT NumResources) PURE;
        virtual HRESULT STDMETHODCALLTYPE SetGPUThreadPriority(
            /* [in] */ INT Priority) PURE;
        virtual HRESULT STDMETHODCALLTYPE GetGPUThreadPriority(
            _Out_  INT* pPriority) PURE;
	};

	D3DINTERFACE(IDXGIDeviceSubObject, 3d3e0379, f9de, 4d58, bb, 6c, 18, d6, 29, 92, f1, a6) : public wd::dxgi_object
	{
		virtual HRESULT STDMETHODCALLTYPE GetDevice(REFIID riid, void** ppDevice) = 0;
	};
}

namespace wd
{
	class dxgi_device : public wdi::IDXGIDevice
	{

	};
}


