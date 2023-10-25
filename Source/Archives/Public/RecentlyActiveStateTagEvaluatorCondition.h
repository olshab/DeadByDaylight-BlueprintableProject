#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "ERecentlyActiveStateTagType.h"
#include "GameplayTagContainer.h"
#include "ERecentlyActiveStateTagTimerStartType.h"
#include "RecentlyActiveStateTagEvaluatorCondition.generated.h"

UCLASS(Blueprintable, Abstract)
class URecentlyActiveStateTagEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERecentlyActiveStateTagType _type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERecentlyActiveStateTagTimerStartType _timerStartType;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stateTags;

public:
	URecentlyActiveStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const URecentlyActiveStateTagEvaluatorCondition) { return 0; }
