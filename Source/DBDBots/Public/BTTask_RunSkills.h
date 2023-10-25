#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RunSkills.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_RunSkills : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag Context;

public:
	UBTTask_RunSkills();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_RunSkills) { return 0; }
