#include "CameraHandlerComponent.h"
#include "EDBDCameraSocketID.h"
#include "Net/UnrealNetwork.h"

class USceneComponent;
class UParticleSystemComponent;
class AActor;
class UCameraComponent;

void UCameraHandlerComponent::SetSocketID(EDBDCameraSocketID mode)
{

}

void UCameraHandlerComponent::SetAttachmentComponent(USceneComponent* attachmentComponent)
{

}

void UCameraHandlerComponent::PlayVFXOnCurrentCamera(UParticleSystemComponent* component)
{

}

void UCameraHandlerComponent::OnLevelReadyToPlay()
{

}

void UCameraHandlerComponent::OnFirstPersonViewChanged(bool isFirstPerson)
{

}

EDBDCameraSocketID UCameraHandlerComponent::GetSocketID()
{
	return EDBDCameraSocketID::VE_None;
}

float UCameraHandlerComponent::GetDesiredFOV() const
{
	return 0.0f;
}

AActor* UCameraHandlerComponent::GetCurrentCamera()
{
	return NULL;
}

UCameraComponent* UCameraHandlerComponent::GetCameraComponentBySocket(EDBDCameraSocketID socket) const
{
	return NULL;
}

void UCameraHandlerComponent::AddCameraToSocket(EDBDCameraSocketID mode, AActor* camera)
{

}

void UCameraHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCameraHandlerComponent, _delayedSocketID);
}

UCameraHandlerComponent::UCameraHandlerComponent()
{
	this->_cameraMap = TMap<EDBDCameraSocketID, AActor*>();
	this->_delayedSocketID = EDBDCameraSocketID::VE_None;
	this->_currentSocketID = EDBDCameraSocketID::VE_None;
	this->_manualZoomAllowPerkModifiers = false;
	this->_manualZoomCurveFloat = NULL;
	this->_cameraAttachmentSocket = NAME_None;
	this->_cameraAttachmentComponent = NULL;
	this->_isFOVSystemActive = true;
}
