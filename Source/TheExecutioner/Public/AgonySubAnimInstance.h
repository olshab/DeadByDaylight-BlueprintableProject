#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "AgonySubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAgonySubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInAgony;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInTormentTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInTormentTrailEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInDeathBed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDeadInDeathBed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInStruggleInDeathBed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInteractionAnimation _interactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingCarried;

public:
	UAgonySubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UAgonySubAnimInstance) { return 0; }
