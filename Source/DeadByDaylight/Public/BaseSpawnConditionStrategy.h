#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseSpawnConditionStrategy.generated.h"

UCLASS(Blueprintable, Abstract)
class DEADBYDAYLIGHT_API UBaseSpawnConditionStrategy : public UObject
{
	GENERATED_BODY()

public:
	UBaseSpawnConditionStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBaseSpawnConditionStrategy) { return 0; }
