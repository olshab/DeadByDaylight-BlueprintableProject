#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S37P02.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US37P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _enduranceStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffect;

	UPROPERTY(EditAnywhere)
	float _enduranceEffectTimer;

	UPROPERTY(EditAnywhere)
	float _hasteSpeedAmount;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteSpeedAmountAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetEnduranceEffectTimerAtLevel() const;

public:
	US37P02();
};

FORCEINLINE uint32 GetTypeHash(const US37P02) { return 0; }
