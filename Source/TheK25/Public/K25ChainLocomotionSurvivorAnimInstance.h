#pragma once

#include "CoreMinimal.h"
#include "EK25ChainAnchorPointDirection.h"
#include "AnimLayerUpdateInterface.h"
#include "EK25ChainDetachmentReason.h"
#include "BaseSurvivorAnimInstance.h"
#include "K25ChainAnchorAnimationData.h"
#include "K25ChainLocomotionSurvivorAnimInstance.generated.h"

class AK25Chain;
class AK25SurvivorChainAttachmentAnchor;

UCLASS(Blueprintable, NonTransient)
class UK25ChainLocomotionSurvivorAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasChainsAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isPerformingBreakChainInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _forwardDirectionDotProductResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _lateralDirectionDotProductResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AK25Chain* _currentChainBeingDetached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FK25ChainAnchorAnimationData _leftHandAttachmentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FK25ChainAnchorAnimationData _rightHandAttachmentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FK25ChainAnchorAnimationData _leftShoulderAttachmentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FK25ChainAnchorAnimationData _rightShoulderAttachmentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FK25ChainAnchorAnimationData _stomachAttachmentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FK25ChainAnchorAnimationData _backAttachmentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EK25ChainAnchorPointDirection _chainDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasBrokenFreeFromChain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _hasBrokenFreeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasBeenHitByChain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _IsCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isMale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _hasBeenHitByChainTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName _hitChainName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName _detachedChainAnchorName;

protected:
	UFUNCTION(BlueprintCallable)
	void OnChainDetached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, EK25ChainDetachmentReason detachmentReason);

	UFUNCTION(BlueprintCallable)
	void OnChainAttached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);

public:
	UK25ChainLocomotionSurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainLocomotionSurvivorAnimInstance) { return 0; }
