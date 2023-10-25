#pragma once

#include "CoreMinimal.h"
#include "BaseNursePerk.h"
#include "ThanatophobiaPerk.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UThanatophobiaPerk : public UBaseNursePerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _actionSpeedModifier;

	UPROPERTY(EditAnywhere)
	float _additionalActionSpeedModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _numSurvivorsForAdditionalSpeedModifier;

public:
	UFUNCTION(BlueprintPure)
	int32 GetNumSurvivorsForAdditionalSpeedModifier() const;

	UFUNCTION(BlueprintPure)
	float GetAdditionalActionSpeedModifierAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetActionSpeedModifierAtLevel() const;

public:
	UThanatophobiaPerk();
};

FORCEINLINE uint32 GetTypeHash(const UThanatophobiaPerk) { return 0; }
