#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K32P02.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK32P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hinderedStatusEffectClass;

	UPROPERTY(EditAnywhere)
	float _perkRange;

	UPROPERTY(EditAnywhere)
	float _hinderedEffectDuration;

	UPROPERTY(EditAnywhere)
	float _perkCooldown;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkRangeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetPerkCooldownAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHinderedEffectDurationAtLevel() const;

public:
	UK32P02();
};

FORCEINLINE uint32 GetTypeHash(const UK32P02) { return 0; }
