#pragma once

#include "CoreMinimal.h"
#include "ArchivesQuestEvent.generated.h"

USTRUCT(BlueprintType)
struct FArchivesQuestEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString QuestEventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Repetition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Parameters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Operation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Parameters_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Operation_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesQuestEvent();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesQuestEvent) { return 0; }
