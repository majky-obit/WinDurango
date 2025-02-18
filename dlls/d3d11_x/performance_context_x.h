#include "device_context_x.h"
#include "performance_device_x.h"

namespace wdi{

	D3DINTERFACE(ID3D11PerformanceContextX, 9458FE06, C78D, 47F7, 96, A0, EC, 7B, 72, 7B, E1, E9) : public ID3D11DeviceContextX
	{

	};

	#define IID_ID3D11PerformanceContextX GUID(ID3D11PerformanceContextX)
	#define IID_ID3DXboxPerformanceContext IID_ID3D11PerformanceContextX
	typedef ID3D11PerformanceContextX ID3DXboxPerformanceContext;
}