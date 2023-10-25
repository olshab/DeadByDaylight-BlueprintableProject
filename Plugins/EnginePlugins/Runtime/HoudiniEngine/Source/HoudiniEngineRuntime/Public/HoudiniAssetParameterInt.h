#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterInt.generated.h"

UCLASS(Blueprintable)
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterInt();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterInt) { return 0; }
