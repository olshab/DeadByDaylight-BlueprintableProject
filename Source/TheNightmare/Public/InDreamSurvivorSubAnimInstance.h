#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "InDreamSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _shouldLookSleepy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimSpeed;

public:
	UInDreamSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UInDreamSurvivorSubAnimInstance) { return 0; }
