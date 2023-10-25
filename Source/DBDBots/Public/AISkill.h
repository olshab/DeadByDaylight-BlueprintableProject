#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "AdditionalDynamicSubtree.h"
#include "GameplayTagContainer.h"
#include "KillerFilterItem.h"
#include "AISkill.generated.h"

class UNavigationQueryFilter;
class ADBDAIBTController;
class UAISenseConfig;
class UBehaviorTree;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDBOTS_API UAISkill : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer RunContexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopIfPausedByNavLinkProxy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RunTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RunCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RunCooldownTimeDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UNavigationQueryFilter> SkillNavigationFilterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UAISenseConfig*> SkillSenseConfigs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FKillerFilterItem> KillerFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBehaviorTree* DynamicSubtree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAdditionalDynamicSubtree> AdditionalDynamicSubtrees;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UObject*> _pausedByObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIBTController* _aiControllerOwner;

public:
	UAISkill();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill) { return 0; }
