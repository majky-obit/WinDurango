// AcpHal.cpp
#include "pch.h"
#include "AcpHal.h"

#include <basetyps.h>
#include <cstdio>
#include <stdlib.h>
#include "../common/debug.h"
#include "contexts.h"
#include <intsafe.h>

_RTL_CRITICAL_SECTION* criticalSection = nullptr;

HRESULT AcpHalAllocateShapeContexts_X(SHAPE_CONTEXTS* ctx) {
    if (ctx->numSrcContexts > 0)
        ctx->srcContextArray = static_cast<SHAPE_SRC_CONTEXT*>(malloc(sizeof(SHAPE_SRC_CONTEXT) * ctx->numSrcContexts));

    if (ctx->numEqCompContexts > 0)
        ctx->eqCompContextArray = static_cast<SHAPE_EQCOMP_CONTEXT*>(malloc(sizeof(SHAPE_EQCOMP_CONTEXT) * ctx->numEqCompContexts));

    if (ctx->numFiltVolContexts > 0)
        ctx->filtVolContextArray = static_cast<SHAPE_FILTVOL_CONTEXT*>(malloc(sizeof(SHAPE_FILTVOL_CONTEXT) * ctx->numFiltVolContexts));

    if (ctx->numDmaContexts > 0)
        ctx->dmaContextArray = static_cast<SHAPE_DMA_CONTEXT*>(malloc(sizeof(SHAPE_DMA_CONTEXT) * ctx->numDmaContexts));

    if (ctx->numXmaContexts > 0)
        ctx->xmaContextArray = static_cast<SHAPE_XMA_CONTEXT*>(malloc(sizeof(SHAPE_XMA_CONTEXT) * ctx->numXmaContexts));

    if (ctx->numPcmContexts > 0)
        ctx->pcmContextArray = static_cast<SHAPE_PCM_CONTEXT*>(malloc(sizeof(SHAPE_PCM_CONTEXT) * ctx->numPcmContexts));

    printf("[AcpHal] allocated shape contexts\n");
    return S_OK;
}

HRESULT AcpHalReleaseShapeContexts_X() {
    DEBUG_PRINT( );
    return S_OK;
}

HRESULT __stdcall AcpHalCreate_X(IAcpHal** acpInterface)
{
    EnterCriticalSection((LPCRITICAL_SECTION) &criticalSection->LockSemaphore);

    if (!acpInterface)
    {
        LeaveCriticalSection((LPCRITICAL_SECTION) &criticalSection->LockSemaphore);
        return E_INVALIDARG;
    }

    *acpInterface = new IAcpHal( );

    LeaveCriticalSection((LPCRITICAL_SECTION) &criticalSection->LockSemaphore);

    return *acpInterface ? S_OK : E_OUTOFMEMORY;
}

HRESULT ApuAlloc_X(
         void** virtualAddress,
         APU_ADDRESS* physicalAddress,
         UINT32 sizeInBytes,
         UINT32 alignmentInBytes,
         UINT32 flags
)
{
    alignmentInBytes = 4;
    DEBUG_PRINT( );
    return 0;
}
static APU_HEAP g_ApuHeap = { 0 };
HRESULT __stdcall ApuCreateHeap_X(UINT32 cachedSizeInBytes, UINT32 nonCachedSizeInBytes)
{
    if (g_ApuHeap.Cached || g_ApuHeap.NonCached) {
        return E_FAIL; // already initialized
    }

    g_ApuHeap.Cached = cachedSizeInBytes > 0 ? malloc(cachedSizeInBytes) : NULL;
    g_ApuHeap.NonCached = nonCachedSizeInBytes > 0 ? malloc(nonCachedSizeInBytes) : NULL;

    if ((cachedSizeInBytes && !g_ApuHeap.Cached) || (nonCachedSizeInBytes && !g_ApuHeap.NonCached)) {
        if (g_ApuHeap.Cached) free(g_ApuHeap.Cached);
        if (g_ApuHeap.NonCached) free(g_ApuHeap.NonCached);
        g_ApuHeap.Cached = NULL;
        g_ApuHeap.NonCached = NULL;
        g_ApuHeap.CachedSize = 0;
        g_ApuHeap.NonCachedSize = 0;
        return E_OUTOFMEMORY;
    }

    g_ApuHeap.CachedSize = cachedSizeInBytes;
    g_ApuHeap.NonCachedSize = nonCachedSizeInBytes;
    return S_OK;
}
void ReleaseResourceEntry(_RTL_CRITICAL_SECTION* DebugInfo, void* virtualAddress) {
    // Implementation of the function
    // Assuming it releases some resources associated with the virtualAddress
    // This is a placeholder implementation
    if (DebugInfo && virtualAddress) {
        // Perform resource release logic here
    }
}

