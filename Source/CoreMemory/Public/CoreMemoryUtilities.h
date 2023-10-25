#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoreMemoryUtilities.generated.h"

UCLASS(Blueprintable)
class UCoreMemoryUtilities : public UObject
{
	GENERATED_BODY()

public:
	UCoreMemoryUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryUtilities) { return 0; }
