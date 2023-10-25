#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K31P03.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _healPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _reduceHealingSpeedEffectSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _reduceHealingSpeedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _survivorDebuffs;

public:
	UFUNCTION(BlueprintPure)
	float GetReduceHealingSpeedEffectSeconds() const;

	UFUNCTION(BlueprintPure)
	float GetHealPenaltyAtLevel() const;

public:
	UK31P03();
};

FORCEINLINE uint32 GetTypeHash(const UK31P03) { return 0; }
