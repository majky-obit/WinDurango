#pragma once
typedef uint64_t APU_ADDRESS;
struct ACP_MESSAGE_AUDIO_FRAME_START
{
    UINT32 audioFrame;  // Audio frame index
};

// Flowgraph completed message
// Used by the following messages:
//    ACP_MESSAGE_TYPE_FLOWGRAPH_COMPLETED
struct ACP_MESSAGE_FLOWGRAPH_COMPLETED
{
    APU_ADDRESS flowgraph; // Flowgraph that completed
};

// SHAPE command is blocked
// Used by the following messages:
//    ACP_MESSAGE_TYPE_SRC_BLOCKED
//    ACP_MESSAGE_TYPE_DMA_BLOCKED
struct ACP_MESSAGE_SHAPE_COMMAND_BLOCKED
{
    UINT32      contextIndex;   // Index of context that was blocked
    APU_ADDRESS flowgraph;      // Flowgraph with blocked context
};

// An ACP command has completed
//
// Command completed messages will only be sent for commands submitted with a non-zero commandId.
// (see IAcpHal::SubmitCommand)
// Used by the following messages:
//    ACP_MESSAGE_TYPE_COMMAND_COMPLETED
struct ACP_MESSAGE_COMMAND_COMPLETED
{
    UINT32 commandType; // Command type that completed
    UINT64 commandId;   // Command ID of completed command
    UINT32 audioFrame;  // Audio frame when command completed
};

// Flowgraph was terminated
// Used by the following messages:
//    ACP_MESSAGE_TYPE_FLOWGRAPH_TERMINATED
struct ACP_MESSAGE_FLOWGRAPH_TERMINATED
{
    APU_ADDRESS  flowgraph;             // Flowgraph 
    UINT32       numCommandsCompleted;  // Number of flowgraph commands completed or queued before time ran out
    UINT32       reason;                // Reason the flowgraph was terminated
};

// Error message
// Used by the following messages:
//     ACP_MESSAGE_TYPE_ERROR
//
// errorCode                            additionalData
// -----------------------------------  ------------------------------------------
// ACP_E_INVALID_FLOWGRAPH              Flowgraph APU_ADDRESS
//   The specified flowgraph is invalid. Examine the flowgraph entry headers. 
//   Invalid entries will have the error bit set.
// 
// ACP_E_INVALID_COMMAND               'commandId' from IAcpHal::SubmitCommand()
//   The command submitted is invalid.
// 
// ACP_E_MESSAGE_ALREADY_REGISTERED    ACP_MESSAGE_TYPE_*
//   An attempt was made to register for a message type that has already been registered.
// 
// ACP_E_MESSAGE_NOT_REGISTERED        ACP_MESSAGE_TYPE_*
//   An attempt was made to unregister a message type that has not been registered.
// 
// ACP_E_INVALID_COMMAND_TYPE          ACP_COMMAND_TYPE_*
//   A submitted command is not of a valid type.
// 
// ACP_E_NOT_ALLOCATED                 'commandId' from IAcpHal::SubmitCommand()
//   A request was made to update a SHAPE flowgraph context that has not been allocated.
// 
// ACP_E_XMA_PARSER_ERROR              XMA context index
//   The specified XMA context generated a parser error.
//
struct ACP_MESSAGE_ERROR
{
    HRESULT errorCode;       // Error code
    UINT32  additionalData;  // Additional data relevant to the error
};