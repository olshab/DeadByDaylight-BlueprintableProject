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
	bool _canSelfHeal;

	UPROPERTY(EditAnywhere)
	float _selfHealSpeedPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _healingSpeedIncreaseEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _allowSelfHealEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _selfHealSpeedPenaltyEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealInjuredPlayersInBoonRangeEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetSelfHealSpeedPenaltyAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHealingSpeedGainPercentageAtLevel() const;

	UFUNCTION(BlueprintPure)
	bool CanSelfHeal() const;

public:
	US28P02();
};

FORCEINLINE uint32 GetTypeHash(const US28P02) { return 0; }
