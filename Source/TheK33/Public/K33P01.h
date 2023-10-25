#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "K33P01.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _perkActivationTime;

	UPROPERTY(EditAnywhere)
	float _perkCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _blindedStatusEffect;

	UPROPERTY(EditAnywhere)
	float _blindedEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _activatedSurvivors;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RevealAndMakeSurvivorScream(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ACamperPlayer* survivorPlayer);

private:
	UFUNCTION()
	void Authority_OnHealthStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK33P01();
};

FORCEINLINE uint32 GetTypeHash(const UK33P01) { return 0; }
