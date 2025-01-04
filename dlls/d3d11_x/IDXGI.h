#pragma once
#include "pch.h"
#include "d3d_x/d3d11_x_device.h"
#include "d3d_x/d3d_x.hpp"
#include <typeinfo>


namespace d3d11x
{

    /*struct IGraphicsUnknownn
    {
    public:



        virtual HRESULT QueryInterface(REFIID riid, void** ppvObject) PURE;
        virtual ULONG AddRef( ) = 0;
        virtual ULONG Release( ) = 0;
    };*/

    //MIDL_INTERFACE("aec22fb8-76f3-4639-9be0-28eb43a67a2e")
    struct IDXGIObject_X : public IGraphicsUnknown
    {
        /* 0x0000: fields for IGraphicsUnknown */
    /* 0x0010 */ public: void* m_pPrivateData;

    public:
        virtual HRESULT STDMETHODCALLTYPE SetPrivateData(_In_  REFGUID Name, UINT DataSize, _In_reads_bytes_(DataSize)  const void* pData) PURE;
        virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_  REFGUID Name, _In_opt_  const IUnknown* pUnknown) PURE;
        /*virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterfaceGraphics(_In_ REFGUID Name, const IGraphicsUnknown* data)
        {
            return this->SetPrivateDataInterface(Name, reinterpret_cast<IUnknown const*>(data));
        }*/
        virtual HRESULT STDMETHODCALLTYPE GetPrivateData(_In_  REFGUID Name, _Inout_  UINT* pDataSize, _Out_writes_bytes_(*pDataSize)  void* pData) PURE;
        virtual HRESULT STDMETHODCALLTYPE GetParent(_In_  REFIID riid, _COM_Outptr_  void** ppParent) PURE;
    };




    // Adapted to Xbox one (look at pdb)
    //MIDL_INTERFACE("7b7166ec-21c7-44ae-b21a-c9ae321ae369")
    struct IDXGIFactory_X : public IDXGIObject_X
    {
    public:

        /* 0x0000: fields for IDXGIObject */
    /* 0x0018 */ public: IDXGIAdapter2* m_pAdapter;

                       virtual HRESULT STDMETHODCALLTYPE EnumAdapters(
                           UINT Adapter,

                           IDXGIAdapter** ppAdapter) PURE;

                       virtual HRESULT STDMETHODCALLTYPE MakeWindowAssociation(
                           HWND WindowHandle,
                           UINT Flags) PURE;

                       virtual HRESULT STDMETHODCALLTYPE GetWindowAssociation(
                           HWND* pWindowHandle) PURE;

                       virtual HRESULT STDMETHODCALLTYPE CreateSwapChain(
                           IGraphicsUnknown* pDevice,
                           DXGI_SWAP_CHAIN_DESC* pDesc,
                           IDXGISwapChain** ppSwapChain) PURE;

                       virtual HRESULT STDMETHODCALLTYPE CreateSoftwareAdapter(
                           HMODULE Module,
                           IDXGIAdapter** ppAdapter) PURE;

    };


    // Adapted to Xbox one (look at pdb)
    //MIDL_INTERFACE("770aae78-f26f-4dba-a829-253c83d1b387")
    struct IDXGIFactory1_X : public IDXGIFactory_X
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumAdapters1(UINT Adapter, IDXGIAdapter1** ppAdapter) PURE;

        virtual BOOL STDMETHODCALLTYPE IsCurrent(void) PURE;
    };


    // Adapted to Xbox one (look at pdb)
    //MIDL_INTERFACE("50c83a1c-e072-4c48-87b0-3630fa36a6d0")
    struct IDXGIFactory2_X : public IDXGIFactory1_X
    {
    public:
        virtual BOOL STDMETHODCALLTYPE IsWindowedStereoEnabled(void) PURE;



        virtual HRESULT STDMETHODCALLTYPE CreateSwapChainForHwnd(IGraphicsUnknown* pDevice,
            HWND hWnd, const DXGI_SWAP_CHAIN_DESC1* pDesc,
            const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
            IDXGIOutput* pRestrictToOutput,
            IDXGISwapChain1** ppSwapChain) PURE;

        virtual HRESULT STDMETHODCALLTYPE CreateSwapChainForCoreWindow(
            IGraphicsUnknown* pDevice,
            IUnknown* pWindow,
            const DXGI_SWAP_CHAIN_DESC1* pDesc,
            IDXGIOutput* pRestrictToOutput,
            IDXGISwapChain1** ppSwapChain) PURE;

        virtual HRESULT STDMETHODCALLTYPE GetSharedResourceAdapterLuid(
            HANDLE hResource,
            LUID* pLuid) PURE;

        virtual HRESULT STDMETHODCALLTYPE RegisterStereoStatusWindow(
            HWND WindowHandle,
            UINT wMsg,
            DWORD* pdwCookie) PURE;

        virtual HRESULT STDMETHODCALLTYPE RegisterStereoStatusEvent(
            HANDLE hEvent,
            DWORD* pdwCookie) PURE;

        virtual void STDMETHODCALLTYPE UnregisterStereoStatus(
            DWORD dwCookie) PURE;

        virtual HRESULT STDMETHODCALLTYPE RegisterOcclusionStatusWindow(
            HWND WindowHandle,
            UINT wMsg,
            DWORD* pdwCookie) PURE;

        virtual HRESULT STDMETHODCALLTYPE RegisterOcclusionStatusEvent(
            HANDLE hEvent,
            DWORD* pdwCookie) PURE;

        virtual void STDMETHODCALLTYPE UnregisterOcclusionStatus(
            DWORD dwCookie) PURE;

        virtual HRESULT STDMETHODCALLTYPE CreateSwapChainForComposition(
            IGraphicsUnknown* pDevice,
            const DXGI_SWAP_CHAIN_DESC1* pDesc,
            IDXGIOutput* pRestrictToOutput,
            IDXGISwapChain1** ppSwapChain) PURE;

    };


    struct IDXGIAdapter_X : IDXGIObject_X
    {
        virtual HRESULT STDMETHODCALLTYPE EnumOutputs(UINT Output, IDXGIOutput** ppOutput) PURE;

        virtual HRESULT STDMETHODCALLTYPE GetDesc(DXGI_ADAPTER_DESC* pDesc) PURE;

        virtual HRESULT STDMETHODCALLTYPE CheckInterfaceSupport(REFGUID InterfaceName, LARGE_INTEGER* pUMDVersion) PURE;

    };

    struct IDXGIDevice_X : d3d11x::IDXGIObject_X
    {
        virtual HRESULT STDMETHODCALLTYPE GetAdapter(IDXGIAdapter_X** pAdapter) PURE;

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

}
