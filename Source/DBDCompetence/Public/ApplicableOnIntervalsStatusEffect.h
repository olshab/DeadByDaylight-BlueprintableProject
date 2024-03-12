#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ApplicableOnIntervalsStatusEffect.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UApplicableOnIntervalsStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _startAsApplicable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _intervalTime;

public:
	UApplicableOnIntervalsStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UApplicableOnIntervalsStatusEffect) { return 0; }
