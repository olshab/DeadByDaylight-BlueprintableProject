#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETaskInputPressModes.h"
#include "EPawnInputPressTypes.h"
#include "AITunableParameter.h"
#include "BTTask_InputPress.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_InputPress : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPawnInputPressTypes Input;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETaskInputPressModes InputMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter InputPressLoopInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool LockInput;

public:
	UBTTask_InputPress();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_InputPress) { return 0; }
