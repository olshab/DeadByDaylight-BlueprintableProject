#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "ETotemState.h"
#include "Templates/SubclassOf.h"
#include "K30P02.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK30_API UK30P02 : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _cursedPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _activeStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _screamEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _screamLoudNoiseDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _screamRevealAuraToKillerEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _screamRevealAuraToKillerDuration;

	UPROPERTY(EditAnywhere)
	float _screamInterval;

public:
	UFUNCTION(BlueprintPure)
	float GetScreamInterval() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_UncursePlayer();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTotemStateChanged(const ETotemState oldState, const ETotemState newState);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorFirstScream(ADBDPlayer* player);

public:
	UK30P02();
};

FORCEINLINE uint32 GetTypeHash(const UK30P02) { return 0; }
