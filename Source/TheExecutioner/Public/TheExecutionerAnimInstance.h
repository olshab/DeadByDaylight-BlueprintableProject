#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "TheExecutionerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTheExecutionerAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInTormentMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isChargingTormentMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isTormentModeAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _tormentModeVerticalInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _tormentModeHorizontalInput;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void NoInputFeedbackCosmetic();

public:
	UTheExecutionerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTheExecutionerAnimInstance) { return 0; }
