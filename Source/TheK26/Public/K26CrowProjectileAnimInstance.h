#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "K26CrowProjectileAnimInstance.generated.h"

class AK26CrowProjectile;

UCLASS(Blueprintable, NonTransient)
class THEK26_API UK26CrowProjectileAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInInvalidState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInSummonState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInIdleState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInFollowPathState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInOffPathState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInDestroyedState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingFlashlighted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _flashlightProgress;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK26CrowProjectile* _owningCrowProjectile;

public:
	UK26CrowProjectileAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK26CrowProjectileAnimInstance) { return 0; }
