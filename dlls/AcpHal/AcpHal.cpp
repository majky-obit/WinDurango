#include "pch.h"
#include "AcpHal.h"

#include <basetyps.h>
#include <cstdio>
#include <stdlib.h>
#include "../common/debug.h"

#include "contexts.h"
#include <new>

struct SHAPE_CONTEXTS {
    UINT32 numSrcContexts;
    UINT32 numEqCompContexts;
    UINT32 numFiltVolContexts;
    UINT32 numDmaContexts;
    UINT32 numXmaContexts;
    UINT32 numPcmContexts;
    SHAPE_SRC_CONTEXT* srcContextArray;
    SHAPE_EQCOMP_CONTEXT* eqCompContextArray;
    SHAPE_FILTVOL_CONTEXT* filtVolContextArray;
    SHAPE_DMA_CONTEXT* dmaContextArray;
    SHAPE_XMA_CONTEXT* xmaContextArray;
    SHAPE_PCM_CONTEXT* pcmContextArray;
    APU_ADDRESS apuSrcContextArray;
    APU_ADDRESS apuEqCompContextArray;
    APU_ADDRESS apuFiltVolContextArray;
    APU_ADDRESS apuDmaContextArray;
    APU_ADDRESS apuXmaContextArray;
    APU_ADDRESS apuPcmContextArray;
};


HRESULT AcpHalAllocateShapeContexts_X(SHAPE_CONTEXTS* ctx) {
    return E_NOTIMPL;
}

HRESULT AcpHalReleaseShapeContexts_X() {
    DEBUG_PRINT( );
	return S_OK;
}

HRESULT AcpHalCreate_X(IAcpHal** acpInterface) {
	EnterCriticalSection((LPCRITICAL_SECTION)&criticalSection->LockSemaphore);

    if (!acpInterface)
    {
        LeaveCriticalSection((LPCRITICAL_SECTION)&criticalSection->LockSemaphore);
        return E_INVALIDARG;
    }

    *acpInterface = new(std::nothrow) IAcpHal();

    LeaveCriticalSection((LPCRITICAL_SECTION)&criticalSection->LockSemaphore);

    return *acpInterface ? S_OK : E_OUTOFMEMORY;
}

UINT32 AllocAlignment;

HRESULT ApuAlloc_X(
         void** virtualAddress,
         APU_ADDRESS* physicalAddress,
         UINT32 sizeInBytes,
         UINT32 alignmentInBytes,
         UINT32 flags
)
{
    DEBUG_PRINT( );
    AllocAlignment = alignmentInBytes;
    *virtualAddress = _aligned_malloc(sizeInBytes, alignmentInBytes);
    return S_OK;
}

HRESULT ApuCreateHeap_X(size_t initialSize, size_t maximumSize) {
    // Don't think we need that as this is for chaning memory pool iirc...
    return 0;
}

HRESULT ApuFree_X(void* virtualAddress) {
    DEBUG_PRINT( );
    _aligned_free(virtualAddress);
    return S_OK;
}

HRESULT ApuHeapGetState_X(
         ApuHeapState* apuHeapState,
         UINT32 flags
)
{
    DEBUG_PRINT( );
    return 0;
}

bool ApuIsVirtualAddressValid_X(
         const void* virtualAddress,
         UINT32 physicalAlignmentInBytes
)
{
    DEBUG_PRINT( );
    return 0;
}
APU_ADDRESS ApuMapVirtualAddress_X(
         const void* virtualAddress
)
{
    DEBUG_PRINT( );
    return 0;
}

void* ApuMapApuAddress_X(
         APU_ADDRESS apuPhysicalAddress
)
{
    DEBUG_PRINT( );
    return 0;
}
