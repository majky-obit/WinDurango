#include "pch.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
		printf("PackageTransferWatcher::Create\n");
		return winrt::make<winrt::Windows::Xbox::Management::Deployment::implementation::PackageTransferWatcher>();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& package)
    {
		printf("PackageTransferWatcher::Create\n");
		return winrt::make<winrt::Windows::Xbox::Management::Deployment::implementation::PackageTransferWatcher>();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& specifiers)
    {
		printf("PackageTransferWatcher::CreateForChunkSpecifiers\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForContentPackage(winrt::Windows::Xbox::Management::Deployment::IContentPackage const& package)
    {
		printf("PackageTransferWatcher::CreateForContentPackage\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForDownloadableContentPackage(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage const& package)
    {
		printf("PackageTransferWatcher::CreateForDownloadableContentPackage\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> PackageTransferWatcher::ChunkIds()
    {
		printf("PackageTransferWatcher::ChunkIds\n");
        throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ChunkCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ChunkCompletedEventArgs> const& handler)
    {
		printf("PackageTransferWatcher::ChunkCompleted\n"); 
        return {};
    }
    void PackageTransferWatcher::ChunkCompleted(winrt::event_token const& cookie) noexcept
    {
		printf("PackageTransferWatcher::ChunkCompleted\n"); 
        //throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ProgressChangedEventArgs> const& handler)
    {
        printf("PackageTransferWatcher::ProgressChanged\n");
        return {};
    }
    void PackageTransferWatcher::ProgressChanged(winrt::event_token const& cookie) noexcept
    {
        printf("PackageTransferWatcher::ProgressChanged\n");
    }
    winrt::event_token PackageTransferWatcher::TransferCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferCompletedEventArgs> const& handler)
    {
		printf("PackageTransferWatcher::TransferCompleted\n");
        throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferCompleted(winrt::event_token const& cookie) noexcept
    {
		printf("PackageTransferWatcher::TransferCompleted\n");
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferWatcher::TransferStatus()
    {
		printf("PackageTransferWatcher::TransferStatus\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferWatcher::TransferType()
    {
		printf("PackageTransferWatcher::TransferType\n");
        throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::TransferStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferStatusChangedEventArgs> const& handler)
    {
		printf("PackageTransferWatcher::TransferStatusChanged\n");
        throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferStatusChanged(winrt::event_token const& cookie) noexcept
    {
		printf("PackageTransferWatcher::TransferStatusChanged\n");
    }
}
