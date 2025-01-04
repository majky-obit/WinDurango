#pragma once
#include "IDXGI.h"


namespace d3d11x
{
    class IDXGIFactoryWrapper : public d3d11x::IDXGIFactory2_X
    {
    public:

        IDXGIFactoryWrapper(IDXGIFactory2* factory) : m_realFactory(factory)
        {

        }


        // IGraphicsUnknown
        HRESULT QueryInterface(REFIID riid, void** ppvObject) override;

        


        ULONG AddRef( ) override;
        ULONG Release( ) override;

        // IDXGIObject
        HRESULT STDMETHODCALLTYPE SetPrivateData(_In_  REFGUID Name, UINT DataSize, _In_reads_bytes_(DataSize)  const void* pData) override;
        HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_  REFGUID Name, _In_opt_  const IUnknown* pUnknown) override;
        HRESULT STDMETHODCALLTYPE GetPrivateData(_In_  REFGUID Name, _Inout_  UINT* pDataSize, _Out_writes_bytes_(*pDataSize)  void* pData) override;
        HRESULT STDMETHODCALLTYPE GetParent(_In_  REFIID riid, _COM_Outptr_  void** ppParent) override;

        // IDXGIFactory
        HRESULT STDMETHODCALLTYPE EnumAdapters(
            UINT Adapter,
            IDXGIAdapter** ppAdapter) override;
        HRESULT STDMETHODCALLTYPE MakeWindowAssociation(
            HWND WindowHandle,
            UINT Flags) override;
        HRESULT STDMETHODCALLTYPE GetWindowAssociation(
            HWND* pWindowHandle) override;
        HRESULT STDMETHODCALLTYPE CreateSwapChain(
            IGraphicsUnknown* pDevice,
            DXGI_SWAP_CHAIN_DESC* pDesc,
            IDXGISwapChain** ppSwapChain) override;
        HRESULT STDMETHODCALLTYPE CreateSoftwareAdapter(
            HMODULE Module,
            IDXGIAdapter** ppAdapter) override;


        // IDXGIFactory1
        HRESULT STDMETHODCALLTYPE EnumAdapters1(UINT Adapter, IDXGIAdapter1** ppAdapter) override;
        BOOL STDMETHODCALLTYPE IsCurrent(void) override;


        // IDXGIFactory2
        BOOL STDMETHODCALLTYPE IsWindowedStereoEnabled(void) override;

        HRESULT STDMETHODCALLTYPE CreateSwapChainForHwnd(IGraphicsUnknown* pDevice,
            HWND hWnd, const DXGI_SWAP_CHAIN_DESC1* pDesc,
            const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
            IDXGIOutput* pRestrictToOutput,
            IDXGISwapChain1** ppSwapChain) override;

        HRESULT STDMETHODCALLTYPE CreateSwapChainForCoreWindow(
            IGraphicsUnknown* pDevice,
            IUnknown* pWindow,
            const DXGI_SWAP_CHAIN_DESC1* pDesc,
            IDXGIOutput* pRestrictToOutput,
            IDXGISwapChain1** ppSwapChain) override;


        HRESULT STDMETHODCALLTYPE GetSharedResourceAdapterLuid(
            HANDLE hResource,
            LUID* pLuid) override;
        HRESULT STDMETHODCALLTYPE RegisterStereoStatusWindow(
            HWND WindowHandle,
            UINT wMsg,
            DWORD* pdwCookie) override;
        HRESULT STDMETHODCALLTYPE RegisterStereoStatusEvent(
            HANDLE hEvent,
            DWORD* pdwCookie) override;
        void STDMETHODCALLTYPE UnregisterStereoStatus(
            DWORD dwCookie) override;
        HRESULT STDMETHODCALLTYPE RegisterOcclusionStatusWindow(
            HWND WindowHandle,
            UINT wMsg,
            DWORD* pdwCookie) override;
        HRESULT STDMETHODCALLTYPE RegisterOcclusionStatusEvent(
            HANDLE hEvent,
            DWORD* pdwCookie) override;
        void STDMETHODCALLTYPE UnregisterOcclusionStatus(
            DWORD dwCookie) override;
        HRESULT STDMETHODCALLTYPE CreateSwapChainForComposition(
            IGraphicsUnknown* pDevice,
            const DXGI_SWAP_CHAIN_DESC1* pDesc,
            IDXGIOutput* pRestrictToOutput,
            IDXGISwapChain1** ppSwapChain) override;

