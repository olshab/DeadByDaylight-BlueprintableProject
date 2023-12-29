#pragma once

#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "Templates/SubclassOf.h"
#include "S28P02.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US28P02 : public UBoonPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _healingSpeedGainPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _healingSpeedIncreaseEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealInjuredPlayersInBoonRangeEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetHealingSpeedGainPercentageAtLevel() const;

public:
	US28P02();
};

FORCEINLINE uint32 GetTypeHash(const US28P02) { return 0; }
