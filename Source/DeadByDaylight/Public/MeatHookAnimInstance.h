#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MeatHookAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API UMeatHookAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBroken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Yaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSurvivorStruggling;

public:
	UMeatHookAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMeatHookAnimInstance) { return 0; }
