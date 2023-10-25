#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "KillerAnimInstance.h"
#include "GunslingerAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UGunslingerAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAiming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAimingWarmup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAimingCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAimingReadyToShoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInMissShotCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInSuccessShot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isLinked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isReeling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInGunState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _idleToAimAnimPlayrate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimToIdleAnimPlayrate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _fireAnimPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _missShotCooldownAnimPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _successShotAnimPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _idleToAimAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _aimToIdleAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _fireAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _missShotCooldownAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _successShotAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _idleToAimAnimDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _aimToIdleAnimDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _fireAnimDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _missShotCooldownAnimDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _successShotAnimDuration;

public:
	UGunslingerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGunslingerAnimInstance) { return 0; }
