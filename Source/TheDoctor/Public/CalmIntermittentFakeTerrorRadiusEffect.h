#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "CalmIntermittentFakeTerrorRadiusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCalmIntermittentFakeTerrorRadiusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fakeTerrorRadiusDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fakeTerrorRadiusIntermittenceMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fakeTerrorRadiusIntermittenceMax;

public:
	UCalmIntermittentFakeTerrorRadiusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UCalmIntermittentFakeTerrorRadiusEffect) { return 0; }
