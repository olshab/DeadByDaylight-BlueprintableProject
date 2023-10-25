#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "TaggedAnimCollection.generated.h"

class UAnimCollection;

USTRUCT(BlueprintType)
struct FTaggedAnimCollection
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAnimCollection> AnimCollection;

public:
	ANIMATIONUTILITIES_API FTaggedAnimCollection();
};

FORCEINLINE uint32 GetTypeHash(const FTaggedAnimCollection) { return 0; }
