#include "EtwPlus.h"
#include "pch.h"
#include <stdio.h>
#include "../common/common.h"
#include "../common/DebugLogger.h"

VOID __stdcall EtxFillCommonFields_v7_X(EVENT_DATA_DESCRIPTOR* eventDataDescriptors, UINT8* buffer, UINT32 bufferSize) {
    DEBUG_LOG();
    // Implementation here
}

ULONG __stdcall EtxRegister_X(EVENT_PROVIDER_DESCRIPTOR* provider, REGHANDLE* handle) {
    // Implementation here
    	DEBUG_LOG();
    return 0;
}

ULONG __stdcall EtxUnregister_X(EVENT_PROVIDER_DESCRIPTOR* provider, REGHANDLE* handle) {
    	DEBUG_LOG();
    REGHANDLE v3; // rcx

    v3 = *handle;
    if (*handle)
    {
        *handle = 0i64;
        EventUnregister(v3);
        //sub_180001658(provider);
    }
    return 0;
}

ULONG __stdcall EtxEventWrite_X(
    __in const EVENT_DESCRIPTOR_STRUCT* eventDescriptor,
    __in const EVENT_PROVIDER_DESCRIPTOR* providerDescriptor,
    __in REGHANDLE handle,
    __in ULONG dataCount,
    __in const EVENT_DATA_DESCRIPTOR* eventData
) {
    	DEBUG_LOG();
    // Implementation here
    return 0;
}

void __stdcall EtxSuspendUploading_X( ) {
    	DEBUG_LOG();
    // Implementation here
}

void __stdcall
EtxResumeUploading_X( ) {
    	DEBUG_LOG();
    // Implementation here
}
