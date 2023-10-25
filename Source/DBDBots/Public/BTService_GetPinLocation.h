#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GetPinLocation.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_GetPinLocation : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBToSetKey;

	UPROPERTY(EditAnywhere)
	FGameplayTag PinTag;

public:
	UBTService_GetPinLocation();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_GetPinLocation) { return 0; }
