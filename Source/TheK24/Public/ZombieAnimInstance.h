#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "ZombieAnimInstance.generated.h"

class AZombieCharacter;

UCLASS(Blueprintable, NonTransient)
class UZombieAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chaseLocomotionPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chaseSequenceMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _chaseLocomotionIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _chaseLocomotionMaxIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange _chaseLocomotionIndexChangeTimerDurationRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isUsingFirstChaseLocomotionPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _attackIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxAttackIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPatrollingOrSearching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isStunned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpawning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AZombieCharacter* _zombieCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isFalling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isMale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _currentDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _currentRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rotationInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rotationInterpolationSpeedDuringChase;

public:
	UZombieAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UZombieAnimInstance) { return 0; }
