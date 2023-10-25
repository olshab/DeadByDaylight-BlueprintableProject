#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TrailControllerBase.h"
#include "UObject/NoExportTypes.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "SpawnedAttackPoint.h"
#include "Engine/NetSerialization.h"
#include "TormentAttackTrailController.generated.h"

class AActor;
class ATormentAttackTrailPoint;
class AMobileTormentTrailRenderer;

UCLASS(Blueprintable)
class ATormentAttackTrailController : public ATrailControllerBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ATormentAttackTrailPoint> _tormentTrailAttackPointClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _tormentTrailAttackSign;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _trailSpawnDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeIntervalBetweenPointsSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _attackTrailLenght;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _consideredAsSlopeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FTransform> _pointsTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _slopeDetectionOverGroundVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _groundDetectionEndVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _slopeCompensationVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FSpawnedAttackPoint> _spawnedAttackPointList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _trailSpawnStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _soundDistanceOnTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AMobileTormentTrailRenderer* _mobileTormentTrailRenderer;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnTrailPointRemovedCosmetic(int32 index);

private:
	UFUNCTION(BlueprintCallable)
	void OnStartTrailTimerDone();

	UFUNCTION(BlueprintCallable)
	void OnIntervalBetweenPointsTimerDone();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnAttackTrailStartCosmetic();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartAttackTrail(const float serverTimeSpawn, const FVector_NetQuantize10 location, const FRotator rotation);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DisplayAttackTrailSpawnSign();

public:
	ATormentAttackTrailController();
};

FORCEINLINE uint32 GetTypeHash(const ATormentAttackTrailController) { return 0; }
