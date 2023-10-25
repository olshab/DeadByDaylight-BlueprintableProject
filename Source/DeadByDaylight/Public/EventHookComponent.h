#pragma once

#include "CoreMinimal.h"
#include "EventObjectComponent.h"
#include "GameplayTagContainer.h"
#include "EOfferingEffectType.h"
#include "EventHookComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventHookComponent : public UEventObjectComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _hookedOnEventHookScoreEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _hookedOnEventHookNoOfferingScoreEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EOfferingEffectType _offeringEffectTypeNeeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _rewardScoreOnFirstHookOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _updateOutlineForSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _updateOutlineForSlasher;

public:
	UFUNCTION(BlueprintCallable)
	void SetOutlineCarryingColorToDefault();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_FireHookedScoreEvent(ADBDPlayer* hookedPlayer);

public:
	UEventHookComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventHookComponent) { return 0; }
