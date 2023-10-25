#pragma once

#include "CoreMinimal.h"
#include "BTService_StateMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StateMonitor_Slasher.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_StateMonitor_Slasher : public UBTService_StateMonitor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsCarrying;

public:
	UBTService_StateMonitor_Slasher();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StateMonitor_Slasher) { return 0; }
