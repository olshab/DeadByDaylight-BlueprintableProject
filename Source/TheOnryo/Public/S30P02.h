#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S30P02.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US30P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _auraReadingDistance;

	UPROPERTY(EditAnywhere)
	float _healingOthersBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealAuraStatusEffectToImpose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _showHUDIconStatusEffectToImpose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _imposedShowHUDIconStatusEffects;

private:
	UFUNCTION(BlueprintPure)
	float GetHealingOthersBonus() const;

public:
	US30P02();
};

FORCEINLINE uint32 GetTypeHash(const US30P02) { return 0; }
