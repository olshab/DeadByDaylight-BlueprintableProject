#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "NearMeEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UNearMeEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _questOwnerCanBeSubjectOfEvent;

public:
	UNearMeEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNearMeEvaluatorCondition) { return 0; }
