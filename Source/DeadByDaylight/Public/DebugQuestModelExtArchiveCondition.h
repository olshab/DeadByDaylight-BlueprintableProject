#pragma once

#include "CoreMinimal.h"
#include "DebugQuestModelExtArchiveCondition.generated.h"

USTRUCT(BlueprintType)
struct FDebugQuestModelExtArchiveCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Value;

public:
	DEADBYDAYLIGHT_API FDebugQuestModelExtArchiveCondition();
};

FORCEINLINE uint32 GetTypeHash(const FDebugQuestModelExtArchiveCondition) { return 0; }
