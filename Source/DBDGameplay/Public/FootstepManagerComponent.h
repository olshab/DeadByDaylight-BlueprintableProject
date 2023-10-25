#pragma once

#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Footstep.h"
#include "FootstepManagerComponent.generated.h"

class UMaterial;
class UFootstepCreatorComponent;
class UDecalSpawner;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFootstepManagerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FPerPlatformInt _decalPoolSize;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _recycleThresholdPercentage;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _recycleDistancePercentage;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt _maxOverlapping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _raycastHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _raycastZOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _raycastDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumDecalSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maximumDecalSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _projectionTickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UMaterial* _footstepsMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FFootstep> _currentFootSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDecalSpawner* _decalSpawner;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerSpawnFootstep(UFootstepCreatorComponent* originatorComponent, FVector location);

	UFUNCTION(BlueprintCallable)
	void OnUpdateObserverFootsteps();

	UFUNCTION(BlueprintCallable)
	void OnUpdateCreatorFootsteps(UFootstepCreatorComponent* creator);

public:
	UFootstepManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFootstepManagerComponent) { return 0; }
