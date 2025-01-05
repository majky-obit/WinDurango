#include "pch.h"
#include "ID3DWrappers.h"


HRESULT d3d11x::ID3D11DeviceContextXWrapperX::QueryInterface(REFIID riid, void** ppvObject)
{
	// DEBUG
	char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
	OLECHAR iidwstr[ sizeof(iidstr) ];
	StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
	WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
	printf("[ID3D11DeviceContextXWrapperX] QueryInterface: %s\n", iidstr); 
	
	if (riid == __uuidof(ID3D11DeviceContext) || riid == __uuidof(ID3D11DeviceContext1) ||
		riid == __uuidof(ID3D11DeviceContext2) || riid == __uuidof(ID3D11DeviceContextX))
	{
		*ppvObject = this;
		AddRef( );
		return S_OK;
	}

	return m_Function.m_realDeviceCtx->QueryInterface(riid, ppvObject);
}

ULONG d3d11x::ID3D11DeviceContextXWrapperX::AddRef( )
{
	printf("[ID3D11DeviceContextXWrapperX] --> AddRef\n");
	return InterlockedIncrement(&m_RefCount);
}

ULONG d3d11x::ID3D11DeviceContextXWrapperX::Release( )
{
	printf("[ID3D11DeviceContextXWrapperX] --> Release\n");
	ULONG refCount = InterlockedDecrement(&m_RefCount);
    if (refCount == 0)
	{
		m_Function.m_realDeviceCtx->Release( );
		delete this;
	}
    return refCount;
}

// @Patoke todo: unwrap?
void d3d11x::ID3D11DeviceContextXWrapperX::GetDevice(ID3D11Device** ppDevice)
{
	// Probably not necessary but just to be sure -AleBlbl
	::ID3D11Device** device = nullptr;
	this->m_Function.m_realDeviceCtx->GetDevice(device);
	ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
}

HRESULT d3d11x::ID3D11DeviceContextXWrapperX::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
	return m_Function.m_realDeviceCtx->GetPrivateData(guid, pDataSize, pData);
}

HRESULT d3d11x::ID3D11DeviceContextXWrapperX::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
{
	return m_Function.m_realDeviceCtx->SetPrivateData(guid, DataSize, pData);
}

HRESULT d3d11x::ID3D11DeviceContextXWrapperX::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
{
	return m_Function.m_realDeviceCtx->SetPrivateDataInterface(guid, pData);
}

HRESULT d3d11x::ID3D11DeviceContextXWrapperX::SetName(const wchar_t* name)
{
	printf("[ID3D11Texture2DWrapper]: SetName STUB\n");
	return S_OK;
}

int d3d11x::ID3D11DeviceContextX_Vtable::PIXBeginEvent(const wchar_t*) {
	printf("[ID3D11DeviceContextX_Vtable] PIXBeginEvent\n");
	return {};
}

int d3d11x::ID3D11DeviceContextX_Vtable::PIXBeginEventEx(const void*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] PIXBeginEventEx\n");
	return {};
}

