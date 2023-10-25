#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "SecondsToRateModifierBaseAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USecondsToRateModifierBaseAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _secondsToAdd;

	UPROPERTY(EditAnywhere)
	FGameplayTag _rateModifierTagToCompute;

public:
	USecondsToRateModifierBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const USecondsToRateModifierBaseAddon) { return 0; }
