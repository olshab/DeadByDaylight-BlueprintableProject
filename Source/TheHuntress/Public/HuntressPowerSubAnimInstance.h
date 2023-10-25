#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HuntressPowerSubAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UHuntressPowerSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _powerIsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _powerIsReleased;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _powerIsCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _powerIsInCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _aimingPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _launchPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _cancelPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _cooldownPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _aimingAnimationSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _launchAnimationSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _cancelAnimationSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _cooldownAnimationSequence;

public:
	UHuntressPowerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHuntressPowerSubAnimInstance) { return 0; }
