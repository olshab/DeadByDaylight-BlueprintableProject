#pragma once

#include "CoreMinimal.h"
#include "DBDOutlineRenderStrategySelector.generated.h"

class AActor;
class UBaseOutlineRenderStrategy;

USTRUCT(BlueprintType)
struct FDBDOutlineRenderStrategySelector
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _actorForStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBaseOutlineRenderStrategy* _selectedStrategy;

public:
	DEADBYDAYLIGHT_API FDBDOutlineRenderStrategySelector();
};

FORCEINLINE uint32 GetTypeHash(const FDBDOutlineRenderStrategySelector) { return 0; }
