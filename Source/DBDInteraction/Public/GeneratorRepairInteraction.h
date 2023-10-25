#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "ESkillCheckCustomType.h"
#include "GeneratorRepairInteraction.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UGeneratorRepairInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	FDBDTunableRowHandle _penaltyPerRepairPlayerCount;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsObstructed(bool obstructed);

	UFUNCTION(BlueprintPure)
	bool IsObstructed() const;

	UFUNCTION(BlueprintPure)
	bool IsInteractionPossibleInternal(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsBeingRepaired() const;

protected:
	UFUNCTION(BlueprintPure)
	AGenerator* GetOwningGenerator() const;

public:
	UFUNCTION(BlueprintPure)
	float GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, ESkillCheckCustomType type);

public:
	UGeneratorRepairInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorRepairInteraction) { return 0; }
