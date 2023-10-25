#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "ResetBearTrapInteraction.generated.h"

class UAnimSequence;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UResetBearTrapInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _enterMontageIDForBeartrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _udpateMontageIDForBeartrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _updateSequenceForBeartrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _exitMontageForIDBeartrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _cancelExitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _hasteEffectMovementSpeedIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _hasteEffectDurationSeconds;

public:
	UResetBearTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UResetBearTrapInteraction) { return 0; }
