#include "pch.h"
#include "xaudio2.h"
#include "xaudio2fx.h"
#include "x3daudio.h"
#include "xapofx.h"

HRESULT CreateAudioReverb_X(IUnknown **ppApo)
{
	return CreateAudioReverb(ppApo);
}

HRESULT CreateAudioVolumeMeter_X(IUnknown** ppApo)
{
	return CreateAudioVolumeMeter(ppApo);
}

HRESULT CreateFX_X(REFCLSID clsid, IUnknown** pEffect, const void* pInitDat, UINT32 InitDataByteSize)
{
	return CreateFX(clsid, pEffect, pInitDat, InitDataByteSize);
}

HRESULT CreateXAudio2Object_X(IXAudio2** ppXAudio2, UINT32 Flags, XAUDIO2_PROCESSOR XAudio2Processor)
{
	return XAudio2Create(ppXAudio2, Flags, XAudio2Processor);
}

void X3DAudioCalculate_X(const X3DAUDIO_HANDLE Instance, const X3DAUDIO_LISTENER* pListener, const X3DAUDIO_EMITTER* pEmitter, UINT32 Flags, X3DAUDIO_DSP_SETTINGS* pDSPSettings)
{
	return X3DAudioCalculate(Instance, pListener, pEmitter, Flags, pDSPSettings);
}

HRESULT X3DAudioInitialize_X(UINT32 SpeakerChannelMask, FLOAT32 SpeedOfSound, X3DAUDIO_HANDLE Instance)
{
	return X3DAudioInitialize(SpeakerChannelMask, SpeedOfSound, Instance);
}