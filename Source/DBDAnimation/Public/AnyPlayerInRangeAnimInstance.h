#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnyPlayerInRangeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UAnyPlayerInRangeAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAnyPlayerInNearbyRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _nearbyRangeCm;

public:
	UAnyPlayerInRangeAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UAnyPlayerInRangeAnimInstance) { return 0; }
