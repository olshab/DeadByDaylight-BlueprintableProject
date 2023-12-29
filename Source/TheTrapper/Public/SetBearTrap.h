#pragma once

#include "CoreMinimal.h"
#include "SetTrapInteraction.h"
#include "Templates/SubclassOf.h"
#include "SetBearTrap.generated.h"

class UAnimSequence;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USetBearTrap : public USetTrapInteraction
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
	UFUNCTION(BlueprintPure)
	float GetHasteEffectMovementSpeedIncrease() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectDurationSeconds() const;

public:
	USetBearTrap();
};

FORCEINLINE uint32 GetTypeHash(const USetBearTrap) { return 0; }
