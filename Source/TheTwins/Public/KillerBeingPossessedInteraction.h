#pragma once

#include "CoreMinimal.h"
#include "BeingPossessedInteraction.h"
#include "KillerBeingPossessedInteraction.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKillerBeingPossessedInteraction : public UBeingPossessedInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _wakeUpSpeedCurve;

public:
	UKillerBeingPossessedInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UKillerBeingPossessedInteraction) { return 0; }
