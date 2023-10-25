#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "EInteractionAnimation.h"
#include "UObject/NoExportTypes.h"
#include "InteractionSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UInteractionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isAgainstSmallKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInsideCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isSacrificeStruggling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _sacrificeStrugglePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _selfUnhookFailed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInteractionAnimation _interactionAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _snapPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteractingWithSwitch;

public:
	UInteractionSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionSurvivorSubAnimInstance) { return 0; }
