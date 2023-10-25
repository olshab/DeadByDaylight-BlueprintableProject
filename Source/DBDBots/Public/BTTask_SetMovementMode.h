#pragma once

#include "CoreMinimal.h"
#include "ECharacterMovementTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetMovementMode.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_SetMovementMode : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterMovementTypes MovementMode;

public:
	UBTTask_SetMovementMode();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetMovementMode) { return 0; }
