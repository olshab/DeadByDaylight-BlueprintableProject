#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K29SurvivorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK29SurvivorAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingGrabbed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingThrown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isKillerLocallyControlled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingInfectionRemoverOnSelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingInfectionRemoverOnOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInfectionRemoverUsedOnSelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasLastThrowResultedInDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInfectionActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasBeenThrown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCoughing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _timeBetweenRandomCoughingTry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _randomCoughMinProbabilityRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _randomCoughMaxProbabilityRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _randomCoughProbabilityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInsideCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingHealed;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetHasBeenThrown();

private:
	UFUNCTION(BlueprintCallable)
	void OnHasBeenThrown();

	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK29SurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK29SurvivorAnimInstance) { return 0; }
