#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "ContaminationSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UContaminationSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isContaminated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjectingSerumSelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjectingSerumOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingInjectedWithSerum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingHealed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isFirstContaminationHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _triggerCough;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _timeBetweenCough;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInsideCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isFrightScreaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingSmallItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingHandleItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInteractionAnimation _interactionType;

public:
	UContaminationSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UContaminationSubAnimInstance) { return 0; }
