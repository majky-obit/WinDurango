#include "dxgi_device.h"
#include "dxgi_adapter.h"

HRESULT wd::dxgi_device::GetParent(const IID& riid, void** ppParent)
{
	HRESULT hr = wrapped_interface->GetParent(riid, ppParent);
	AddRef( );

	if (riid == __uuidof(IDXGIAdapter)) {
		*ppParent = new dxgi_adapter(static_cast<IDXGIAdapter*>(*ppParent));
	}

	return hr;
}

HRESULT wd::dxgi_device::SetPrivateData(const GUID& Name, UINT DataSize, const void* pData)
{
	return wrapped_interface->SetPrivateData(Name, DataSize, pData);
}

HRESULT wd::dxgi_device::GetAdapter(wdi::IDXGIAdapter** pAdapter)
{
	IDXGIAdapter* adapter;
	HRESULT hr = wrapped_interface->GetAdapter(&adapter);

	*pAdapter = new dxgi_adapter(adapter);
	return hr;
}

HRESULT wd::dxgi_device::CreateSurface(const DXGI_SURFACE_DESC* pDesc, UINT NumSurfaces, DXGI_USAGE Usage,
	const DXGI_SHARED_RESOURCE* pSharedResource, IDXGISurface** ppSurface)
{
	return wrapped_interface->CreateSurface(pDesc, NumSurfaces, Usage, pSharedResource, ppSurface);
}

HRESULT wd::dxgi_device::QueryResourceResidency(IGraphicsUnknown** ppResources, DXGI_RESIDENCY* pResidencyStatus,
	UINT NumResources)
{
	TRACE_NOT_IMPLEMENTED("dxgi_device");
	return E_NOTIMPL;
}

HRESULT wd::dxgi_device::SetGPUThreadPriority(INT Priority)
{
	return wrapped_interface->SetGPUThreadPriority(Priority);
}

HRESULT wd::dxgi_device::GetGPUThreadPriority(INT* pPriority)
{
	return wrapped_interface->GetGPUThreadPriority(pPriority);
}
