#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "UObject/NoExportTypes.h"
#include "K32SurvivorCosmeticHelperActor.generated.h"

UCLASS(Blueprintable)
class AK32SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _noseJointName;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnSurvivorDisguisedOrUndisguised(bool isDisguised);

private:
	UFUNCTION()
	void OnKillerNoLongerLocksOnToSurvivor(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnKillerLocksOnToSurvivor(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintCallable)
	FVector GetNoseLocation();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportStart(const FVector& teleportStartLocation, const FVector& teleportEndLocation);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerNoLongerLocksOnToSurvivor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerLocksOnToSurvivor(const bool isTargetAssimilated);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsEffectiveEmpInRangeChanged(const bool isEffectiveEmpInRange);

public:
	AK32SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK32SurvivorCosmeticHelperActor) { return 0; }
