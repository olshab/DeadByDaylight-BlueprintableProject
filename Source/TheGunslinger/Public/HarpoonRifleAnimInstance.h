#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HarpoonRifleAnimInstance.generated.h"

class ARifleChain;

UCLASS(Blueprintable, NonTransient)
class UHarpoonRifleAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ARifleChain* _chain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _chainUnwindingSpeed;

public:
	UHarpoonRifleAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonRifleAnimInstance) { return 0; }
