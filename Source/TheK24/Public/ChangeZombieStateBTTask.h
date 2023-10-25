#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "EZombieState.h"
#include "ChangeZombieStateBTTask.generated.h"

UCLASS(Blueprintable)
class UChangeZombieStateBTTask : public UBTTask_BlueprintBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EZombieState _zombieState;

public:
	UChangeZombieStateBTTask();
};

FORCEINLINE uint32 GetTypeHash(const UChangeZombieStateBTTask) { return 0; }
