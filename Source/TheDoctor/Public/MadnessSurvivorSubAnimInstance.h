#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "MadnessSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMadnessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isTotallyInsane;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDead;

public:
	UMadnessSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMadnessSurvivorSubAnimInstance) { return 0; }
