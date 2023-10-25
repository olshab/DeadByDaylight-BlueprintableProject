#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K29AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK29AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRushing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isChargingRushing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBetweenRushes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isThrowing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBouncingBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasStartedFinalRush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasRushEndedInSurvivorImpact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasRushEndedInLedgeDrop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasInstantlyPickedUpSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isReadyToRushButHasNoPath;

public:
	UFUNCTION(BlueprintCallable)
	void ResetStartThrowingSurvivor();

	UFUNCTION(BlueprintCallable)
	void ResetHasRushEndedInSurvivorImpact();

	UFUNCTION(BlueprintCallable)
	void ResetHasRushEndedInLedgeDrop();

	UFUNCTION(BlueprintCallable)
	void ResetHasInstantlyPickedUpSurvivor();

private:
	UFUNCTION(BlueprintCallable)
	void OnStartThrowingSurvivor();

	UFUNCTION(BlueprintCallable)
	void OnHasRushEndedInSurvivorImpact();

	UFUNCTION(BlueprintCallable)
	void OnHasRushEndedInLedgeDrop();

	UFUNCTION(BlueprintCallable)
	void OnHasInstantlyPickedUpSurvivor();

	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK29AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK29AnimInstance) { return 0; }
