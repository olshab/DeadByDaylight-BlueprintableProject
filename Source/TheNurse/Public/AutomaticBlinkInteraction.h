#pragma once

#include "CoreMinimal.h"
#include "BaseInstantBlinkInteraction.h"
#include "AutomaticBlinkInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENURSE_API UAutomaticBlinkInteraction : public UBaseInstantBlinkInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _blinkDistancePercent;

public:
	UAutomaticBlinkInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UAutomaticBlinkInteraction) { return 0; }
