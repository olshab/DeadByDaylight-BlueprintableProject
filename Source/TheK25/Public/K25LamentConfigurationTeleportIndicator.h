#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K25LamentConfigurationTeleportIndicator.generated.h"

UCLASS(Blueprintable)
class AK25LamentConfigurationTeleportIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateIndicatorVisibility(bool isVisible);

public:
	AK25LamentConfigurationTeleportIndicator();
};

FORCEINLINE uint32 GetTypeHash(const AK25LamentConfigurationTeleportIndicator) { return 0; }
