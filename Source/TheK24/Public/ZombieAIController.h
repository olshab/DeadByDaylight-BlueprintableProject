#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIController.h"
#include "TunableStat.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Perception/AIPerceptionTypes.h"
#include "ZombieAIController.generated.h"

class ACamperPlayer;
class UBehaviorTree;
class UAIPerceptionComponent;
class AMeatHook;
class ASlasherPlayer;
class AActor;

UCLASS(Blueprintable)
class AZombieAIController : public AAIController
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UBehaviorTree* _zombieBehaviorTree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionComponent* _aiPerceptionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _survivorInVision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _chaseTargetSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _goToLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AMeatHook* _patrolArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _survivorsInAttackDetector;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _cannotChaseWhileIdleTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _zombieAttackHitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _zombieAttackOpenTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _zombieAnimSpawnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _zombieAnimDyingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _zombieSightRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _zombieLoseSightRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _zombieVisionHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _zombieFallSmashTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _zombieAttackCooldownTime;

private:
	UFUNCTION(BlueprintCallable)
	void OnSlasherSet(ASlasherPlayer* slasher);

	UFUNCTION(BlueprintCallable)
	void Authority_OnTargetPerceptionUpdated(AActor* actor, FAIStimulus stimulus);

public:
	AZombieAIController();
};

FORCEINLINE uint32 GetTypeHash(const AZombieAIController) { return 0; }
