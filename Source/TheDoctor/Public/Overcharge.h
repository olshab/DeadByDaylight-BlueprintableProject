#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FastTimer.h"
#include "Overcharge.generated.h"

class UCurveFloat;
class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOvercharge : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _skillCheckFailurePenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _regressionRateMultiplierCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AGenerator*, FFastTimer> _overchargedGeneratorTimers;

	UPROPERTY(EditAnywhere, Transient)
	TMap<AGenerator*, uint64> _gameplayModifierHandles;

public:
	UFUNCTION(BlueprintPure)
	float GetSkillCheckFailurePenaltyAtLevel() const;

	UFUNCTION(BlueprintPure)
	UCurveFloat* GetRegressionRateMultiplierCurve() const;

public:
	UOvercharge();
};

FORCEINLINE uint32 GetTypeHash(const UOvercharge) { return 0; }
