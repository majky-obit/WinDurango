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
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SecureDeviceAssociationTemplate::AssociationIncoming(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate, winrt::Windows::Xbox::Networking::SecureDeviceAssociationIncomingEventArgs> const& handler)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociationTemplate::AssociationIncoming(winrt::event_token const& token) noexcept
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationForPortsAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior, hstring initiatorPort, hstring acceptorPort)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer> SecureDeviceAssociationTemplate::CreateCertificateRequestAsync(hstring subjectName)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SecureDeviceAssociationTemplate::InstallCertificateAsync(winrt::Windows::Storage::Streams::IBuffer certificateBuffer)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociationTemplate::Name()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription SecureDeviceAssociationTemplate::InitiatorSocketDescription()
    {
        Logger::Info("SecureDeviceAssociationTemplate::InitiatorSocketDescription\n");
        return winrt::make<SecureDeviceSocketDescription>();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription SecureDeviceAssociationTemplate::AcceptorSocketDescription()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationUsage SecureDeviceAssociationTemplate::AllowedUsages()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociationTemplate::RelyingParty()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::ProtocolParserDescription> SecureDeviceAssociationTemplate::ProtocolParserDescriptions()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> SecureDeviceAssociationTemplate::QualityOfServiceMetricPathPriorities()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::MultiplayerSessionRequirement SecureDeviceAssociationTemplate::MultiplayerSessionRequirement()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::Associations()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
