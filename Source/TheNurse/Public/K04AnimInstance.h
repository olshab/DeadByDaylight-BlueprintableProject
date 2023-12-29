#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K04AnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UK04AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFullyCharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _blinkPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _cooldownPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBlinking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBlinkReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChargingBlink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChainBlinking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInterrupting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _blinkSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _cooldownSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChainBlinkAttacking;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnBlinkTriggered();

public:
	UK04AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK04AnimInstance) { return 0; }
