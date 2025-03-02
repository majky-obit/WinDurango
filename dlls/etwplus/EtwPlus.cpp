#include "EtwPlus.h"
#include "pch.h"
#include <stdio.h>
#include "../common/debug.h"
#include "../common/common.h"

VOID DurangoAPI EtxFillCommonFields_v7_X(EVENT_DATA_DESCRIPTOR* eventDataDescriptors, UINT8* buffer, UINT32 bufferSize) {
    DEBUG_PRINT( );
    // Implementation here
}

ULONG DurangoAPI EtxRegister_X(EVENT_PROVIDER_DESCRIPTOR* provider, REGHANDLE* handle) {
    // Implementation here
    DEBUG_PRINT( );
    return 0;
}

ULONG DurangoAPI EtxUnregister_X(EVENT_PROVIDER_DESCRIPTOR* provider, REGHANDLE* handle) {
    DEBUG_PRINT( );
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

ULONG DurangoAPI EtxEventWrite_X(
    __in const EVENT_DESCRIPTOR_STRUCT* eventDescriptor,
    __in const EVENT_PROVIDER_DESCRIPTOR* providerDescriptor,
    __in REGHANDLE handle,
    __in ULONG dataCount,
    __in const EVENT_DATA_DESCRIPTOR* eventData
) {
    DEBUG_PRINT( );
    // Implementation here
    return 0;
}

void DurangoAPI EtxSuspendUploading_X( ) {
    DEBUG_PRINT( );
    // Implementation here
}

void DurangoAPI
EtxResumeUploading_X( ) {
    DEBUG_PRINT( );
    // Implementation here
}
