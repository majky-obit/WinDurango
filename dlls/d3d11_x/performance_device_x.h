#pragma once
#include "device_x.h"

namespace wdi{

	D3DINTERFACE(ID3D11PerformanceDeviceX, 88671610, 712E, 4F1E, 84, AB, 01, B5, 94, 8B, D3, 73) : public ID3D11DeviceX
	{

	};

	#define IID_ID3D11PerformanceDeviceX GUID(ID3D11PerformanceDeviceX)
	#define IID_ID3DXboxPerformanceDevice IID_ID3D11PerformanceDeviceX
	typedef ID3D11PerformanceDeviceX ID3DXboxPerformanceDevice;

}