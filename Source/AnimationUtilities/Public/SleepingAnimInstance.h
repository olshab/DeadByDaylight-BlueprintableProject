#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SleepingAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class ANIMATIONUTILITIES_API USleepingAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Wakeup();

	UFUNCTION(BlueprintCallable)
	void SetNeverIdle(bool neverIdle);

	UFUNCTION(BlueprintCallable)
	void OnMontageStart(UAnimMontage* montage);

public:
	USleepingAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USleepingAnimInstance) { return 0; }
