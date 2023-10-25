#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "EGuidedState.h"
#include "SicknessSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class USicknessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _vomitingEnteredStatEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _hitByVomitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isSick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isVomiting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasRecentlyBeenHitByVomit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isOpeningExitGate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isFrightScreaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EGuidedState _guidedAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInteractionAnimation _interactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInsideCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingHandleItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingFlashbang;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingFirecracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingSmallItem;

public:
	USicknessSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USicknessSurvivorSubAnimInstance) { return 0; }
