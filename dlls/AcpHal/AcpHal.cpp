#include "pch.h"
#include "AcpHal.h"
#include <stdlib.h>
#include "../common/debug.h"

HRESULT AcpHalAllocateShapeContexts_X(
         AcpHal_SHAPE_CONTEXTS* contextArrays
) {
    DEBUG_PRINT( );
    return 0;
}

HRESULT AcpHalReleaseShapeContexts_X( ) {
    DEBUG_PRINT( );
    return 0;
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

HRESULT ApuCreateHeap_X(UINT32 cachedSizeInBytes, UINT32 nonCachedSizeInBytes)
{
    nonCachedSizeInBytes = 0;
    DEBUG_PRINT( );
    // Don't think we need that as this is for chaning memory pool iirc...
    return 0;
}

HRESULT ApuFree_X(void* virtualAddress) {
    DEBUG_PRINT( );
    free(virtualAddress);
    return 0;
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
HRESULT AcpHalCreate_X(IAcpHal** acp)
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
