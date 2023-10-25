#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ESecondWindState.h"
#include "Templates/SubclassOf.h"
#include "SecondWind.generated.h"

class UStatusEffect;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USecondWind : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	ESecondWindState _currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _amountHealed;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _numberOfHealStateToHealToActivate;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _durationOfHeal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _brokenStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _applyBrokenEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _brokenStatusEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetNumberOfHealStateToHealToActivateAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetDurationOfHealAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnHealProgress(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USecondWind();
};

FORCEINLINE uint32 GetTypeHash(const USecondWind) { return 0; }
