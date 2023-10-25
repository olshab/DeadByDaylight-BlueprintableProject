#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K33AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK33AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isQuadruped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInSpecialMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTailAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTailAttackCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInTunnel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useQuadrupedIK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useBipedIK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useLookAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _usePushBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingHitByTurret;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _pushBackQuadrupedActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _pushBackBipedActive;

public:
	UK33AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33AnimInstance) { return 0; }
