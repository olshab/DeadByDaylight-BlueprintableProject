#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "AITunableParameter.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsBeforeTimerExpiration.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_IsBeforeTimerExpiration : public UBTDecorator
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter AdditionalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFilterKey;

public:
	UBTDecorator_IsBeforeTimerExpiration();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsBeforeTimerExpiration) { return 0; }
