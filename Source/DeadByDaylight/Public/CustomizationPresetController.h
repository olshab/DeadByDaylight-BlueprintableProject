#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationPresetController.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UCustomizationPresetController : public UObject
{
	GENERATED_BODY()

public:
	UCustomizationPresetController();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationPresetController) { return 0; }
