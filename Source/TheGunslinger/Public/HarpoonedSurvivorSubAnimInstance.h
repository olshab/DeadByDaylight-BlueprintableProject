#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "HarpoonedSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHarpoonedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _linkedMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeBeforeHarpoonHitReset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _hitHarpoonedEnterEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _chainBreakEnterEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isChainLinked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingReeled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasLinkInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _linkInputX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _linkInputY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _chainBreakTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _triggerHarpoonHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _harpoonHitTurnAnimNormalizedStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _harpoonHitAnimTurnRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _yaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _pitch;

public:
	UHarpoonedSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonedSurvivorSubAnimInstance) { return 0; }
