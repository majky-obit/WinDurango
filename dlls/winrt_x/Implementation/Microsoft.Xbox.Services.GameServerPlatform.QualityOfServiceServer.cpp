#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.QualityOfServiceServer.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.QualityOfServiceServer.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring QualityOfServiceServer::ServerFullQualifiedDomainName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring QualityOfServiceServer::SecureDeviceAddressBase64()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring QualityOfServiceServer::TargetLocation()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
