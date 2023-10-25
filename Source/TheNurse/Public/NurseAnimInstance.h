#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Templates/SubclassOf.h"
#include "NurseAnimInstance.generated.h"

class ASlasherPlayer;
class UAnimSequence;
class UAnimEffectHandler;

UCLASS(Blueprintable, NonTransient)
class UNurseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBlinkReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChargingBlink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFullyCharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _blinkSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChainBlinking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBlinking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _blinkPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _cooldownSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _cooldownPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChainBlinkAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isNurse;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAnimEffectHandler* _animEffectHandlerForSFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAnimEffectHandler* _animEffectHandlerForVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForSFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _mySlasher;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnBlinkTriggered();

public:
	UNurseAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UNurseAnimInstance) { return 0; }
