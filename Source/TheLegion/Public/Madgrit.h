#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Madgrit.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UMadgrit : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _slashHittingSpeedCurve;

public:
	UMadgrit();
};

FORCEINLINE uint32 GetTypeHash(const UMadgrit) { return 0; }
