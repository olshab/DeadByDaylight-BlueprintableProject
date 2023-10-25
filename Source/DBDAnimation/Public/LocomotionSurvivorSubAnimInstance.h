#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "LocomotionSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API ULocomotionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPlayerInPerkInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRecoveringWhileCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTenacityPerkActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _wasMovingResetTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _shouldPlayLowerCarryAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRunning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimPlayRateMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _wasLastDamageSourceDeepWounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isStrafing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingDeadHard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isUsingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _crawlingDirectionWhileMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _crawlMovingJustStopped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isImmobilized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawInterpolated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _allowLookAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDrasticAimOffsetYawChangeDetected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lookAtAlphaBlendMultiDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lookAtAlphaBlendMultiCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lookAtAlphaBlendMultiUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lookAtStandIdleAnimationLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawClampValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxParadiseWalkCycleOffSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minParadiseWalkPlayRateMultiplier;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _lowerCarryAnimationPresenceTags;

public:
	ULocomotionSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULocomotionSurvivorSubAnimInstance) { return 0; }
