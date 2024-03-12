#pragma once

#include "CoreMinimal.h"
#include "EventTrackerQuestEventCondition.generated.h"

USTRUCT(BlueprintType)
struct FEventTrackerQuestEventCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Value;

public:
	DEADBYDAYLIGHT_API FEventTrackerQuestEventCondition();
};

FORCEINLINE uint32 GetTypeHash(const FEventTrackerQuestEventCondition) { return 0; }
