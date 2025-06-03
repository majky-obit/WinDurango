#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate SecureDeviceAssociationTemplate::GetTemplateByName(hstring const& name)
    {
        printf("SecureDeviceAssociationTemplate::GetTemplateByName\n");
        return winrt::make<SecureDeviceAssociationTemplate>();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate> SecureDeviceAssociationTemplate::Templates()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SecureDeviceAssociationTemplate::AssociationIncoming(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate, winrt::Windows::Xbox::Networking::SecureDeviceAssociationIncomingEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void SecureDeviceAssociationTemplate::AssociationIncoming(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationForPortsAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior, hstring initiatorPort, hstring acceptorPort)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer> SecureDeviceAssociationTemplate::CreateCertificateRequestAsync(hstring subjectName)
    {
        printf("SecureDeviceAssociationTemplate::CreateCertificateRequestAsynv\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SecureDeviceAssociationTemplate::InstallCertificateAsync(winrt::Windows::Storage::Streams::IBuffer certificateBuffer)
    {
        printf("SecureDeviceAssociationTemplate::InstallCertificateAsync\n");
        throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociationTemplate::Name()
    {
        printf("SecureDeviceAssociationTemplate::Name\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription SecureDeviceAssociationTemplate::InitiatorSocketDescription()
    {
        printf("SecureDeviceAssociationTemplate::InitiatorSocketDescription\n");
        return winrt::make<SecureDeviceSocketDescription>();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription SecureDeviceAssociationTemplate::AcceptorSocketDescription()
    {
        printf("SecureDeviceAssociationTemplate::AcceptorSocketDescription\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationUsage SecureDeviceAssociationTemplate::AllowedUsages()
    {
        printf("SecureDeviceAssociationTemplate::AllowedUsages\n");
        throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociationTemplate::RelyingParty()
    {
        printf("SecureDeviceAssociationTemplate::RelyingParty\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::ProtocolParserDescription> SecureDeviceAssociationTemplate::ProtocolParserDescriptions()
    {
        printf("SecureDeviceAssociationTemplate::ProtocolParserDescriptions\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> SecureDeviceAssociationTemplate::QualityOfServiceMetricPathPriorities()
    {
        printf("SecureDeviceAssociationTemplate::QualityOfServiceMetricPathPriorities\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::MultiplayerSessionRequirement SecureDeviceAssociationTemplate::MultiplayerSessionRequirement()
    {
        printf("SecureDeviceAssociationTemplate::MultiplayerSessionRequirement\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::Associations()
    {
        printf("SecureDeviceAssociationTemplate::Associations\n");
        throw hresult_not_implemented();
    }
}
