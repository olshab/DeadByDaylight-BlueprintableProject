#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "NoOneLeftBehind.generated.h"

class UStatusEffect;
class UGameplayModifierContainer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UNoOneLeftBehind : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementSpeedPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementSpeedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _modifyHealOtherSpeedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _modifyUnhookOtherSpeedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _movementSpeedEffect;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeedModifierValuePerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _alertKillerRevealEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetMovementSpeedPercentage() const;

	UFUNCTION(BlueprintPure)
	float GetMovementSpeedDuration() const;

	UFUNCTION(BlueprintPure)
	float GetActionSpeedModifierValueAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnExitGatePoweredApplicableChanged(UGameplayModifierContainer* container, bool active);

public:
	UNoOneLeftBehind();
};

FORCEINLINE uint32 GetTypeHash(const UNoOneLeftBehind) { return 0; }
