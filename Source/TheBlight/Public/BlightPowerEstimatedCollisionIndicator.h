#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlightPowerEstimatedCollisionIndicator.generated.h"

UCLASS(Blueprintable)
class ABlightPowerEstimatedCollisionIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnShowIndicator_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHideIndicator_Cosmetic();

public:
	ABlightPowerEstimatedCollisionIndicator();
};

FORCEINLINE uint32 GetTypeHash(const ABlightPowerEstimatedCollisionIndicator) { return 0; }
