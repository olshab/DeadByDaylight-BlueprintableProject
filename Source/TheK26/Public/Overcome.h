#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Overcome.generated.h"

class UActivatableExhaustedEffect;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOvercome : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _exhaustionDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _injuredModifiedMovementSpeedBurstDurationWindow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UActivatableExhaustedEffect> _exhaustedEffectToImpose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _injuredModifiedMovementSpeedBurstStatusEffectToImpose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActivatableExhaustedEffect* _exhaustedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _injuredModifiedMovementSpeedBurstStatusEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetExhaustionDurationAtLevel() const;

public:
	UOvercome();
};

FORCEINLINE uint32 GetTypeHash(const UOvercome) { return 0; }
