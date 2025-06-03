#include "pch.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferManager.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferManager.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{

    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::CheckForUpdateResult> PackageTransferManager::CheckForUpdateAsync(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage package)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> PackageTransferManager::RequestUpdatePackageAsync(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage package)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> PackageTransferManager::RequestUpdateCurrentPackageAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferManager PackageTransferManager::Current( )
    {
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferManager static_manager{ nullptr };

        if (!static_manager)
        {
            static_manager = winrt::make<PackageTransferManager>( );
        }

        Logger::Info("PackageTransferManager::Current()\n");
        return static_manager;
    }

    winrt::Windows::Xbox::Management::Deployment::PackageTransferManager PackageTransferManager::Create(winrt::Windows::ApplicationModel::Package const& package)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void PackageTransferManager::UpdateInstallOrder(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds, winrt::Windows::Xbox::Management::Deployment::UpdateInstallOrderBehavior const& updateBehavior)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool PackageTransferManager::IsChunkInstalled(uint32_t chunkId)
    {
        Logger::Warning("PackageTransferManager::IsChunkInstalled() STUBBED\n");
        return true;
    }
    bool PackageTransferManager::AreChunksInstalled(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
        return true;
    }
    uint32_t PackageTransferManager::FindChunkFromFile(hstring const& path)
    {
        LOG_NOTIMPLEMENTED(); return 0;
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferManager::TransferStatus( )
    {
        Logger::Warning("PackageTransferManager::TransferStatus() STUBBED\n");
        return winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus::None;
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferManager::TransferType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers PackageTransferManager::AvailableChunkSpecifiers()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallationState PackageTransferManager::GetInstallationState(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallationState PackageTransferManager::GetInstallationState(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& specifiers)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher> PackageTransferManager::AddChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers additionalSpecifiers)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction PackageTransferManager::RemoveChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers removeSpecifiers)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
