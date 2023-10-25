#pragma once

#include "CoreMinimal.h"
#include "BaseTwinInspectLocker.h"
#include "TwinInspectOccupiedLocker.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTwinInspectOccupiedLocker : public UBaseTwinInspectLocker
{
	GENERATED_BODY()

public:
	UTwinInspectOccupiedLocker();
};

FORCEINLINE uint32 GetTypeHash(const UTwinInspectOccupiedLocker) { return 0; }
