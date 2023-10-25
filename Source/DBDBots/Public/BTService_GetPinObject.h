#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GetPinObject.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_GetPinObject : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBToSetKey;

	UPROPERTY(EditAnywhere)
	FGameplayTag PinTag;

public:
	UBTService_GetPinObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_GetPinObject) { return 0; }
