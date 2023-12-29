#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HalloweenHauntAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHalloweenHauntAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hauntChangingVoidEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hauntTrapTriggered;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeUntilAbsorbAnimationEnds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeUntilTrapAnimationEnds;

private:
	UFUNCTION(BlueprintCallable)
	void VoidEnergyChange();

	UFUNCTION(BlueprintCallable)
	void TrapAnimationEnd();

	UFUNCTION(BlueprintCallable)
	void PlayerTriggeredTrap();

	UFUNCTION(BlueprintCallable)
	void EndVoidEnergyChange();

public:
	UHalloweenHauntAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHalloweenHauntAnimInstance) { return 0; }
