#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Spring2024StatusEffect.h"
#include "Spring2024SurvivorStatusEffect.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class USpring2024SurvivorStatusEffect : public USpring2024StatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _injuredVoiceLevelModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodDecalDurationModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _crouchedInjuredVoiceLevelModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _crouchedBloodDecalDurationModifier;

protected:
	UFUNCTION(BlueprintPure)
	FDBDTunableRowHandle GetInjuredVoiceLevelModifier();

	UFUNCTION(BlueprintPure)
	FDBDTunableRowHandle GetBloodDecalDurationModifier();

public:
	USpring2024SurvivorStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const USpring2024SurvivorStatusEffect) { return 0; }
