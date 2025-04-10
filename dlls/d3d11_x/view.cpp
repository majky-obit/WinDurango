#include "view.hpp"

//wdi::ID3D11RenderTargetView starts.

void STDMETHODCALLTYPE wd::render_target_view::GetDesc(D3D11_RENDER_TARGET_VIEW_DESC* pDesc)
{
    wrapped_interface->GetDesc(pDesc);
}

void wd::render_target_view::GetDevice(ID3D11Device** ppDevice)
{
    printf("WARN: render_target_view::GetDevice returns a PC device!!\n");
    wrapped_interface->GetDevice(ppDevice);
}

HRESULT wd::render_target_view::GetPrivateData(const GUID& guid, UINT* pDataSize, void* pData)
{
    return wrapped_interface->GetPrivateData(guid, pDataSize, pData);
}

HRESULT wd::render_target_view::SetPrivateData(const GUID& guid, UINT DataSize, const void* pData)
{
    return wrapped_interface->SetPrivateData(guid, DataSize, pData);
}

HRESULT wd::render_target_view::SetPrivateDataInterface(const GUID& guid, const IUnknown* pData)
{
    return wrapped_interface->SetPrivateDataInterface(guid, pData);
}

HRESULT wd::render_target_view::SetPrivateDataInterfaceGraphics(const GUID& guid, const IGraphicsUnknown* pData)
{
    TRACE_NOT_IMPLEMENTED("render_target_view");
    return E_NOTIMPL;
}

void wd::render_target_view::GetResource(wdi::ID3D11Resource** ppResource)
{
    D3D11_RENDER_TARGET_VIEW_DESC desc;
    wrapped_interface->GetDesc(&desc);

    // FIXME: this only targets 2D textures, but it doesn't matter since all texture* classes are the same
    ::ID3D11Texture2D* texture2d = nullptr;
    wrapped_interface->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
    *reinterpret_cast<wdi::ID3D11Texture2D**>(ppResource) = new texture_2d(texture2d);
}

//wdi::ID3D11RenderTargetView ends.




//wdi::ID3D11DepthStencilView starts.

void STDMETHODCALLTYPE wd::depth_stencil_view::GetDesc(D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc)
{
    printf("WARN: depth_stencil_view:: GetDesc!!!\n");
    wrapped_interface->GetDesc(pDesc);
}

void wd::depth_stencil_view::GetDevice(ID3D11Device** ppDevice)
{
    printf("WARN: depth_stencil_view::GetDevice returns a PC device!!\n");
    wrapped_interface->GetDevice(ppDevice);
}

HRESULT wd::depth_stencil_view::GetPrivateData(const GUID& guid, UINT* pDataSize, void* pData)
{
    return wrapped_interface->GetPrivateData(guid, pDataSize, pData);
}

HRESULT wd::depth_stencil_view::SetPrivateData(const GUID& guid, UINT DataSize, const void* pData)
{
    return wrapped_interface->SetPrivateData(guid, DataSize, pData);
}

HRESULT wd::depth_stencil_view::SetPrivateDataInterface(const GUID& guid, const IUnknown* pData)
{
    return wrapped_interface->SetPrivateDataInterface(guid, pData);
}

HRESULT wd::depth_stencil_view::SetPrivateDataInterfaceGraphics(const GUID& guid, const IGraphicsUnknown* pData)
{
    TRACE_NOT_IMPLEMENTED("depth_stencil_view");
    return E_NOTIMPL;
}

void wd::depth_stencil_view::GetResource(wdi::ID3D11Resource** ppResource)
{
    D3D11_DEPTH_STENCIL_VIEW_DESC desc;
    wrapped_interface->GetDesc(&desc);

    // FIXME: this only targets 2D textures, but it doesn't matter since all texture* classes are the same
    ::ID3D11Texture2D* texture2d = nullptr;
    wrapped_interface->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
    *reinterpret_cast<wdi::ID3D11Texture2D**>(ppResource) = new texture_2d(texture2d);
}

