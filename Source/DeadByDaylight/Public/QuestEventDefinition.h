#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "QuestEventDefinition.generated.h"

class UQuestEventEvaluatorBase;

USTRUCT(BlueprintType)
struct FQuestEventDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> TrackedGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UQuestEventEvaluatorBase> QuestEventEvaluator;

public:
	DEADBYDAYLIGHT_API FQuestEventDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FQuestEventDefinition) { return 0; }
