#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EDecoratorIsObjFocusedFilter.h"
#include "BTDecorator_IsObjectFocused.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_IsObjectFocused : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDecoratorIsObjFocusedFilter Filter;

public:
	UBTDecorator_IsObjectFocused();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsObjectFocused) { return 0; }
