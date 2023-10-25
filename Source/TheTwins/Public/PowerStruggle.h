#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "PowerStruggle.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPowerStruggle : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _wigglePercentToActivatePerk;

public:
	UPowerStruggle();
};

FORCEINLINE uint32 GetTypeHash(const UPowerStruggle) { return 0; }
