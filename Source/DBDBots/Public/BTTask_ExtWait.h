#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "AITunableParameter.h"
#include "BTTask_ExtWait.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_ExtWait : public UBTTask_Wait
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter WaitTimeInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter WaitRandomDeviation;

public:
	UBTTask_ExtWait();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_ExtWait) { return 0; }
