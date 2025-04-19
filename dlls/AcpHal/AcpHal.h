#pragma once
#include <inttypes.h>
#include "contexts.h"

struct ApuHeapState {
/* 0x0000 */ public: uint32_t bytesFree;
/* 0x0004 */ public: uint32_t bytesAllocated;
/* 0x0008 */ public: uint32_t bytesLost;
/* 0x000c */ public: uint32_t maximumBlockSizeAvailable;
/* 0x0010 */ public: uint32_t allocationCount;
};
typedef struct APU_HEAP {
    void* Cached;
    void* NonCached;
    UINT32 CachedSize;
    UINT32 NonCachedSize;
} APU_HEAP;
#define APU_ALLOC_CACHED 0x1;
typedef uint64_t APU_ADDRESS;

HRESULT InitializeCriticalSectionWrapper( );
APU_ADDRESS __stdcall TranslateMemoryAddress(PRTL_CRITICAL_SECTION_DEBUG SECTION_DEBUG, const void* address);
BOOL __stdcall ManageThreadLocalStorage(HINSTANCE hModule, DWORD ul_reason_for_call, LPVOID lpReserved);
#pragma once

extern _RTL_CRITICAL_SECTION* criticalSection;

#define E_CRITICAL_SECTION_DEBUG_INFO_NOT_NULL 0x8ACA0001
#define E_CRITICAL_SECTION_DEBUG_INFO_NOT_FOUND 0x8ACA0002

#define ACPE_E_NOT_INITIALIZED     HRESULT(0x8AC80002)
#define ACPE_E_RESOURCE_IN_USE     HRESULT(0x8AC80010)
#define E_CRITICAL_SECTION_DEBUG_INFO_NOT_NULL 0x8ACA0001
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

typedef struct AcpHal_SHAPE_PCM_CONTEXT {
    UINT32 bufferStart : 32;
    UINT32 bufferLength : 21;
    UINT32 reserved0 : 11;
    UINT32 loopCount : 8;
    UINT32 reserved1 : 8;
    UINT32 full : 1;
    UINT32 reserved2 : 15;
    UINT32 readPointer : 21;
    UINT32 reserved3 : 11;
    UINT32 loopStartWritePointer : 21;
    UINT32 reserved4 : 11;
    UINT32 loopEnd : 21;
    UINT32 reserved5 : 11;
    UINT32 mode : 1;
    UINT32 reserved6 : 15;
    UINT32 format : 2;
    UINT32 reserved7 : 14;
    UINT32 reserved[ 1 ];
} AcpHal_SHAPE_PCM_CONTEXT;

typedef struct AcpHal_SHAPE_SRC_CONTEXT {
    UINT32 timestamp : 21;
    UINT32 blocksToSkip : 2;
    UINT32 internalSaturate : 1;
    UINT32 mixBufPeakMag : 4;
    UINT32 peakMag : 4;
    UINT32 samplingIncrement : 21;
    UINT32 reserved0 : 1;
    UINT32 cmd : 2;
    UINT32 mixBufPeakMag2 : 4;
    UINT32 peakMag2 : 4;
    UINT32 sampleCount : 32;
    UINT32 samplePointer : 25;
    UINT32 reserved1 : 7;
    UINT32 samplingIncrementTarget : 21;
    UINT32 reserved2 : 11;
    UINT32 reserved[ 3 ];
};

