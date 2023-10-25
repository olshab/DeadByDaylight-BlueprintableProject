#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FastTimer.h"
#include "K27P02.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK27P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _activePerkDuration;

	UPROPERTY(EditAnywhere)
	float _regressionModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AGenerator*, FFastTimer> _authority_affectedGeneratorsAndActiveTimers;

	UPROPERTY(EditAnywhere, Transient)
	TMap<AGenerator*, uint64> _gameplayModifierHandles;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ShowBubbleNotification(AGenerator* triggeringGenerator);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AddGeneratorAura(AGenerator* generator);

public:
	UFUNCTION(BlueprintPure)
	float GetRegressionModifierAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimeAtLevel() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowBubbleNotification(const AGenerator* triggeringGenerator);

public:
	UK27P02();
};

FORCEINLINE uint32 GetTypeHash(const UK27P02) { return 0; }
