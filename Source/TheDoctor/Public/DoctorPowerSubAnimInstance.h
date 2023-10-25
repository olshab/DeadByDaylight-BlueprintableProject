#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EDoctorAbilityType.h"
#include "EDoctorAbilityPhase.h"
#include "DoctorPowerSubAnimInstance.generated.h"

class UDoctorPowerAnimStateComponent;

UCLASS(Blueprintable, NonTransient)
class UDoctorPowerSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EDoctorAbilityType _abilityType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EDoctorAbilityPhase _abilityPhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isShockTherapyInCooldown;

	UPROPERTY(EditAnywhere, Transient, meta=(BindWidget))
	TWeakObjectPtr<UDoctorPowerAnimStateComponent> _powerStateComponent;

protected:
	UFUNCTION(BlueprintCallable)
	void OnShockTherapyAnimationAttackStop();

	UFUNCTION(BlueprintCallable)
	void OnShockTherapyAnimationAttackStart();

public:
	UDoctorPowerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDoctorPowerSubAnimInstance) { return 0; }
