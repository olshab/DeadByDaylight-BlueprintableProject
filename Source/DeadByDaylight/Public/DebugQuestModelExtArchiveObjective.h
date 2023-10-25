#pragma once

#include "CoreMinimal.h"
#include "DebugQuestModelExtArchiveCondition.h"
#include "DebugModelExtArchiveQuestEvent.h"
#include "DebugModelExtArchiveQuestSpecialBehaviours.h"
#include "DebugQuestModelExtArchiveObjective.generated.h"

USTRUCT(BlueprintType)
struct FDebugQuestModelExtArchiveObjective
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDebugQuestModelExtArchiveCondition> Conditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NeededProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDebugModelExtArchiveQuestEvent> QuestEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDebugModelExtArchiveQuestSpecialBehaviours> SpecialBehaviours;

public:
	DEADBYDAYLIGHT_API FDebugQuestModelExtArchiveObjective();
};

FORCEINLINE uint32 GetTypeHash(const FDebugQuestModelExtArchiveObjective) { return 0; }
