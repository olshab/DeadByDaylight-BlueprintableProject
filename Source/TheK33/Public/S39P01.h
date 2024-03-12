#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S39P01.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US39P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _bloodAndGruntSuppressionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorAuraRevealTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _generatorAuraRevealTime;

	UPROPERTY(EditAnywhere)
	float _perkCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _suppressBloodAndGruntsEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealSurvivorAurasEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetSurvivorAuraRevealTime() const;

	UFUNCTION(BlueprintPure)
	float GetPerkCooldownTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorAuraRevealTime() const;

	UFUNCTION(BlueprintPure)
	float GetBloodAndGruntSuppressionTimeAtLevel() const;

public:
	US39P01();
};

FORCEINLINE uint32 GetTypeHash(const US39P01) { return 0; }
