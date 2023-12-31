#pragma once

#include "CoreMinimal.h"
#include "PathStrategySelector.h"
#include "EAIFleePathStrategy.h"
#include "PathStrategySelector_Flee.generated.h"

class UPathStrategy;

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API UPathStrategySelector_Flee : public UPathStrategySelector
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TMap<EAIFleePathStrategy, UPathStrategy*> FleePathStrategies;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<EAIFleePathStrategy, UPathStrategy*> _activeFleePathStrategiesMap;

public:
	UPathStrategySelector_Flee();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategySelector_Flee) { return 0; }
