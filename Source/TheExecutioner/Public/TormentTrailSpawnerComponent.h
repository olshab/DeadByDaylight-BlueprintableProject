#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "ETrailType.h"
#include "TormentTrailSpawnerComponent.generated.h"

class ATormentTrailController;
class UTormentTrailPointCollectionComponent;
class UAuthoritativeActorPoolComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEEXECUTIONER_API UTormentTrailSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ATormentTrailController* _currentTrailController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _restrictionRangeToHooks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _restrictionRangeToGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _restrictionRangeToExitSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxSlopeAngleForTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minSlopeAngleForTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _restrictionRangeToHatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _restrictionMaxVerticalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _tormentTrailControllerPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _tormentRestrictedTrailControllerPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _actorsInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _slopeDetectionOverGroundVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _slopeDetectionEndVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _forwardMultiplierSlopeDetection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _epsilonToAddToSpawnLocationInZ;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Sever_SpawnTrailController(ATormentTrailController* trailController, const FVector_NetQuantize10 location, const FRotator rotation);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_StopTrailController(ATormentTrailController* trailController);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_RequestMoreActorInPool(const ETrailType trailType);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnInRangeChanged(const bool inRange, const AActor* actor);

public:
	UTormentTrailSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTormentTrailSpawnerComponent) { return 0; }
