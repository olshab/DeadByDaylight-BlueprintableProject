#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "K31SurvivorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK31SurvivorAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasBeenSpottedByDrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInsideAnActiveDroneZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isClawTrapped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRemovingClawTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHackingDrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimSpeed;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingCarried;

public:
	UK31SurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31SurvivorAnimInstance) { return 0; }
