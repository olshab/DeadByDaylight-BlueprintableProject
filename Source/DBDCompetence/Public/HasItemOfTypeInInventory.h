#pragma once

#include "CoreMinimal.h"
#include "HasItemOfTypeEquipped.h"
#include "HasItemOfTypeInInventory.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHasItemOfTypeInInventory : public UHasItemOfTypeEquipped
{
	GENERATED_BODY()

public:
	UHasItemOfTypeInInventory();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemOfTypeInInventory) { return 0; }
