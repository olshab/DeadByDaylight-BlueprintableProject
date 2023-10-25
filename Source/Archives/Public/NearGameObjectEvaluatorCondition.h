#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "EQueryConditionType.h"
#include "GameObjectQuery.h"
#include "NearGameObjectEvaluatorCondition.generated.h"

UCLASS(Blueprintable, Abstract)
class UNearGameObjectEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EQueryConditionType _conditionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameObjectQuery> _gameObjectsQueries;

public:
	UNearGameObjectEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNearGameObjectEvaluatorCondition) { return 0; }
