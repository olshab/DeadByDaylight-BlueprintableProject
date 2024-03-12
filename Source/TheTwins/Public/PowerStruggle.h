#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "PowerStruggle.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPowerStruggle : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _wigglePercentToActivatePerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealPalletWhenKOEffectClass;

public:
	UPowerStruggle();
};

FORCEINLINE uint32 GetTypeHash(const UPowerStruggle) { return 0; }
