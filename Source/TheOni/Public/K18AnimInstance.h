#pragma once

#include "CoreMinimal.h"
#include "EOniAttackType.h"
#include "KillerAnimInstance.h"
#include "K18AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK18AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAbsorbing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDemonMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _absorbCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDashing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chargeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _powerAttackOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOniAttackType _attackType;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdatePowerAttackOpen();

public:
	UK18AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK18AnimInstance) { return 0; }
