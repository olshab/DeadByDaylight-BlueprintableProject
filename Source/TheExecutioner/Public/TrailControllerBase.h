#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "ETrailType.h"
#include "TrailControllerBase.generated.h"

class UAuthoritativePoolableActorComponent;
class ABaseTormentTrailPoint;
class USplineComponent;
class UTormentTrailPointCollectionComponent;

UCLASS(Blueprintable, Abstract)
class ATrailControllerBase : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _distanceBetweenTormentTrailPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USplineComponent* _splineComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativePoolableActorComponent* _poolableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ETrailType _trailType;

protected:
	UFUNCTION(BlueprintCallable)
	void RemoveTormentTrailController();

	UFUNCTION(BlueprintCallable)
	void OnTrailPointDeath(ABaseTormentTrailPoint* baseTrailPoint);

	UFUNCTION(BlueprintCallable)
	void OnAcquireChanged(const bool acquired);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ActivateCosmetic(const bool value);

public:
	ATrailControllerBase();
};

FORCEINLINE uint32 GetTypeHash(const ATrailControllerBase) { return 0; }
