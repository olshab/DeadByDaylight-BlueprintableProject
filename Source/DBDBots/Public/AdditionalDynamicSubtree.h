#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AdditionalDynamicSubtree.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FAdditionalDynamicSubtree
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer DynamicSubtreeContexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AlwaysEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBehaviorTree* DynamicSubtree;

public:
	DBDBOTS_API FAdditionalDynamicSubtree();
};

FORCEINLINE uint32 GetTypeHash(const FAdditionalDynamicSubtree) { return 0; }
