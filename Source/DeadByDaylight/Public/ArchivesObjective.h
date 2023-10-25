#pragma once

#include "CoreMinimal.h"
#include "ArchivesQuestCondition.h"
#include "ArchivesQuestEvent.h"
#include "ArchivesQuestSpecialBehaviour.h"
#include "ArchivesObjective.generated.h"

USTRUCT(BlueprintType)
struct FArchivesObjective
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ObjectiveId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool ObjectiveId_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IncrementWithEventRepetitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NeededProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FArchivesQuestCondition> Conditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Conditions_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FArchivesQuestEvent> QuestEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool QuestEvent_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FArchivesQuestSpecialBehaviour> SpecialBehaviours;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool SpecialBehaviours_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCommunityObjective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool IsCommunityObjective_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesObjective();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesObjective) { return 0; }
