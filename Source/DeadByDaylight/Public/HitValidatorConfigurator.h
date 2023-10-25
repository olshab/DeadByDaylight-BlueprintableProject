#pragma once

#include "CoreMinimal.h"
#include "BaseHitValidationConfigurator.h"
#include "HitValidatorConfigurator.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHitValidatorConfigurator : public UBaseHitValidationConfigurator
{
	GENERATED_BODY()

public:
	UHitValidatorConfigurator();
};

FORCEINLINE uint32 GetTypeHash(const UHitValidatorConfigurator) { return 0; }
