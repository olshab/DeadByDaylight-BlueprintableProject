#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_PushObjectFocus.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_PushObjectFocus : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFocusObj;

public:
	UBTService_PushObjectFocus();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_PushObjectFocus) { return 0; }
