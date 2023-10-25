#pragma once

#include "CoreMinimal.h"
#include "BaseHitValidationConfigurator.h"
#include "CharacterPositionRecorderConfigurator.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterPositionRecorderConfigurator : public UBaseHitValidationConfigurator
{
	GENERATED_BODY()

public:
	UCharacterPositionRecorderConfigurator();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterPositionRecorderConfigurator) { return 0; }
