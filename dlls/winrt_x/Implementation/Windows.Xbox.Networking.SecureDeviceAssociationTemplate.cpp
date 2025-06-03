#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate SecureDeviceAssociationTemplate::GetTemplateByName(hstring const& name)
    {
        Logger::Info("SecureDeviceAssociationTemplate::GetTemplateByName\n");
        return winrt::make<SecureDeviceAssociationTemplate>();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate> SecureDeviceAssociationTemplate::Templates()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SecureDeviceAssociationTemplate::AssociationIncoming(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate, winrt::Windows::Xbox::Networking::SecureDeviceAssociationIncomingEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociationTemplate::AssociationIncoming(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationForPortsAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior, hstring initiatorPort, hstring acceptorPort)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer> SecureDeviceAssociationTemplate::CreateCertificateRequestAsync(hstring subjectName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SecureDeviceAssociationTemplate::InstallCertificateAsync(winrt::Windows::Storage::Streams::IBuffer certificateBuffer)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociationTemplate::Name()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription SecureDeviceAssociationTemplate::InitiatorSocketDescription()
    {
        Logger::Info("SecureDeviceAssociationTemplate::InitiatorSocketDescription\n");
        return winrt::make<SecureDeviceSocketDescription>();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription SecureDeviceAssociationTemplate::AcceptorSocketDescription()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationUsage SecureDeviceAssociationTemplate::AllowedUsages()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociationTemplate::RelyingParty()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::ProtocolParserDescription> SecureDeviceAssociationTemplate::ProtocolParserDescriptions()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> SecureDeviceAssociationTemplate::QualityOfServiceMetricPathPriorities()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::MultiplayerSessionRequirement SecureDeviceAssociationTemplate::MultiplayerSessionRequirement()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::Associations()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
