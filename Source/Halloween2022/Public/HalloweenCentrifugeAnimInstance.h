#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HalloweenCentrifugeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHalloweenCentrifugeAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _blendSpaceValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeToChangeBlendValue;

public:
	UFUNCTION(BlueprintCallable)
	void SetDesiredBlendValue(const float blendValue);

protected:
	UFUNCTION(BlueprintCallable)
	void OnEnergySpawned(int32 previousEnergy, int32 currentEnergy);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnBlendValueChanged(const float blendValue);

public:
	UHalloweenCentrifugeAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHalloweenCentrifugeAnimInstance) { return 0; }
