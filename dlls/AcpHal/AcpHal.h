#pragma once
#include <inttypes.h>

#include "messages.h"

struct ApuHeapState
{
    UINT32 bytesFree;                 // Size of all unallocated regions
    UINT32 bytesAllocated;            // Size of all allocated regions as visible to the title
    UINT32 bytesLost;                 // Size of all memory lost to alignment requests and fragmented blocks too small to allocate
    UINT32 maximumBlockSizeAvailable; // Largest block available (actual space available can be less due to alignment requirements)
    UINT32 allocationCount;           // Count all allocated blocks 
};

enum ACP_COMMAND_TYPE
{
    ACP_COMMAND_TYPE_LOAD_SHAPE_FLOWGRAPH = 1,    // Load a new flow graph and process it (data: ACP_COMMAND_LOAD_SHAPE_FLOWGRAPH)
    ACP_COMMAND_TYPE_REGISTER_MESSAGE,            // Registers for one or more messages (data: ACP_COMMAND_MESSAGE)
    ACP_COMMAND_TYPE_UNREGISTER_MESSAGE,          // Unregisters one or more messages (data: ACP_COMMAND_MESSAGE)
    ACP_COMMAND_TYPE_START_FLOWGRAPH,             // Start processing the flowgraph (data: none)
    ACP_COMMAND_TYPE_ENABLE_XMA_CONTEXT,          // Enables an XMA context (data: ACP_COMMAND_ENABLE_OR_DISABLE_XMA_CONTEXT)
    ACP_COMMAND_TYPE_ENABLE_XMA_CONTEXTS,         // Enables a block XMA of contexts (data: ACP_COMMAND_ENABLE_OR_DISABLE_XMA_CONTEXTS)
    ACP_COMMAND_TYPE_DISABLE_XMA_CONTEXT,         // Disables an XMA context (data: ACP_COMMAND_ENABLE_OR_DISABLE_XMA_CONTEXT)
    ACP_COMMAND_TYPE_DISABLE_XMA_CONTEXTS,        // Disables a block of XMA contexts (data: ACP_COMMAND_ENABLE_OR_DISABLE_XMA_CONTEXTS)
    ACP_COMMAND_TYPE_UPDATE_SRC_CONTEXT,          // Updates a SRC context (data: ACP_COMMAND_UPDATE_XMA_CONTEXT)
    ACP_COMMAND_TYPE_UPDATE_EQCOMP_CONTEXT,       // Updates an EQ/Comp context (data: ACP_COMMAND_UPDATE_EQCOMP_CONTEXT)
    ACP_COMMAND_TYPE_UPDATE_FILTVOL_CONTEXT,      // Updates a Filt/Vol context (data: ACP_COMMAND_UPDATE_FILTVOL_CONTEXT)
    ACP_COMMAND_TYPE_UPDATE_DMA_CONTEXT,          // Updates a DMA context (data: ACP_COMMAND_UPDATE_DMA_CONTEXT)
    ACP_COMMAND_TYPE_UPDATE_PCM_CONTEXT,          // Updates a PCM context (data: ACP_COMMAND_UPDATE_PCM_CONTEXT)
    ACP_COMMAND_TYPE_UPDATE_XMA_CONTEXT,          // Updates a XMA context (data: ACP_COMMAND_UPDATE_XMA_CONTEXT)
    ACP_COMMAND_TYPE_INCREMENT_DMA_WRITE_POINTER, // Update a DMA write pointer (data: ACP_COMMAND_INCREMENT_DMA_POINTER)
    ACP_COMMAND_TYPE_INCREMENT_DMA_READ_POINTER,  // Updates a DMA read pointer (data: ACP_COMMAND_INCREMENT_PCM_WRITE_POINTER)
    ACP_COMMAND_TYPE_INCREMENT_PCM_WRITE_POINTER, // Updates a PCM context write pointer (data: ACP_COMMAND_INCREMENT_XMA_WRITE_BUFFER_OFFSET_READ)
    ACP_COMMAND_TYPE_INCREMENT_XMA_WRITE_BUFFER_OFFSET_READ, // Updates the read offset in an XMA context write buffer (data: ACP_COMMAND_INCREMENT_XMA_WRITE_BUFFER_OFFSET_READ)
    ACP_COMMAND_TYPE_UPDATE_XMA_READ_BUFFER,      // Updates a PCM context write pointer (data: ACP_COMMAND_UPDATE_XMA_READ_BUFFER)
    ACP_COMMAND_TYPE_UPDATE_ALL_CONTEXTS,         // Updates blocks of contexts (data: ACP_COMMAND_UPDATE_ALL_CONTEXTS)
    ACP_COMMAND_TYPE_UPDATE_SRC_CONTEXTS,         // Updates a block of SRC contexts (data: ACP_COMMAND_UPDATE_CONTEXTS)
    ACP_COMMAND_TYPE_UPDATE_EQCOMP_CONTEXTS,      // Updates a block of EQ/Comp contexts (data: ACP_COMMAND_UPDATE_CONTEXTS)
    ACP_COMMAND_TYPE_UPDATE_FILTVOL_CONTEXTS,     // Updates a block of Filt/Vol contexts (data: ACP_COMMAND_UPDATE_CONTEXTS)
    ACP_COMMAND_TYPE_UPDATE_DMA_READ_CONTEXTS,    // Updates a block of DMA read contexts (data: ACP_COMMAND_UPDATE_CONTEXTS)
    ACP_COMMAND_TYPE_UPDATE_DMA_WRITE_CONTEXTS,   // Updates a block of DMA write contexts (data: ACP_COMMAND_UPDATE_CONTEXTS)
    ACP_COMMAND_TYPE_UPDATE_PCM_CONTEXTS,         // Updates a block of PCM contexts (data: ACP_COMMAND_UPDATE_CONTEXTS)
    ACP_COMMAND_TYPE_UPDATE_XMA_CONTEXTS,         // Updates a block of XMA contexts (data: ACP_COMMAND_UPDATE_CONTEXTS)

    ACP_COMMAND_TYPE_COUNT = ACP_COMMAND_TYPE_UPDATE_XMA_CONTEXTS // Count of command types (not an actual command)
};

struct ACP_MESSAGE
{
    UINT32 type;                // Message type
    UINT32 droppedMessageCount; // Count of dropped messages prior to this message
    UINT32 usec;                // time when this message is constructed
    union                       // Message data
    {
        ACP_MESSAGE_AUDIO_FRAME_START     audioFrameStart;
        ACP_MESSAGE_FLOWGRAPH_COMPLETED   flowgraphCompleted;
        ACP_MESSAGE_SHAPE_COMMAND_BLOCKED shapeCommandBlocked;
        ACP_MESSAGE_COMMAND_COMPLETED     commandCompleted;
        ACP_MESSAGE_FLOWGRAPH_TERMINATED  flowgraphTerminated;
        ACP_MESSAGE_ERROR                 error;
    };
};