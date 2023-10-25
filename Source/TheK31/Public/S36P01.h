#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S36P01.generated.h"

class UStatusEffect;
class UActivatableExhaustedEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API US36P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize, meta=(AllowPrivateAccess=true))
	float _hasteEffectDurationSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hasteEffectMovementSpeedIncrease;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _activationDurationSeconds;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _exhaustedEffectDurationSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _hasteStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActivatableExhaustedEffect* _exhaustedStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UActivatableExhaustedEffect> _exhaustedEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteEffectMovementSpeedIncrease() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectDurationSeconds() const;

	UFUNCTION(BlueprintPure)
	float GetExhaustedEffectDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetActivationDurationAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving);

public:
	US36P01();
};

FORCEINLINE uint32 GetTypeHash(const US36P01) { return 0; }
