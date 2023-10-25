#pragma once

#include "CoreMinimal.h"
#include "ERecentlyActiveModifierTimerStartType.h"
#include "EvaluatorCondition.h"
#include "ERecentlyActiveModifierType.h"
#include "GameplayTagContainer.h"
#include "HasRecentlyActiveModifierFlagCondition.generated.h"

UCLASS(Blueprintable, Abstract)
class ARCHIVES_API UHasRecentlyActiveModifierFlagCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERecentlyActiveModifierType _type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERecentlyActiveModifierTimerStartType _timerStartType;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _modifierTags;

public:
	UHasRecentlyActiveModifierFlagCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasRecentlyActiveModifierFlagCondition) { return 0; }
