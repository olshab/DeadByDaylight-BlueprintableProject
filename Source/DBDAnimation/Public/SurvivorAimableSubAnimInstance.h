#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "SurvivorAimableSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API USurvivorAimableSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _pitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHoldingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isAiming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _isAimingAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _aimPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _shoulderToCollisionDistance;

public:
	USurvivorAimableSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAimableSubAnimInstance) { return 0; }
