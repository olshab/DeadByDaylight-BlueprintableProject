#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PounceAttackOpenSubstateCosmetic.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class UPounceAttackOpenSubstateCosmetic : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLungeAttackStartCosmetic(ADBDPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLungeAttackEndCosmetic(ADBDPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLocallyObservedChangedCosmetic(ADBDPlayer* killer);

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged(ADBDPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	bool IsLungeAttackAugmented(ADBDPlayer* killer) const;

public:
	UPounceAttackOpenSubstateCosmetic();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackOpenSubstateCosmetic) { return 0; }
