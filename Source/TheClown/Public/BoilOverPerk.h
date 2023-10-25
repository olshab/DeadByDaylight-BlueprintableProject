#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "Perk.h"
#include "StatusEffectSpawnData.h"
#include "BoilOverPerk.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBoilOverPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FStatusEffectSpawnData> _effectsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPlayerStatusEffectSpawnerHelper _spawnerHelper;

	UPROPERTY(EditAnywhere)
	float _additionnalWigglingProgressWhenFalling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _greatHeightsValue;

public:
	UFUNCTION(BlueprintPure)
	float GetGreatHeightsValue() const;

	UFUNCTION(BlueprintPure)
	float GetAdditionnalWigglingProgressAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnWiggleEnd();

	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker);

public:
	UBoilOverPerk();
};

FORCEINLINE uint32 GetTypeHash(const UBoilOverPerk) { return 0; }
