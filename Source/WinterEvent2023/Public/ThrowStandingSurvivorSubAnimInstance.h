#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "ThrowStandingSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WINTEREVENT2023_API UThrowStandingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isThrowing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _pitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _yaw;

public:
	UThrowStandingSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UThrowStandingSurvivorSubAnimInstance) { return 0; }