typedef struct AcpHal_SHAPE_EQCOMP_CONTEXT {
    UINT32 timestamp : 21;
    UINT32 reserved0 : 2;
    UINT32 internalSaturate : 1;
    UINT32 mixBufPeakMag : 4;
    UINT32 peakMag : 4;
    UINT32 eqAB0 : 24;
    UINT32 eqAB1_L : 8;
    UINT32 eqAB1_H : 16;
    UINT32 eqAB2_L : 16;
    UINT32 eqAB2_H : 8;
    UINT32 eqAA1 : 24;
    UINT32 eqAA2 : 24;
    UINT32 eqBB0_L : 8;
    UINT32 eqBB0_H : 16;
    UINT32 eqBB1_L : 16;
    UINT32 eqBB1_H : 8;
    UINT32 eqBB2 : 24;
    UINT32 eqBA1 : 24;
    UINT32 eqBA2_L : 8;
    UINT32 eqBA2_H : 16;
    UINT32 eqCB0_L : 16;
    UINT32 eqCB0_H : 8;
    UINT32 eqCB1 : 24;
    UINT32 eqCB2 : 24;
    UINT32 eqCA1_L : 8;
    UINT32 eqCA1_H : 16;
    UINT32 eqCA2_L : 16;
    UINT32 eqCA2_H : 8;
    UINT32 reserved1 : 24;
    UINT32 eqAInputDelay0 : 24;
    UINT32 reserved2 : 8;
    UINT32 eqAInputDelay1 : 24;
    UINT32 reserved3 : 8;
    UINT32 eqDelayElements2;
    UINT32 eqDelayElements3;
    UINT32 eqDelayElements4;
    UINT32 eqDelayElements5;
    UINT32 eqDelayElements6;
    UINT32 eqDelayElements7;
    UINT32 compInputLevel;
    UINT32 compGainReduction : 24;
    UINT32 reserved4 : 8;
    UINT32 compGain : 16;
    UINT32 reserved5 : 16;
    UINT32 eqAB0Target : 24;
    UINT32 eqAB1Target_L : 8;
    UINT32 eqAB1Target_H : 16;
    UINT32 eqAB2Target_L : 16;
    UINT32 eqAB2Target_H : 8;
    UINT32 eqAA1Target : 24;
    UINT32 eqAA2Target : 24;
    UINT32 eqBB0Target_L : 8;
    UINT32 eqBB0Target_H : 16;
    UINT32 eqBB1Target_L : 16;
    UINT32 eqBB1Target_H : 8;
    UINT32 eqBB2Target : 24;
    UINT32 eqBA1Target : 24;
    UINT32 eqBA2Target_L : 8;
    UINT32 eqBA2Target_H : 16;
    UINT32 eqCB0Target_L : 16;
    UINT32 eqCB0Target_H : 8;
    UINT32 eqCB1Target : 24;
    UINT32 eqCB2Target : 24;
    UINT32 eqCA1Target_L : 8;
    UINT32 eqCA1Target_H : 16;
    UINT32 eqCA2Target_L : 16;
    UINT32 eqCA2Target_H : 8;
    UINT32 reserved6 : 24;
    UINT32 compRelease : 24;
    UINT32 reserved7 : 2;
    UINT32 compExpand : 1;
    UINT32 compLogGain : 1;
    UINT32 compSidechainMode : 2;
    UINT32 compMode : 1;
    UINT32 compEnable : 1;
    UINT32 compThreshold : 24;
    UINT32 reserved8 : 8;
    UINT32 compAttack : 24;
    UINT32 reserved9 : 8;
    UINT32 compOneOverRatio : 16;
    UINT32 compGainTarget : 16;
} AcpHal_SHAPE_EQCOMP_CONTEXT;

typedef struct AcpHal_SHAPE_FILTVOL_CONTEXT {
    UINT32 timestamp : 21;
    UINT32 reserved0 : 2;
    UINT32 internalSaturate : 1;
    UINT32 mixBufPeakMag : 4;
    UINT32 peakMag : 4;
    UINT32 delay1 : 30;
    UINT32 headroom : 2;
    UINT32 delay2 : 30;
    UINT32 svfMode : 2;
    UINT32 gainTarget : 16;
    UINT32 gain : 16;
    UINT32 qRecip : 24;
    UINT32 reserved1 : 8;
    UINT32 qRecipTarget : 24;
    UINT32 reserved2 : 8;
    UINT32 fc : 24;
    UINT32 reserved3 : 8;
    UINT32 fcTarget : 24;
    UINT32 reserved4 : 8;
} AcpHal_SHAPE_FILTVOL_CONTEXT;

typedef struct AcpHal_SHAPE_DMA_CONTEXT {
    UINT32 timestamp : 21;
    UINT32 reserved0 : 3;
    UINT32 mixBufPeakMag : 4;
    UINT32 peakMag : 4;
    UINT32 readPointer : 5;
    UINT32 reserved1 : 3;
    UINT32 writePointer : 5;
    UINT32 reserved2 : 3;
    UINT32 full : 1;
    UINT32 reserved3 : 15;
    UINT32 reserved4 : 9;
    UINT32 address : 23;
    UINT32 numFrames : 5;
    UINT32 reserved5 : 3;
    UINT32 floatConvert : 1;
    UINT32 reserved6 : 7;
    UINT32 numChannels : 3;
    UINT32 reserved7 : 5;
    UINT32 channel : 3;
    UINT32 reserved8 : 5;
} AcpHal_SHAPE_DMA_CONTEXT;

