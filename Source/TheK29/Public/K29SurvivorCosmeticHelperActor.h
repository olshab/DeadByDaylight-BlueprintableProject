#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "K29SurvivorCosmeticHelperActor.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable)
class AK29SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorGrabbed(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void OnOwnerLocallyObserved(bool locallyObserved);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnInfectionRemovalCollectableUsed(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void OnInfectionLevelsChanged(ACamperPlayer* targetSurvivor, bool isActive);

protected:
	UFUNCTION(BlueprintPure)
	bool IsInfectionIncubated() const;

	UFUNCTION(BlueprintPure)
	bool IsInfectionCritical() const;

	UFUNCTION(BlueprintPure)
	bool IsInfectionActive() const;

	UFUNCTION(BlueprintPure)
	bool IsInfected() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaximumInfectionLevels() const;

	UFUNCTION(BlueprintPure)
	float GetCurrentInfectionPercentage() const;

	UFUNCTION(BlueprintPure)
	int32 GetCurrentInfectionLevels() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOwningSurvivorHitCollisionWithRush();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOwningSurvivorDied();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLocallyObservedChanged();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInfectionRemovalCollectableUsed();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInfectionLevelsChanged(const bool isActive);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsInfectionIncubatedChanged(const bool isInfectionIncubated);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsInfectionCriticalChanged(const bool isInfectionCritical);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsInfectedChanged(const bool isInfected);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsInfectedActiveChanged(const bool isInfectionActive);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_GrabbedByKiller();

public:
	AK29SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK29SurvivorCosmeticHelperActor) { return 0; }