//wdi::ID3D11DepthStencilView ends.




//wdi::ID3D11ShaderResourceView starts.

void STDMETHODCALLTYPE wd::shader_resource_view::GetDesc(D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc)
{
    wrapped_interface->GetDesc(pDesc);
}

void wd::shader_resource_view::GetDevice(ID3D11Device** ppDevice)
{
    printf("WARN: shader_resource_view::GetDevice returns a PC device!!\n");
    wrapped_interface->GetDevice(ppDevice);
}

HRESULT wd::shader_resource_view::GetPrivateData(const GUID& guid, UINT* pDataSize, void* pData)
{
    return wrapped_interface->GetPrivateData(guid, pDataSize, pData);
}

HRESULT wd::shader_resource_view::SetPrivateData(const GUID& guid, UINT DataSize, const void* pData)
{
    return wrapped_interface->SetPrivateData(guid, DataSize, pData);
}

HRESULT wd::shader_resource_view::SetPrivateDataInterface(const GUID& guid, const IUnknown* pData)
{
    return wrapped_interface->SetPrivateDataInterface(guid, pData);
}

HRESULT wd::shader_resource_view::SetPrivateDataInterfaceGraphics(const GUID& guid, const IGraphicsUnknown* pData)
{
    TRACE_NOT_IMPLEMENTED("shader_resource_view");
    return E_NOTIMPL;
}

void wd::shader_resource_view::GetResource(wdi::ID3D11Resource** ppResource)
{
    D3D11_SHADER_RESOURCE_VIEW_DESC desc;
    wrapped_interface->GetDesc(&desc);

    // FIXME: this only targets 2D textures, but it doesn't matter since all texture* classes are the same
    ::ID3D11Texture2D* texture2d = nullptr;
    wrapped_interface->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
    *reinterpret_cast<wdi::ID3D11Texture2D**>(ppResource) = new texture_2d(texture2d);
}

//wdi::ID3D11ShaderResourceView ends.




//wdi::ID3D11UnorderedAccessView starts.

void wd::unordered_access_view::GetDesc(D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc)
{
    wrapped_interface->GetDesc(pDesc);
}

void wd::unordered_access_view::GetDevice(ID3D11Device** ppDevice)
{
    printf("WARN: depth_stencil_view::GetDevice returns a PC device!!\n");
    wrapped_interface->GetDevice(ppDevice);
}

HRESULT wd::unordered_access_view::GetPrivateData(const GUID& guid, UINT* pDataSize, void* pData)
{
    return wrapped_interface->GetPrivateData(guid, pDataSize, pData);
}

HRESULT wd::unordered_access_view::SetPrivateData(const GUID& guid, UINT DataSize, const void* pData)
{
    return wrapped_interface->SetPrivateData(guid, DataSize, pData);
}

HRESULT wd::unordered_access_view::SetPrivateDataInterface(const GUID& guid, const IUnknown* pData)
{
    return wrapped_interface->SetPrivateDataInterface(guid, pData);
}

HRESULT wd::unordered_access_view::SetPrivateDataInterfaceGraphics(const GUID& guid, const IGraphicsUnknown* pData)
{
    TRACE_NOT_IMPLEMENTED("shader_resource_view");
    return E_NOTIMPL;
}

void wd::unordered_access_view::GetResource(wdi::ID3D11Resource** ppResource)
{
    D3D11_UNORDERED_ACCESS_VIEW_DESC desc;
    wrapped_interface->GetDesc(&desc);

    // FIXME: this only targets 2D textures, but it doesn't matter since all texture* classes are the same
    ::ID3D11Texture2D* texture2d = nullptr;
    wrapped_interface->GetResource(reinterpret_cast<::ID3D11Resource**>(&texture2d));
    *reinterpret_cast<wdi::ID3D11Texture2D**>(ppResource) = new texture_2d(texture2d);
}

//wdi::ID3D11UnorderedAccessView ends.