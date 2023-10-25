#pragma once

#include "CoreMinimal.h"
#include "K32KillerPodSpawningInputData.h"
#include "DBDTunableRowHandle.h"
#include "EK32KillerPodSpawningResult.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "K32KillerPodSpawningComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerPodSpawningComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podRemovalRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumRelativeHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podSurfaceDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _worldDetectionTraceSphereSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _survivorDetectionSphereSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lineOfSightTraceSphereSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _podCollisionToFinalLocationTraceSphereSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podInteractableRestrictionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podWindowRestrictionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podGeneratorRestrictionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _secondaryHitCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _secondaryHitCheckBackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _secondaryHitPitchRotationDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _secondaryHitYawRotationDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _floorSearchingLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podSurfaceMinDegreesThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podSurfaceMaxDegreesThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minimumSpawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _requiredAttachmentPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _attachmentPointGridHorizontalAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _attachmentPointGridVerticalAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _attachmentPointGridLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _distanceBetweenPods;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _addon13EffectActivationRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _addon13EffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _revealSurvivorToKillerStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _attachmentPointsRays;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _validationAllowedDistanceOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _indicatorPointToLocationFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _traceProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _invalidShowDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _projectileSpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _forwardProjectileSpawnDistance;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_FireKillerProjectile(const FK32KillerPodSpawningInputData inputData, const EK32KillerPodSpawningResult expectedResult);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_FireKillerProjectile();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInvalidPodTriggers(const FVector& invalidLocation) const;

public:
	UK32KillerPodSpawningComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerPodSpawningComponent) { return 0; }
