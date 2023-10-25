#pragma once

#include "CoreMinimal.h"
#include "DynamicAccessoryAnimInstance.h"
#include "K32AssimilationAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK32AssimilationAnimInstance : public UDynamicAccessoryAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isMale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingMoried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDeadOrInParadise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRunning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRetrievingItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isHealing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingMended;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingHealed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCleansingTotem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerUsingGesture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerEscapingWithHatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInteractingWithLocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInteractingWithChest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAssimilated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDestroyedByEmp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDestroyedByHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDestroyedByTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerCrouching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerKO;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerInCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerExitingLocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerBeingCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerVaulting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerBeingPulledFromCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingLookedAtByKillerPod;

public:
	UFUNCTION(BlueprintCallable)
	void ResetIsDestroyedByHook();

	UFUNCTION(BlueprintCallable)
	void ResetIsDestroyedByEmp();

public:
	UK32AssimilationAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK32AssimilationAnimInstance) { return 0; }
