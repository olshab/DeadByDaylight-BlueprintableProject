#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_HasStateTag.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_HasStateTag : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> StateTags;

public:
	UBTDecorator_HasStateTag();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasStateTag) { return 0; }
