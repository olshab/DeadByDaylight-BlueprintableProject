#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LookAtKillerSubAnimInstance.generated.h"

class ADBDPlayer;
class ASlasherPlayer;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API ULookAtKillerSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _owningPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _enableDynamics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _dynamicsAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldApplyDynamics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _blendTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _enableTurnInPlace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldResetLookAtOnAnyMontagePlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldTurnLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldTurnRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _turnInPlaceThresholdAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _idleNeutralRotationYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _skeletalMeshComponent;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsLookAtAllowed() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetBlendDuration() const;

public:
	ULookAtKillerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULookAtKillerSubAnimInstance) { return 0; }