int d3d11x::ID3D11DeviceContextX_Vtable::PIXEndEvent(ID3D11DeviceContextX*) {
	printf("[ID3D11DeviceContextX_Vtable] PIXEndEvent\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::PIXSetMarker(const wchar_t*) {
	printf("[ID3D11DeviceContextX_Vtable] PIXSetMarker\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::PIXSetMarkerEx(const void*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] PIXSetMarkerEx\n");
}

int d3d11x::ID3D11DeviceContextX_Vtable::PIXGetStatus(ID3D11DeviceContextX*) {
	printf("[ID3D11DeviceContextX_Vtable] PIXGetStatus\n");
	return {};
}

HRESULT d3d11x::ID3D11DeviceContextX_Vtable::PIXGpuCaptureNextFrame(unsigned int, const wchar_t*) {
	printf("[ID3D11DeviceContextX_Vtable] PIXGpuCaptureNextFrame\n");
	return {};
}

HRESULT d3d11x::ID3D11DeviceContextX_Vtable::PIXGpuBeginCapture(unsigned int, const wchar_t*) {
	printf("[ID3D11DeviceContextX_Vtable] PIXGpuBeginCapture\n");
	return {};
}

HRESULT d3d11x::ID3D11DeviceContextX_Vtable::PIXGpuEndCapture(ID3D11DeviceContextX*) {
	printf("[ID3D11DeviceContextX_Vtable] PIXGpuEndCapture\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::StartCounters(ID3D11CounterSetX*) {
	printf("[ID3D11DeviceContextX_Vtable] StartCounters\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SampleCounters(ID3D11CounterSampleX*) {
	printf("[ID3D11DeviceContextX_Vtable] SampleCounters\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::StopCounters(ID3D11DeviceContextX*) {
	printf("[ID3D11DeviceContextX_Vtable] StopCounters\n");
}

HRESULT d3d11x::ID3D11DeviceContextX_Vtable::GetCounterData(ID3D11CounterSampleX*, D3D11X_COUNTER_DATA*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] GetCounterData\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::FlushGpuCaches(ID3D11Resource*) {
	printf("[ID3D11DeviceContextX_Vtable] FlushGpuCaches\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::FlushGpuCacheRange(unsigned int, void*, unsigned __int64) {
	printf("[ID3D11DeviceContextX_Vtable] FlushGpuCacheRange\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::InsertWaitUntilIdle(unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] InsertWaitUntilIdle\n");
}

unsigned __int64 d3d11x::ID3D11DeviceContextX_Vtable::InsertFence(unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] InsertFence\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::InsertWaitOnFence(unsigned int, unsigned __int64) {
	printf("[ID3D11DeviceContextX_Vtable] InsertWaitOnFence\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::RemapConstantBufferInheritance(D3D11_STAGE, unsigned int, D3D11_STAGE, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] RemapConstantBufferInheritance\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::RemapShaderResourceInheritance(D3D11_STAGE, unsigned int, D3D11_STAGE, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] RemapShaderResourceInheritance\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::RemapSamplerInheritance(D3D11_STAGE, unsigned int, D3D11_STAGE, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] RemapSamplerInheritance\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::RemapVertexBufferInheritance(unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] RemapVertexBufferInheritance\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::PSSetFastConstantBuffer(unsigned int, ID3D11Buffer*) {
	printf("[ID3D11DeviceContextX_Vtable] PSSetFastConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::PSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*) {
	printf("[ID3D11DeviceContextX_Vtable] PSSetFastShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::PSSetFastSampler(unsigned int, ID3D11SamplerState*) {
	printf("[ID3D11DeviceContextX_Vtable] PSSetFastSampler\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::VSSetFastConstantBuffer(unsigned int, ID3D11Buffer*) {
	printf("[ID3D11DeviceContextX_Vtable] VSSetFastConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::VSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*) {
	printf("[ID3D11DeviceContextX_Vtable] VSSetFastShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::VSSetFastSampler(unsigned int, ID3D11SamplerState*) {
	printf("[ID3D11DeviceContextX_Vtable] VSSetFastSampler\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GSSetFastConstantBuffer(unsigned int, ID3D11Buffer*) {
	printf("[ID3D11DeviceContextX_Vtable] GSSetFastConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*) {
	printf("[ID3D11DeviceContextX_Vtable] GSSetFastShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GSSetFastSampler(unsigned int, ID3D11SamplerState*) {
	printf("[ID3D11DeviceContextX_Vtable] GSSetFastSampler\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CSSetFastConstantBuffer(unsigned int, ID3D11Buffer*) {
	printf("[ID3D11DeviceContextX_Vtable] CSSetFastConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*) {
	printf("[ID3D11DeviceContextX_Vtable] CSSetFastShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CSSetFastSampler(unsigned int, ID3D11SamplerState*) {
	printf("[ID3D11DeviceContextX_Vtable] CSSetFastSampler\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::HSSetFastConstantBuffer(unsigned int, ID3D11Buffer*) {
	printf("[ID3D11DeviceContextX_Vtable] HSSetFastConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::HSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*) {
	printf("[ID3D11DeviceContextX_Vtable] HSSetFastShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::HSSetFastSampler(unsigned int, ID3D11SamplerState*) {
	printf("[ID3D11DeviceContextX_Vtable] HSSetFastSampler\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::DSSetFastConstantBuffer(unsigned int, ID3D11Buffer*) {
	printf("[ID3D11DeviceContextX_Vtable] DSSetFastConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::DSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*) {
	printf("[ID3D11DeviceContextX_Vtable] DSSetFastShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::DSSetFastSampler(unsigned int, ID3D11SamplerState*) {
	printf("[ID3D11DeviceContextX_Vtable] DSSetFastSampler\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::IASetFastVertexBuffer(unsigned int, ID3D11Buffer*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] IASetFastVertexBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::IASetFastIndexBuffer(unsigned int, ID3D11Buffer*) {
	printf("[ID3D11DeviceContextX_Vtable] IASetFastIndexBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::PSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] PSSetPlacementConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::PSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] PSSetPlacementShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::VSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] VSSetPlacementConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::VSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] VSSetPlacementShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] GSSetPlacementConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] GSSetPlacementShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] CSSetPlacementConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] CSSetPlacementShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::HSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] HSSetPlacementConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::HSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] HSSetPlacementShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::DSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] DSSetPlacementConstantBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::DSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] DSSetPlacementShaderResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::IASetPlacementVertexBuffer(unsigned int, ID3D11Buffer*, void*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] IASetPlacementVertexBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::IASetPlacementIndexBuffer(unsigned int, ID3D11Buffer*, void*) {
	printf("[ID3D11DeviceContextX_Vtable] IASetPlacementIndexBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::HSSetTessellationParameters(const D3D11X_TESSELLATION_PARAMETERS*) {
	printf("[ID3D11DeviceContextX_Vtable] HSSetTessellationParameters\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::HSGetLastUsedTessellationParameters(D3D11X_TESSELLATION_PARAMETERS*) {
	printf("[ID3D11DeviceContextX_Vtable] HSGetLastUsedTessellationParameters\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CSEnableAutomaticGpuFlush(int) {
	printf("[ID3D11DeviceContextX_Vtable] CSEnableAutomaticGpuFlush\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GpuSendPipelinedEvent(D3D11X_GPU_PIPELINED_EVENT) {
	printf("[ID3D11DeviceContextX_Vtable] GpuSendPipelinedEvent\n");
}

HRESULT d3d11x::ID3D11DeviceContextX_Vtable::Suspend(unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] Suspend\n");
	return {};
}

HRESULT d3d11x::ID3D11DeviceContextX_Vtable::Resume(ID3D11DeviceContextX*) {
	printf("[ID3D11DeviceContextX_Vtable] Resume\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::BeginCommandListExecution(ID3D11DeviceContext*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] BeginCommandListExecution\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::EndCommandListExecution(ID3D11DeviceContext*) {
	printf("[ID3D11DeviceContextX_Vtable] EndCommandListExecution\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetGraphicsShaderLimits(const D3D11X_GRAPHICS_SHADER_LIMITS*) {
	printf("[ID3D11DeviceContextX_Vtable] SetGraphicsShaderLimits\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetComputeShaderLimits(const D3D11X_COMPUTE_SHADER_LIMITS*) {
	printf("[ID3D11DeviceContextX_Vtable] SetComputeShaderLimits\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetPredicationBuffer(ID3D11Buffer*, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetPredicationBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::OMSetDepthBounds(float, float) {
	printf("[ID3D11DeviceContextX_Vtable] OMSetDepthBounds\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::OMSetDepthStencilStateX(ID3D11DepthStencilState*) {
	printf("[ID3D11DeviceContextX_Vtable] OMSetDepthStencilStateX\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::OMSetSampleMask(unsigned __int64) {
	printf("[ID3D11DeviceContextX_Vtable] OMSetSampleMask\n");
}

unsigned int* d3d11x::ID3D11DeviceContextX_Vtable::MakeCeSpace( ) {
	printf("[ID3D11DeviceContextX_Vtable] MakeCeSpace\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetFastResources_Debug(unsigned int*, unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] SetFastResources_Debug\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::BeginResourceBatch(void*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] BeginResourceBatch\n");
}

unsigned int d3d11x::ID3D11DeviceContextX_Vtable::EndResourceBatch(unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] EndResourceBatch\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetFastResourcesFromBatch_Debug(void*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetFastResourcesFromBatch_Debug\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CSPlaceUnorderedAccessView(unsigned int, D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW* const, unsigned __int64) {
	printf("[ID3D11DeviceContextX_Vtable] CSPlaceUnorderedAccessView\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::WriteValueEndOfPipe(void*, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] WriteValueEndOfPipe\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CopyMemoryToMemory(void*, void*, unsigned __int64) {
	printf("[ID3D11DeviceContextX_Vtable] CopyMemoryToMemory\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::FillMemoryWithValue(void*, unsigned __int64, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] FillMemoryWithValue\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::BeginProcessVideoResource(ID3D11Resource*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] BeginProcessVideoResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::EndProcessVideoResource(ID3D11Resource*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] EndProcessVideoResource\n");
}

HRESULT d3d11x::ID3D11DeviceContextX_Vtable::StartThreadTrace(const D3D11X_THREAD_TRACE_DESC*, void*, void*, unsigned __int64) {
	printf("[ID3D11DeviceContextX_Vtable] StartThreadTrace\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::StopThreadTrace(void*) {
	printf("[ID3D11DeviceContextX_Vtable] StopThreadTrace\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::InsertThreadTraceMarker(unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] InsertThreadTraceMarker\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::IASetPrimitiveResetIndex(unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] IASetPrimitiveResetIndex\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetShaderResourceViewMinLOD(ID3D11ShaderResourceView*, float) {
	printf("[ID3D11DeviceContextX_Vtable] SetShaderResourceViewMinLOD\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::InsertWaitOnPresent(unsigned int, ID3D11Resource*) {
	printf("[ID3D11DeviceContextX_Vtable] InsertWaitOnPresent\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::ClearRenderTargetViewX(ID3D11RenderTargetView*, unsigned int, const float*) {
	printf("[ID3D11DeviceContextX_Vtable] ClearRenderTargetViewX\n");
}

unsigned int d3d11x::ID3D11DeviceContextX_Vtable::GetResourceCompression(ID3D11Resource*) {
	printf("[ID3D11DeviceContextX_Vtable] GetResourceCompression\n");
	return {};
}

unsigned int d3d11x::ID3D11DeviceContextX_Vtable::GetResourceCompressionX(const D3D11X_DESCRIPTOR_RESOURCE*) {
	printf("[ID3D11DeviceContextX_Vtable] GetResourceCompressionX\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::DecompressResource(ID3D11Resource*, unsigned int, const tagPOINT*, ID3D11Resource*, unsigned int, const tagRECT*, DXGI_FORMAT, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] DecompressResource\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::DecompressResourceX(D3D11X_DESCRIPTOR_RESOURCE*, unsigned int, const tagPOINT*, D3D11X_DESCRIPTOR_RESOURCE*, unsigned int, const tagRECT*, D3D11X_FORMAT, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] DecompressResourceX\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GSSetParameters(const D3D11X_GS_PARAMETERS*) {
	printf("[ID3D11DeviceContextX_Vtable] GSSetParameters\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GSGetLastUsedParameters(D3D11X_GS_PARAMETERS*) {
	printf("[ID3D11DeviceContextX_Vtable] GSGetLastUsedParameters\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::MultiDrawIndexedInstancedIndirect(unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] MultiDrawIndexedInstancedIndirect\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::MultiDrawInstancedIndirect(unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] MultiDrawInstancedIndirect\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::MultiDrawIndexedInstancedIndirectAuto(ID3D11Buffer*, unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] MultiDrawIndexedInstancedIndirectAuto\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::MultiDrawInstancedIndirectAuto(ID3D11Buffer*, unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] MultiDrawInstancedIndirectAuto\n");
}

HRESULT d3d11x::ID3D11DeviceContextX_Vtable::RSGetMSAASettingsForQuality(_D3D11X_MSAA_SCAN_CONVERTER_SETTINGS*, _D3D11X_MSAA_EQAA_SETTINGS*, _D3D11X_MSAA_SAMPLE_PRIORITIES*, _D3D11X_MSAA_SAMPLE_POSITIONS*, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] RSGetMSAASettingsForQuality\n");
	return {};
}

void d3d11x::ID3D11DeviceContextX_Vtable::RSSetScanConverterMSAASettings(const _D3D11X_MSAA_SCAN_CONVERTER_SETTINGS*) {
	printf("[ID3D11DeviceContextX_Vtable] RSSetScanConverterMSAASettings\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::RSSetEQAASettings(const _D3D11X_MSAA_EQAA_SETTINGS*) {
	printf("[ID3D11DeviceContextX_Vtable] RSSetEQAASettings\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::RSSetSamplePositions(const _D3D11X_MSAA_SAMPLE_PRIORITIES*, const _D3D11X_MSAA_SAMPLE_POSITIONS*) {
	printf("[ID3D11DeviceContextX_Vtable] RSSetSamplePositions\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetResourceCompression(ID3D11Resource*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetResourceCompression\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetResourceCompressionX(const D3D11X_DESCRIPTOR_RESOURCE*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetResourceCompressionX\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetGDSRange(_D3D11X_GDS_REGION_TYPE, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetGDSRange\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::WriteGDS(_D3D11X_GDS_REGION_TYPE, unsigned int, unsigned int, const unsigned int*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] WriteGDS\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::ReadGDS(_D3D11X_GDS_REGION_TYPE, unsigned int, unsigned int, unsigned int*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] ReadGDS\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::VSSetShaderUserData(unsigned int, unsigned int, const unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] VSSetShaderUserData\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::HSSetShaderUserData(unsigned int, unsigned int, const unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] HSSetShaderUserData\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::DSSetShaderUserData(unsigned int, unsigned int, const unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] DSSetShaderUserData\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::GSSetShaderUserData(unsigned int, unsigned int, const unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] GSSetShaderUserData\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::PSSetShaderUserData(unsigned int, unsigned int, const unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] PSSetShaderUserData\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CSSetShaderUserData(unsigned int, unsigned int, const unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] CSSetShaderUserData\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::InsertWaitOnMemory(const void*, unsigned int, D3D11_COMPARISON_FUNC, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] InsertWaitOnMemory\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::WriteTimestampToMemory(void*) {
	printf("[ID3D11DeviceContextX_Vtable] WriteTimestampToMemory\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::WriteTimestampToBuffer(ID3D11Buffer*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] WriteTimestampToBuffer\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::StoreConstantRam(unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] StoreConstantRam\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::LoadConstantRam(unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] LoadConstantRam\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::WriteQuery(D3D11_QUERY, unsigned int, unsigned int, ID3D11Buffer*, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] WriteQuery\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::ResetQuery(D3D11_QUERY, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] ResetQuery\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::ConfigureQuery(D3D11_QUERY, const void*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] ConfigureQuery\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetShaderUserData(D3D11X_HW_STAGE, unsigned int, unsigned int, const unsigned int*) {
	printf("[ID3D11DeviceContextX_Vtable] SetShaderUserData\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetPixelShaderDepthForceZOrder(int) {
	printf("[ID3D11DeviceContextX_Vtable] SetPixelShaderDepthForceZOrder\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetPredicationFromQuery(D3D11_QUERY, ID3D11Buffer*, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetPredicationFromQuery\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetBorderColorPalette(ID3D11Buffer*, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetBorderColorPalette\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::WriteValueEndOfPipe64(void*, unsigned __int64, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] WriteValueEndOfPipe64\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::InsertWaitOnMemory64(const void*, unsigned int, D3D11_COMPARISON_FUNC, unsigned __int64) {
	printf("[ID3D11DeviceContextX_Vtable] InsertWaitOnMemory64\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::LoadConstantRamImmediate(unsigned int, const void*, unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] LoadConstantRamImmediate\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetScreenExtentsQuery(unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetScreenExtentsQuery\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::CollectScreenExtents(unsigned int, unsigned int, const unsigned __int64*, unsigned __int16, unsigned __int16) {
	printf("[ID3D11DeviceContextX_Vtable] CollectScreenExtents\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::FillResourceWithValue(ID3D11Resource*, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] FillResourceWithValue\n");
}

void d3d11x::ID3D11DeviceContextX_Vtable::SetDrawBalancing(unsigned int, unsigned int) {
	printf("[ID3D11DeviceContextX_Vtable] SetDrawBalancing\n");
}