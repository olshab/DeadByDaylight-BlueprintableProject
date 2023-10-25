#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ESkillCheckCustomType.h"
#include "Solidarity.generated.h"

class ADBDPlayer;
class UChargeableComponent;
class AActor;
class UChargeableInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USolidarity : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _allowMedkit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _healerHPSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _targetHPSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableInteractionDefinition* _healOtherInteraction;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSkillCheckResponse(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);

	UFUNCTION(BlueprintCallable)
	void Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	USolidarity();
};

FORCEINLINE uint32 GetTypeHash(const USolidarity) { return 0; }
