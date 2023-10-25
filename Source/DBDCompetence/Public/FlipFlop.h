#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FlipFlop.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UFlipFlop : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _recoveryProgressionConversionRatio;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _maxWiggleProgression;

public:
	UFUNCTION(BlueprintPure)
	float GetRecoveryProgressionAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetMaxWiggleProgressionAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnPickedUp(ADBDPlayer* picker);

public:
	UFlipFlop();
};

FORCEINLINE uint32 GetTypeHash(const UFlipFlop) { return 0; }
