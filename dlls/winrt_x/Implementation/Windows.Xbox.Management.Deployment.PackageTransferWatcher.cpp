#include "pch.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
		Logger::Warning("PackageTransferWatcher::Create\n");
		return winrt::make<winrt::Windows::Xbox::Management::Deployment::implementation::PackageTransferWatcher>();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& package)
    {
		Logger::Warning("PackageTransferWatcher::Create\n");
		return winrt::make<winrt::Windows::Xbox::Management::Deployment::implementation::PackageTransferWatcher>();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& specifiers)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForContentPackage(winrt::Windows::Xbox::Management::Deployment::IContentPackage const& package)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForDownloadableContentPackage(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage const& package)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> PackageTransferWatcher::ChunkIds()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ChunkCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ChunkCompletedEventArgs> const& handler)
    {
        LOG_NOTIMPLEMENTED(); return {};
    }
    void PackageTransferWatcher::ChunkCompleted(winrt::event_token const& cookie) noexcept
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ProgressChangedEventArgs> const& handler)
    {
        LOG_NOTIMPLEMENTED(); return {};
    }
    void PackageTransferWatcher::ProgressChanged(winrt::event_token const& cookie) noexcept
    {
        Logger::Warning("PackageTransferWatcher::ProgressChanged\n");
    }
    winrt::event_token PackageTransferWatcher::TransferCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferCompletedEventArgs> const& handler)
    {
		Logger::Warning("PackageTransferWatcher::TransferCompleted\n");
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferCompleted(winrt::event_token const& cookie) noexcept
    {
		Logger::Warning("PackageTransferWatcher::TransferCompleted\n");
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferWatcher::TransferStatus()
    {
		Logger::Warning("PackageTransferWatcher::TransferStatus\n");
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferWatcher::TransferType()
    {
		Logger::Warning("PackageTransferWatcher::TransferType\n");
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::TransferStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferStatusChangedEventArgs> const& handler)
    {
		Logger::Warning("PackageTransferWatcher::TransferStatusChanged\n");
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferStatusChanged(winrt::event_token const& cookie) noexcept
    {
		Logger::Warning("PackageTransferWatcher::TransferStatusChanged\n");
    }
}
