#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "ContextualAnimationMapping.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FContextualAnimationMapping
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag ContextTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UDataTable> AnimationMapping;

public:
	DEADBYDAYLIGHT_API FContextualAnimationMapping();
};

FORCEINLINE uint32 GetTypeHash(const FContextualAnimationMapping) { return 0; }
