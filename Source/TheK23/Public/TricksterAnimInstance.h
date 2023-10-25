#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "TricksterAnimInstance.generated.h"

class AThrowingKnives;

UCLASS(Blueprintable, NonTransient)
class UTricksterAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAiming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _isThrowInputPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isThrowingWithLeftArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isThrowingWithRightArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _throwPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _baseThrowDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _consecutiveKnivesThrownStacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeSinceLastKnifeLaunched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _currentAmmoCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInSuperMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _activationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInDeactivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _deactivationDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AThrowingKnives* _throwingKnives;

public:
	UTricksterAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTricksterAnimInstance) { return 0; }
