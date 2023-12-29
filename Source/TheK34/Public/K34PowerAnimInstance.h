#pragma once

#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "DBDBaseAnimInstance.h"
#include "K34PowerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK34PowerAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInTipToeMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChargingScamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isScampering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChainScampering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _forwardVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lateralVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate _attackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldTriggerLookBackAnimation;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minTimeToStartLookBackAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxTimeToStartLookBackAnimation;

public:
	UK34PowerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK34PowerAnimInstance) { return 0; }
