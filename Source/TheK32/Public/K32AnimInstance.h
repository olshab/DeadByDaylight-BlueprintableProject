#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K32AnimInstance.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, NonTransient)
class UK32AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAimingPodPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isShootingPod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInOverclockMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTeleporting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isControllingPod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTeleportingFromKillerPovWithInAntiCamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chargeKillerProjectileSpawnPercent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _overclockStatusEffectClass;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetIsShootingPod();

private:
	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK32AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK32AnimInstance) { return 0; }
