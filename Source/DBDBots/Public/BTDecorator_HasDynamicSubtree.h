#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_HasDynamicSubtree.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_HasDynamicSubtree : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag InjectTag;

public:
	UBTDecorator_HasDynamicSubtree();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasDynamicSubtree) { return 0; }
