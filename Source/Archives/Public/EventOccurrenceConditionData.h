#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EConditionSubject.h"
#include "EventOccurrenceConditionData.generated.h"

USTRUCT(BlueprintType)
struct FEventOccurrenceConditionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag GameEventTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConditionSubject PreviousConditionSubject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConditionSubject CurrentConditionSubject;

public:
	ARCHIVES_API FEventOccurrenceConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FEventOccurrenceConditionData) { return 0; }
