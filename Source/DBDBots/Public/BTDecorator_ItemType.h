#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "EItemType.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ItemType.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_ItemType : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBTargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType ItemType;

public:
	UBTDecorator_ItemType();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ItemType) { return 0; }
