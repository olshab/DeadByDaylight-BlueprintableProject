#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAnimInstance.h"
#include "TunableStat.h"
#include "K26AbilitySubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class THEK26_API UK26AbilitySubAnimInstance : public UBaseKillerAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _fireInteractionCooldownTime;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _fireInteractionCooldownTimeTunable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasChargingStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasProjectileBeenSummoned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasChargingEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasProjectileFired;

public:
	UFUNCTION(BlueprintCallable)
	void OnHasProjectileFired();

	UFUNCTION(BlueprintCallable)
	void OnHasProjectileBeenSummoned(const int32 remainingAmmo, const int32 maxAmmo);

	UFUNCTION(BlueprintCallable)
	void ConsumeHasProjectileFired();

	UFUNCTION(BlueprintCallable)
	void ConsumeHasProjectileBeenSummoned();

public:
	UK26AbilitySubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK26AbilitySubAnimInstance) { return 0; }
