#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "BaseLacerationLevelCondition.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class THEK23_API UBaseLacerationLevelCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UBaseLacerationLevelCondition();
};

FORCEINLINE uint32 GetTypeHash(const UBaseLacerationLevelCondition) { return 0; }
