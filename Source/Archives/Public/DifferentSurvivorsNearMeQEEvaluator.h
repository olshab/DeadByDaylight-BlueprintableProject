#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "DifferentSurvivorsNearMeQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class ARCHIVES_API UDifferentSurvivorsNearMeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _foundSurvivors;

public:
	UDifferentSurvivorsNearMeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UDifferentSurvivorsNearMeQEEvaluator) { return 0; }
