#pragma once

#include "CoreMinimal.h"
#include "BaseTormentTrailPoint.h"
#include "ETrailPointRefreshReason.h"
#include "UObject/NoExportTypes.h"
#include "TormentTrailPoint.generated.h"

class USplineComponent;
class UAuthoritativePoolableActorComponent;

UCLASS(Blueprintable)
class ATormentTrailPoint : public ABaseTormentTrailPoint
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativePoolableActorComponent* _poolableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _splineMeshOverlapDistance;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_RemoveTrailPoint();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void RefreshTrailPointCosmetic(ETrailPointRefreshReason trailPointRefreshReason);

private:
	UFUNCTION(BlueprintCallable)
	void OnAcquireChanged(const bool acquired);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerTrailPointDisappear();

	UFUNCTION(BlueprintPure)
	void GetTrailLocationAndTangeant(const int32 indexInTrail, const USplineComponent* splineComponent, FVector& outStartLocation, FVector& outStartTangent, FVector& outEndLocation, FVector& outEndTangent) const;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddTrailCosmetic(const USplineComponent* splineComponent, const uint8 indexInTrail);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ActivateCosmetic(const bool value);

public:
	ATormentTrailPoint();
};

FORCEINLINE uint32 GetTypeHash(const ATormentTrailPoint) { return 0; }
