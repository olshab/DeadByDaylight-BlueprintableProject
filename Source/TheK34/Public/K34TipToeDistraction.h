#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "DBDTunableRowHandle.h"
#include "K34TipToeDistraction.generated.h"

class ADBDPlayer;
class UAkComponent;
class UBaseGroundDetectorComponent;
class UK34DistractionNavMovementComponent;
class UCustomizedAudioComponent;

UCLASS(Blueprintable)
class AK34TipToeDistraction : public AActor, public IPoolableActor, public INavAgentInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnAcquiredChanged _onAcquiredChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maximumVisibilityDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _footStepSpawnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chanceToRandomlyTurnBackOnPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chanceToRandomlyChangeDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chanceToRandomlyStop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _newTargetRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minTimeIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxTimeIdle;

	UPROPERTY(EditAnywhere)
	int8 _maxCountSameLocationConsideredStuck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceConsideredStuck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _randomBehaviourCheckRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _overlapRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cosmeticFootSpawnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isInUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK34DistractionNavMovementComponent* _navMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBaseGroundDetectorComponent* _groundDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _akComponent;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ShowDistractionDebug(const float halfSize, const float radius);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSpawned(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnDeactivated();

protected:
	UFUNCTION(BlueprintCallable)
	ADBDPlayer* GetOwningPlayer();

	UFUNCTION(BlueprintPure)
	FString GetFootAudioSurfaceName() const;

	UFUNCTION(BlueprintPure)
	UCustomizedAudioComponent* GetCustomizedAudio() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetAKComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFootHitGround();

public:
	AK34TipToeDistraction();
};

FORCEINLINE uint32 GetTypeHash(const AK34TipToeDistraction) { return 0; }
