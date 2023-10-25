#pragma once

#include "CoreMinimal.h"
#include "DBDOutlineComponentConfiguration.h"
#include "DBDOutlineComponentStencilConfiguration.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDOutlineComponentStencilConfiguration : public UDBDOutlineComponentConfiguration
{
	GENERATED_BODY()

public:
	UDBDOutlineComponentStencilConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const UDBDOutlineComponentStencilConfiguration) { return 0; }
