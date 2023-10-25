#pragma once

#include "CoreMinimal.h"
#include "BaseColorCaster.h"
#include "RoughnessCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API URoughnessCaster : public UBaseColorCaster
{
	GENERATED_BODY()

public:
	URoughnessCaster();
};

FORCEINLINE uint32 GetTypeHash(const URoughnessCaster) { return 0; }
