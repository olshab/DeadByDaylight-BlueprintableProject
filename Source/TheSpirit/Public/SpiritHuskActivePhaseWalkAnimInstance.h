#pragma once

#include "CoreMinimal.h"
#include "SpiritHuskAnimInstance.h"
#include "SpiritHuskActivePhaseWalkAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class USpiritHuskActivePhaseWalkAnimInstance : public USpiritHuskAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _elapsedTimeSinceFakingRealKillerPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _idleAnimationExplicitTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAnimSequence* _idleAnimationSequence;

public:
	USpiritHuskActivePhaseWalkAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USpiritHuskActivePhaseWalkAnimInstance) { return 0; }
