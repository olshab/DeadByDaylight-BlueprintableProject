#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EPawnInputPressTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_Interact.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_Interact : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractorObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPawnInputPressTypes Input;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OnFailFocusCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PropagateCooldownOnInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FailStartInteractTimeLimit;

public:
	UBTTask_Interact();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_Interact) { return 0; }
