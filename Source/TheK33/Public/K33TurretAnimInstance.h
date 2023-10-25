#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "K33TurretAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK33TurretAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInsideControlStation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCarryable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttachedToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingDeployed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDeployCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDeployed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingUndeployed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isUndeployCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOverheated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingRepaired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _isFiringAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isMalfunctioning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _frontLegPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _backLegsPitch;

public:
	UK33TurretAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretAnimInstance) { return 0; }
