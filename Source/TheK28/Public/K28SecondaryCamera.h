#pragma once

#include "CoreMinimal.h"
#include "SpectatingActorLinker.h"
#include "GameFramework/Actor.h"
#include "EK28NightCycleState.h"
#include "UObject/NoExportTypes.h"
#include "K28SecondaryCamera.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AK28SecondaryCamera : public AActor, public ISpectatingActorLinker
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _teleportCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumCameraPitchOrientationAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maximumCameraPitchOrientationAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _observerRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minTimeBetweenCameraRotationUpdateRPC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorGrabTransition_CameraRotationEndPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorGrabTransition_DistanceFromLocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isKillerPlayerViewTarget;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetIsKillerPlayerViewTarget(bool isKillerPlayerViewTarget);

	UFUNCTION(BlueprintCallable, Server, Unreliable)
	void Server_SetCameraOrientation(FRotator newOrientation);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsKillerPlayerViewTarget();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_SetCameraOrientation(FRotator newOrientation, bool isRelativeRotation);

	UFUNCTION(BlueprintPure)
	bool GetIsKillerPlayerViewTarget() const;

	UFUNCTION(BlueprintPure)
	FRotator GetCameraWorldRotation() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateDarknessPlaneVisibility(bool isVisible);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerTeleportStartVisuals();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerTeleportEndVisuals();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFadeOut();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFadeIn();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNightCycleChanged(EK28NightCycleState newNightCycleState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerExitLocker();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerEnterLocker();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsLocallyObservingKillerChanged(bool isLocallyObservingKiller);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DisableAllEffects();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK28SecondaryCamera();
};

FORCEINLINE uint32 GetTypeHash(const AK28SecondaryCamera) { return 0; }
