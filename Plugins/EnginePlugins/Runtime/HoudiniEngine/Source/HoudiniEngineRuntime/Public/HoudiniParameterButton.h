#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterButton.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterButton : public UHoudiniParameter
{
	GENERATED_BODY()

public:
	UHoudiniParameterButton();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterButton) { return 0; }
