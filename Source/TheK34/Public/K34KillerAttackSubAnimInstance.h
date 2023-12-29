#pragma once

#include "CoreMinimal.h"
#include "KillerAttackSubAnimInstance.h"
#include "EAttackSubstate.h"
#include "UObject/NoExportTypes.h"
#include "K34KillerAttackSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK34KillerAttackSubAnimInstance : public UKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldTriggerSpecialAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDodson;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EAttackSubstate _anticipatedAttackSubStateAfterHitting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _targetWorldLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _targetDistanceHorizontal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _percentOfJumpDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxJumpDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _specialAnimationTriggerChance;

public:
	UK34KillerAttackSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK34KillerAttackSubAnimInstance) { return 0; }
