#pragma once

#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "GuardAnimInstance.generated.h"

class AKnightGuard;

UCLASS(Blueprintable, NonTransient)
class UGuardAnimInstance : public UPlayerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AKnightGuard* _owningGuard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _forwardVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _lateralVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _animSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _animDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isPatrolling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isPatrollingForward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHunting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isTeleporting;

public:
	UGuardAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGuardAnimInstance) { return 0; }
