#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EAttackSubstate.h"
#include "K24PowerAnimInstance.generated.h"

class UAnimSequence;
class ASlasherPlayer;
class AK24Power;

UCLASS(Blueprintable, NonTransient)
class UK24PowerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInPowerMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isChargingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isK24PowerAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRequestingPowerAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _tentacleLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isFirstPersonView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EAttackSubstate _attackSubState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIntroCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isLevelReadyToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 _powerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _forwardVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lateralVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isKilling;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _swingIdleTPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _wipeIdleTPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _missIdleTPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _bowIdleTPVSequences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimSequence* _swingIdleTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimSequence* _wipeIdleTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimSequence* _missIdleTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimSequence* _bowIdleTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _swingLocoTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _wipeLocoTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _missLocoTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _bowLocoTPVSequence;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _swingFPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _wipeFPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _missFPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _bowFPVSequences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimSequence* _swingFPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimSequence* _wipeFPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimSequence* _missFPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimSequence* _bowFPVSequence;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK24Power* _k24Power;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnKillerPowerLevelChanged(int32 powerLevel);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	UK24PowerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK24PowerAnimInstance) { return 0; }
