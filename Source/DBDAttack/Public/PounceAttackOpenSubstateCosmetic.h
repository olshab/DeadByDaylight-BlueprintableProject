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
	void OnLungeAttackStartCosmetic(ADBDPlayer* slasherPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLungeAttackEndCosmetic(ADBDPlayer* slasherPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLocallyObservedChangedCosmetic(ADBDPlayer* slasherPlayer);

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged(ADBDPlayer* slasherPlayer);

public:
	UFUNCTION(BlueprintPure)
	bool IsLungeAttackAugmented(ADBDPlayer* slasherPlayer) const;

public:
	UPounceAttackOpenSubstateCosmetic();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackOpenSubstateCosmetic) { return 0; }