typedef struct AcpHal_SHAPE_XMA_CONTEXT {
    UINT32 sizeRead0 : 12;
    UINT32 numLoops : 8;
    UINT32 validBuffer : 2;
    UINT32 sizeWrite : 5;
    UINT32 offsetWrite : 5;
    UINT32 sizeRead1 : 12;
    UINT32 loopSubframeEnd : 2;
    UINT32 reserved0 : 3;
    UINT32 loopSubframeSkip : 3;
    UINT32 numSubframesToDecode : 4;
    UINT32 numSubframesToSkip : 3;
    UINT32 sampleRate : 2;
    UINT32 numChannels : 1;
    UINT32 reserved1 : 1;
    UINT32 validWrite : 1;
    UINT32 offsetRead : 26;
    UINT32 errorStatus : 5;
    UINT32 errorSet : 1;
    UINT32 loopStartOffset : 26;
    UINT32 parserErrorStatus : 5;
    UINT32 parserErrorSet : 1;
    UINT32 loopEndOffset : 26;
    UINT32 packetMetaData : 5;
    UINT32 currentBuffer : 1;
    UINT32 ptrRead0;
    UINT32 ptrRead1;
    UINT32 ptrWrite;
    UINT32 ptrOverlapAdd;
    UINT32 writeBufferOffsetRead : 5;
    UINT32 reserved2 : 25;
    UINT32 stopWhenDone : 1;
    UINT32 interruptWhenDone : 1;
    UINT32 reserved[ 6 ];
} AcpHal_SHAPE_XMA_CONTEXT;

typedef struct AcpHal_SHAPE_CONTEXTS {
    UINT32 numSrcContexts;
    UINT32 numEqCompContexts;
    UINT32 numFiltVolContexts;
    UINT32 numDmaContexts;
    UINT32 numXmaContexts;
    UINT32 numPcmContexts;
    AcpHal_SHAPE_SRC_CONTEXT* srcContextArray;
    AcpHal_SHAPE_EQCOMP_CONTEXT* eqCompContextArray;
    AcpHal_SHAPE_FILTVOL_CONTEXT* filtVolContextArray;
    AcpHal_SHAPE_DMA_CONTEXT* dmaContextArray;
    AcpHal_SHAPE_XMA_CONTEXT* xmaContextArray;
    AcpHal_SHAPE_PCM_CONTEXT* pcmContextArray;
    APU_ADDRESS apuSrcContextArray;
    APU_ADDRESS apuEqCompContextArray;
    APU_ADDRESS apuFiltVolContextArray;
    APU_ADDRESS apuDmaContextArray;
    APU_ADDRESS apuXmaContextArray;
    APU_ADDRESS apuPcmContextArray;
} AcpHal_SHAPE_CONTEXTS;

#pragma once
#include <windows.h>

class IAcpHal
{
public:
    IAcpHal( );
    ~IAcpHal( );

    // Possibly public API methods would go here later

private:
    void* m_initFunction;                // Likely a function pointer or vtable
    CRITICAL_SECTION m_critical1;       // Offset +0x08
    CRITICAL_SECTION m_critical2;       // Offset +0x20
    LPCRITICAL_SECTION m_sharedCritical;// From global criticalSection
    int m_lockCount;                    // lockCount = sharedCritical->LockCount + 1
    char m_someFlag;                    // LOBYTE set to 0

    // Remaining zeroed memory — treated as reserved/internal state
    int m_padding;
    int m_lockCount2;
    int64_t m_dummy2;
    int64_t m_threadPtr;
    int64_t m_lockSem;
    int64_t m_spinCount;
    int64_t m_debug1;
    int64_t m_lockSem2;
    int64_t m_spinCount2;
    int64_t m_debug2;
    int m_lockCount3;
    int m_lockCount4;
};