    private:
        long m_refCount = 1;
        IDXGIFactory2* m_realFactory;
    };

    

    class IDXGIAdapterWrapper : public IDXGIAdapter_X
    {
    public:

        IDXGIAdapterWrapper(IDXGIAdapter* adapter) : m_realAdapter(adapter)
        {
        }



        // IGraphicsUnknown
        HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
        ULONG AddRef( ) override;
        ULONG Release( ) override;

        // IDXGIObject
        HRESULT STDMETHODCALLTYPE SetPrivateData(_In_  REFGUID Name, UINT DataSize, _In_reads_bytes_(DataSize)  const void* pData) override;
        HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_  REFGUID Name, _In_opt_  const IUnknown* pUnknown) override;
        HRESULT STDMETHODCALLTYPE GetPrivateData(_In_  REFGUID Name, _Inout_  UINT* pDataSize, _Out_writes_bytes_(*pDataSize)  void* pData) override;
        HRESULT STDMETHODCALLTYPE GetParent(_In_  REFIID riid, _COM_Outptr_  void** ppParent) override;

        HRESULT STDMETHODCALLTYPE EnumOutputs(
             UINT Output,
             IDXGIOutput** ppOutput) override;

        HRESULT STDMETHODCALLTYPE GetDesc(
            DXGI_ADAPTER_DESC* pDesc) override;

        HRESULT STDMETHODCALLTYPE CheckInterfaceSupport(
            REFGUID InterfaceName,
            LARGE_INTEGER* pUMDVersion) override;

    private:
        long m_refCount = 1;
        IDXGIAdapter* m_realAdapter;
    };

    class IDXGIDeviceWrapper : public IDXGIDevice_X
    {
    public:

        IDXGIDeviceWrapper(IDXGIDevice1* device) : m_realDevice(device)
        {

        }

        // IGraphicsUnknown
        HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
        ULONG AddRef( ) override;
        ULONG Release( ) override;

        // IDXGIObject
        HRESULT STDMETHODCALLTYPE SetPrivateData(_In_  REFGUID Name, UINT DataSize, _In_reads_bytes_(DataSize)  const void* pData) override;
        HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_  REFGUID Name, _In_opt_  const IUnknown* pUnknown) override;
        HRESULT STDMETHODCALLTYPE GetPrivateData(_In_  REFGUID Name, _Inout_  UINT* pDataSize, _Out_writes_bytes_(*pDataSize)  void* pData) override;
        HRESULT STDMETHODCALLTYPE GetParent(_In_  REFIID riid, _COM_Outptr_  void** ppParent) override;

        HRESULT STDMETHODCALLTYPE GetAdapter(
            _COM_Outptr_  IDXGIAdapter_X** pAdapter) override;

        HRESULT STDMETHODCALLTYPE CreateSurface(
            _In_  const DXGI_SURFACE_DESC* pDesc,
            UINT NumSurfaces,
            DXGI_USAGE Usage,
            _In_opt_  const DXGI_SHARED_RESOURCE* pSharedResource,
            _Out_writes_(NumSurfaces)  IDXGISurface** ppSurface) override;

        HRESULT STDMETHODCALLTYPE QueryResourceResidency(
            _In_reads_(NumResources)  IGraphicsUnknown** ppResources,
            _Out_writes_(NumResources)  DXGI_RESIDENCY* pResidencyStatus,
             UINT NumResources) override;

        HRESULT STDMETHODCALLTYPE SetGPUThreadPriority(
            INT Priority) override;

        HRESULT STDMETHODCALLTYPE GetGPUThreadPriority(
            _Out_  INT* pPriority) override;

    private:
        long m_refCount = 1;
        IDXGIDevice* m_realDevice;
    };
}