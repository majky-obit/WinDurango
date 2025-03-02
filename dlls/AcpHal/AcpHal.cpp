#include "pch.h"
#include "AcpHal.h"

#include <basetyps.h>
#include <cstdio>
#include <stdlib.h>

#include "contexts.h"

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

DECLARE_INTERFACE(IAcpHal)
{
    STDMETHOD(Connect)(THIS_ UINT32 numCommands,UINT32 numMessages) PURE;
    STDMETHOD(Disconnect)(THIS) PURE;
    STDMETHOD(SubmitCommand)(THIS_ ACP_COMMAND_TYPE command, UINT64 commandId, UINT32 audioFrame, _In_opt_ const void* data = nullptr, _In_opt_ APU_ADDRESS notification = 0) PURE;
    _Success_(return) STDMETHOD_(bool, PopMessage)(THIS_ _Out_ ACP_MESSAGE * message) PURE;
    STDMETHOD_(UINT32, GetNumMessages)(THIS) PURE;
    STDMETHOD_(void, Release)(THIS) PURE;
};


class AcpHal : public IAcpHal {
public:
	HRESULT Connect(UINT32 numCommands, UINT32 numMessages) override
	{
		printf("[AcpHal] Connect\n");
		return S_OK;
	}

	HRESULT Disconnect() override
	{
		printf("[AcpHal] Disconnect\n");
		return S_OK;
	}

	HRESULT SubmitCommand(ACP_COMMAND_TYPE command, UINT64 commandId, UINT32 audioFrame, const void* data,
		APU_ADDRESS notification) override
	{
		printf("[AcpHal] SubmitCommand\n");

        if (notification != 0)
            *reinterpret_cast<UINT32*>(notification) = 1;

		return S_OK;
	}

	bool PopMessage(ACP_MESSAGE* message) override
	{
		static ACP_MESSAGE dummyMessage = {
            ACP_MESSAGE_TYPE_DISCONNECTED,
            0,
            GetTickCount()
		};

		*message = dummyMessage;
		return true;
	}

	UINT32 GetNumMessages() override
	{
		printf("[AcpHal] GetNumMessages\n");
		return 0;
	}

	void Release() override
	{
		printf("[AcpHal] Release\n");
	}

private:
	UINT32 m_numCommands;
	UINT32 m_numMessages;

};


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

HRESULT AcpHalCreate_X(IAcpHal** acpInterface) {
	*acpInterface = new AcpHal( );
    return 0;
}

HRESULT AcpHalReleaseShapeContexts_X() {
    return 0;
}

HRESULT ApuAlloc_X(
         void** virtualAddress,
         UINT32* physicalAddress,
         UINT32 sizeInBytes,
         UINT32 alignmentInBytes,
         UINT32 flags
)
{
    *virtualAddress = malloc(sizeInBytes);

    if (physicalAddress != nullptr)
		*physicalAddress = 0;

    return 0;
}

HRESULT ApuCreateHeap_X(size_t initialSize, size_t maximumSize) {
    // Don't think we need that as this is for chaning memory pool iirc...
    return 0;
}

HRESULT ApuFree_X(void* ptr) {
    free(ptr);
    return 0;
}

HRESULT ApuHeapGetState_X(ApuHeapState* a1, int type) {
    return 0;
}

HRESULT ApuIsVirtualAddressValid_X(unsigned __int64 a1, unsigned int a2) {
    return 0;
}

HRESULT ApuMapApuAddress_X(unsigned int a1) {
    return 0;
}

HRESULT ApuMapVirtualAddress_X(unsigned __int64 a1) {
    return 0;
}
