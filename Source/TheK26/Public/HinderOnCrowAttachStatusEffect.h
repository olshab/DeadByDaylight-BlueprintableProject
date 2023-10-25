#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "TunableStat.h"
#include "GameplayTagContainer.h"
#include "HinderOnCrowAttachStatusEffect.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHinderOnCrowAttachStatusEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _onCrowAttachStateTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _hinderOnIdleLingerTime;

public:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UHinderOnCrowAttachStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHinderOnCrowAttachStatusEffect) { return 0; }