HRESULT __stdcall ApuHeapGetState_X(ApuHeapState* apuHeapState, UINT32 flags)
{
    _RTL_CRITICAL_SECTION* p_LockSemaphore; // rbx
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax

    p_LockSemaphore = (_RTL_CRITICAL_SECTION*)&criticalSection->LockSemaphore;
    EnterCriticalSection((LPCRITICAL_SECTION)& criticalSection->LockSemaphore);
    if (!apuHeapState)
        goto LABEL_9;
    if (flags == 1)
    {
        DebugInfo = criticalSection[ 2 ].DebugInfo;
        goto LABEL_4;
    }
    if (flags != 2)
    {
    LABEL_9:
        LeaveCriticalSection(p_LockSemaphore);
        return E_INVALIDARG;
    }
    DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*&criticalSection[ 2 ].LockCount;
LABEL_4:
    if (DebugInfo)
    {
        apuHeapState->allocationCount = (uint32_t)*&DebugInfo[ 1 ].ProcessLocksList.Blink;
        LeaveCriticalSection(p_LockSemaphore);
    }
    else
    {
        LeaveCriticalSection(p_LockSemaphore);
        return E_CRITICAL_SECTION_DEBUG_INFO_NOT_FOUND;
    }
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

bool EnsureInitialized(_RTL_CRITICAL_SECTION* criticalSection) {
    // Placeholder implementation for EnsureInitialized
    // Assuming it checks if the critical section is initialized
    return criticalSection && criticalSection->DebugInfo != nullptr;
}

HRESULT ApuFree_X(void* virtualAddress) {
    _RTL_CRITICAL_SECTION* DebugInfo; // rcx

    EnterCriticalSection((LPCRITICAL_SECTION)&criticalSection->LockSemaphore);
    if (EnsureInitialized(criticalSection)) {
        DebugInfo = (_RTL_CRITICAL_SECTION*)criticalSection[2].DebugInfo;
        if (virtualAddress < DebugInfo->OwningThread || virtualAddress >= (void*)((char*)DebugInfo->OwningThread + DebugInfo->LockCount))
            DebugInfo = (_RTL_CRITICAL_SECTION*)*&criticalSection[2].LockCount;
     
        ReleaseResourceEntry(DebugInfo, virtualAddress);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&criticalSection->LockSemaphore);
    return E_FAIL;
}

APU_ADDRESS __stdcall ApuMapVirtualAddress_X(const void *virtualAddress) {
    _RTL_CRITICAL_SECTION *p_LockSemaphore; // rbx
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
    char v6; // al

    p_LockSemaphore = (_RTL_CRITICAL_SECTION*)&criticalSection->LockSemaphore;
    EnterCriticalSection((LPCRITICAL_SECTION) & criticalSection->LockSemaphore);
    if (EnsureInitialized(criticalSection)) {
        DebugInfo = criticalSection[2].DebugInfo;
        if (virtualAddress < DebugInfo->ProcessLocksList.Flink
            || (v6 = 1, virtualAddress >= DebugInfo->ProcessLocksList.Flink + LODWORD(DebugInfo->CriticalSection))) {
            v6 = 0;
        }
        if (!v6)
            DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*&criticalSection[2].LockCount;
        return TranslateMemoryAddress(DebugInfo, virtualAddress);
    }
    LeaveCriticalSection(p_LockSemaphore);
    return 0;
}

APU_ADDRESS __stdcall TranslateMemoryAddress(PRTL_CRITICAL_SECTION_DEBUG SECTION_DEBUG, const void* address)
{
    APU_ADDRESS Result; // rdi
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx

    EnterCriticalSection((LPCRITICAL_SECTION)& SECTION_DEBUG->EntryCount);
    if (address >= SECTION_DEBUG->ProcessLocksList.Flink
      && address < SECTION_DEBUG->ProcessLocksList.Flink + LODWORD(SECTION_DEBUG->CriticalSection))
    {
        for (DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*&SECTION_DEBUG->Type;
              DebugInfo && address >= DebugInfo->ProcessLocksList.Flink;
              DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*&DebugInfo->EntryCount)
        {
            if (LOBYTE(DebugInfo->Flags) && address < DebugInfo->ProcessLocksList.Flink + *&DebugInfo->Type)
            {
                Result = (APU_ADDRESS)((uintptr_t)address
                    + (uintptr_t)DebugInfo->ProcessLocksList.Blink >> 32
                    - (uintptr_t)DebugInfo->ProcessLocksList.Flink);
                break;
            }
        }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&SECTION_DEBUG->EntryCount);
    return Result;
}

void* ApuMapApuAddress_X(
         APU_ADDRESS apuPhysicalAddress
)
{
    DEBUG_PRINT( );
    return 0;
}

IAcpHal::IAcpHal( )
{
}

IAcpHal::~IAcpHal( )
{
}
