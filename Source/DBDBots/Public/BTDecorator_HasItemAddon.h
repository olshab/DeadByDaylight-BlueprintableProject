#pragma once

#include "CoreMinimal.h"
#include "AIHasItemAddonCondition.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_HasItemAddon.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_HasItemAddon : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAIHasItemAddonCondition> ItemAddons;

public:
	UBTDecorator_HasItemAddon();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasItemAddon) { return 0; }
