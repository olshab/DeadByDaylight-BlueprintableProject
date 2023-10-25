#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_HasStatusEffect.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_HasStatusEffect : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> StatusEffectIds;

public:
	UBTDecorator_HasStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasStatusEffect) { return 0; }
