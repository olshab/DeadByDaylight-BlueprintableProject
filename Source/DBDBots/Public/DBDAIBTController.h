#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDAIController.h"
#include "AISkillEvent.h"
#include "AISkillDynamicSubtreeStruct.h"
#include "AISkillPerk.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DBDAIBTController.generated.h"

class UDBDBehaviorTreeComponent;
class UDBDPathFollowingComponent;
class UDBDAIPerceptionComponent;
class UBehaviorTree;
class UDBDBlackboardComponent;
class UDBDAIGoalComponent;
class UAISkill;
class UDBDNavMeshExplorerComponent;
class UDBDAIStateComponent;
class UDBDAIPassiveCameraComponent;
class UDBDAIEnemyTrackerComponent;
class AActor;

UCLASS(Blueprintable)
class DBDBOTS_API ADBDAIBTController : public ADBDAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UAISkill*> BaseSkills;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UAISkill*> RoleSkills;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAISkillPerk> PerkSkills;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAISkillEvent> EventSkills;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ListenToAttackEvents;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAIPerceptionComponent* _dbdPerception;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDBlackboardComponent* _dbdBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDPathFollowingComponent* _dbdPathFollowing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDBehaviorTreeComponent* _dbdBehaviorTree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavMeshExplorerComponent* _navMeshExplorer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAIStateComponent* _aiState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAIGoalComponent* _aiGoal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAIPassiveCameraComponent* _aiPassiveCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAIEnemyTrackerComponent* _enemyTracker;

	UPROPERTY(EditAnywhere, Transient)
	TMap<FGameplayTag, FAISkillDynamicSubtreeStruct> _setDynamicSubtrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UAISkill*> _aiSkills;

private:
	UFUNCTION()
	void OnPawnBump(AActor* selfActor, AActor* otherActor, FVector normalImpulse, const FHitResult& hit);

	UFUNCTION(BlueprintCallable)
	void Authority_FinishedPlaying();

public:
	ADBDAIBTController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDAIBTController) { return 0; }
