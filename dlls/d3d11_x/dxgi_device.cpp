#include "dxgi_device.h"

HRESULT wd::dxgi_device::GetParent(const IID& riid, void** ppParent)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_device::SetPrivateData(const GUID& Name, UINT DataSize, const void* pData)
{
	return IDXGIDevice::SetPrivateData(Name, DataSize, pData);
}

HRESULT wd::dxgi_device::GetAdapter(IDXGIAdapter** pAdapter)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_device::CreateSurface(const DXGI_SURFACE_DESC* pDesc, UINT NumSurfaces, DXGI_USAGE Usage,
	const DXGI_SHARED_RESOURCE* pSharedResource, IDXGISurface** ppSurface)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_device::QueryResourceResidency(IGraphicsUnknown** ppResources, DXGI_RESIDENCY* pResidencyStatus,
	UINT NumResources)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_device::SetGPUThreadPriority(INT Priority)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_device::GetGPUThreadPriority(INT* pPriority)
{
	throw std::logic_error("Not implemented");
}
