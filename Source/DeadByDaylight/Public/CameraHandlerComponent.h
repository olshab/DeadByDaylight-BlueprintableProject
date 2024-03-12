#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDBDCameraSocketID.h"
#include "CameraHandlerComponent.generated.h"

class UCameraComponent;
class AActor;
class USceneComponent;
class UCurveFloat;
class UParticleSystemComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCameraHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<EDBDCameraSocketID, AActor*> _cameraMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	EDBDCameraSocketID _delayedSocketID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EDBDCameraSocketID _currentSocketID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _manualZoomAllowPerkModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _manualZoomCurveFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _cameraAttachmentSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _cameraAttachmentComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isFOVSystemActive;

public:
	UFUNCTION(BlueprintCallable)
	void SetSocketID(EDBDCameraSocketID mode);

	UFUNCTION(BlueprintCallable)
	void SetAttachmentComponent(USceneComponent* attachmentComponent);

	UFUNCTION(BlueprintCallable)
	void PlayVFXOnCurrentCamera(UParticleSystemComponent* component);

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnFirstPersonViewChanged(bool isFirstPerson);

public:
	UFUNCTION(BlueprintCallable)
	EDBDCameraSocketID GetSocketID();

	UFUNCTION(BlueprintPure)
	float GetDesiredFOV() const;

	UFUNCTION(BlueprintCallable)
	AActor* GetCurrentCamera();

	UFUNCTION(BlueprintPure)
	UCameraComponent* GetCameraComponentBySocket(EDBDCameraSocketID socket) const;

	UFUNCTION(BlueprintCallable)
	void AddCameraToSocket(EDBDCameraSocketID mode, AActor* camera);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCameraHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCameraHandlerComponent) { return 0; }
