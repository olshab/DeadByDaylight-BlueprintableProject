#pragma once

#include "CoreMinimal.h"
#include "DebugModelExtArchiveQuestEvent.generated.h"

USTRUCT(BlueprintType)
struct FDebugModelExtArchiveQuestEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Parameters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString QuestEventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Repetition;

public:
	DEADBYDAYLIGHT_API FDebugModelExtArchiveQuestEvent();
};

FORCEINLINE uint32 GetTypeHash(const FDebugModelExtArchiveQuestEvent) { return 0; }
