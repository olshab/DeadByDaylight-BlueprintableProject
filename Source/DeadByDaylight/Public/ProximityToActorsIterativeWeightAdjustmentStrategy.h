#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "IterativeWeightAdjustmentStrategy.h"
#include "UObject/ScriptInterface.h"
#include "ProximityToActorsIterativeWeightAdjustmentStrategy.generated.h"

class UCurveFloat;
class IWeightedElement;
class USceneComponent;

UCLASS(Blueprintable, Abstract)
class DEADBYDAYLIGHT_API UProximityToActorsIterativeWeightAdjustmentStrategy : public UIterativeWeightAdjustmentStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USceneComponent*> _unmatchedActorLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<TScriptInterface<IWeightedElement>> _selectedSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _currentPass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _penaltyFromDistanceToClosestSpawnObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _penaltyFromDistanceToClosestSpawnObjectWhenActorHasOtherSpawnObjectNearby;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _scoreFromDistanceFromClosestActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _actorCloseToSpawnObjectDistanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _spawnerCountPerActor;

public:
	UProximityToActorsIterativeWeightAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UProximityToActorsIterativeWeightAdjustmentStrategy) { return 0; }
