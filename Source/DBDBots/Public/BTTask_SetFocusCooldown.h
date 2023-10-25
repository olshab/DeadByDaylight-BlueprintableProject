#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetFocusCooldown.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_SetFocusCooldown : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBOnObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ContextName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InfiniteDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

public:
	UBTTask_SetFocusCooldown();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetFocusCooldown) { return 0; }
