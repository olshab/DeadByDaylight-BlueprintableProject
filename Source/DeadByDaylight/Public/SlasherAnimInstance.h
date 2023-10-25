#pragma once

#include "CoreMinimal.h"
#include "EOniAttackType.h"
#include "TagStateBool.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EIntroState.h"
#include "EAttackSubstate.h"
#include "OnDynamicEvent.h"
#include "EInteractionAnimation.h"
#include "Templates/SubclassOf.h"
#include "SlasherAnimInstance.generated.h"

class UArmIKSensorComponent;
class ASlasherPlayer;
class UAnimMontage;
class UChargedAttackStateComponent;
class UAnimEffectHandler;
class UEvilWithinComponent;
class UOniDemonModeAttackStateComponent;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API USlasherAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnDynamicEvent OnFootTrapped;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EIntroState _introState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRevvingChainsaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttackSuccessMontagePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCamOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAnyMontagePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFrenzy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFrenzyCD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInParadise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _enableArmOverrideTier3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRingingBell;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCarrying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _firstPersonCarryOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _firstPersonCarryOffsetLookingDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPassivePhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActivePhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isVaultingToFall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpectator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _firstPersonView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _validSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animTurning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _idleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _directionSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftClearFrontSpaceVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightClearFrontSpaceVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightFootEffectorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftFootEffectorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _meshRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimMontage*> _attackSuccessAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimMontage*> _camOnAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASlasherPlayer* _mySlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTagStateBool _isVaultingToFallState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionAnimation _interactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _demogorgonTeleportDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UChargedAttackStateComponent* _demogorgonChargedAttackStateComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDemogorgonCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _demogorgonChargingPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UOniDemonModeAttackStateComponent* _oniAttackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOniCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOniAttackType _oniAttackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _oniChargeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate _previousAttackSubstate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate _attackSubstate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UEvilWithinComponent* _evilWithinComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UArmIKSensorComponent* _armIKSensorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimEffectHandler* _animEffectHandlerForSFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimEffectHandler* _animEffectHandlerForVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForSFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForVFX;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsCrouched(const bool value);

protected:
	UFUNCTION(BlueprintCallable)
	void CallOnFootTrapped();

public:
	USlasherAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USlasherAnimInstance) { return 0; }
