#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "HexThrillOfTheHuntStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHexThrillOfTheHuntStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _speedPenaltyPercents;

public:
	UFUNCTION(BlueprintPure)
	float GetSpeedPenaltyPercents(int32 tierLevel) const;

public:
	UHexThrillOfTheHuntStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHexThrillOfTheHuntStatusEffect) { return 0; }
