#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "K26CrowAttachmentSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK26CrowAttachmentSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasCrowAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRemovingCrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInsideCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingSmallItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

public:
	UK26CrowAttachmentSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK26CrowAttachmentSubAnimInstance) { return 0; }
