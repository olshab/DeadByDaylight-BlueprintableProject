#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AkObservedPlayerSoundLoop.h"
#include "FlashlightFXComponent.generated.h"

class ADBDPlayer;
class USplineMeshComponent;
class UCurveFloat;
class USceneComponent;
class UStaticMeshComponent;
class UFlashlightTargetFXComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFlashEvent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFlashEvent OnFlashEvent;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _tip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UStaticMeshComponent* _centerGlowMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USplineMeshComponent* _beamMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimumOcclusionDistanceForSpotlight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _flashEffectIntensityCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _flashEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _spotLightHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _spotLightIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _beamBlindingHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _beamFlashHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _beamBlindingRatioInterpSpeedWithTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _beamBlindingRatioInterpSpeedWithoutTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _resizeConeLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _centerGlowWidthScaleWithoutBlindTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _centerGlowWidthScaleWithBlindTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _centerGlowWidthScaleDuringFlash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _centerGlowShrinkDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _centerGlowLengthMaxScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkObservedPlayerSoundLoop _aimedAtSoundLoop;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UFlashlightTargetFXComponent* _currentBeamModifyingTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UFlashlightTargetFXComponent*> _targets;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateFXTargets();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateConeEvent(float length, float halfAngle);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PostUpdateEvent();

private:
	UFUNCTION(BlueprintCallable)
	void OnTurnedOn();

	UFUNCTION(BlueprintCallable)
	void OnTurnedOff();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStopEvent();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStartEvent();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnDroppedEvent();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCollectorLocallyObservedChangedEvent(bool isLocallyObserved);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCollectedEvent(ADBDPlayer* collector);

public:
	UFUNCTION(BlueprintPure)
	float GetBlindingSuccessRatio() const;

public:
	UFlashlightFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightFXComponent) { return 0; }
